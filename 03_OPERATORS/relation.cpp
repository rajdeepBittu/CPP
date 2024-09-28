#include <iostream>

using namespace std;

int main(){
    int cups;
    cout<<"Enter the number of cups you have";
    cin>>cups;
    if(cups>20){
        cout << "You will get a GOLD BADGE"<<endl;
    }else if(cups>=10&&cups<=20){cout<<"You will get a SILVER BADGE"<<endl;}
    else{cout<<"NO BADGE FOR YOU"<<endl;}

    return 0;
}