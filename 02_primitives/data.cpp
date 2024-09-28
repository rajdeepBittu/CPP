#include <iostream>

using namespace std;

int main(){
    int tealeaves= 50;//we get the result of 50 as both the data and the data type is intiger
    //int waterTemperature= 85.5;
    // give the result of 85 as we use the int data type but if we use float we can get the result of 85.5
    float waterTemperature = 85.5;
    // we get the result of 85.5 because of float
    //int priceOfTea = 299.99;
    //giving the result of 299 because we use int if use double then give the result of 299.99
    double priceOfTea = 299.99;
    //gives the result of 299.99 for using the double data types
    //int teaGrade = 'A';// print some number dont print A as use of int
    char teaGrade ='ABC';
    // print the character A as we use A
    // if we use multiple character then the last character will be printed(although gives some type of error)
    bool isTeaReady=true;//for the value of 0 or false it prints as 0 but for anyother value it generally gives the value of 1;if we use only the ' ' then it gives error
    cout<<tealeaves<<endl;
    cout<<waterTemperature<<endl;
    cout<<priceOfTea<<endl;
    cout<<teaGrade<<endl;
    cout<<isTeaReady<<endl;
}