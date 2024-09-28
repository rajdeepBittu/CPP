#include <iostream>

using namespace std;

int main(){
    float teaPrice=49.99;
    int roundedTeaPrice = (int) teaPrice; // first int is used to store the data as intiger;
    // second int is used to convert the value in int;

    int teaQuantity = 2;
    int totalPrice_int= teaPrice*teaQuantity;//does not keeps the precision
    float totalPrice_float= teaPrice*teaQuantity;//keeps the precision


    cout<<roundedTeaPrice<<endl;
    cout<<totalPrice_int<<endl;
    cout<<totalPrice_float<<endl;






}