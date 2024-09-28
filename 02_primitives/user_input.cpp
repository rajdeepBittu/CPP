#include <iostream>
#include <string>
using namespace std;


int main(){
    string userTea;
    int teaQuantity;
    // ask for which tea
    cout<<"What would you like to order in tea? \n";
    getline(cin, userTea);

    //ask for tea quantity

    cout <<"how many cups of" <<userTea<< "would you like to have ? \n";

    cin>>teaQuantity;



    cout<<userTea;
    cout<<teaQuantity;



    return 0;
}