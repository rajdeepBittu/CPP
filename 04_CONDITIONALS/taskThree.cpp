#include <iostream>
#include <string>
using namespace std;

int main(){
    int teaCups;
    double teaCupPrice=2.5,totalPrice,discountedPrice;
    cout<<"How many cups of tea do you want???"<<endl;
    cin>>teaCups;
    if(teaCups<10){
        cout<<"Sorry you dont get any discount!!!"<<endl;
        cout<<"your total bill is "<<teaCups*teaCupPrice<<endl;
    }else if(teaCups>=10 && teaCups<=20){
        cout<<"Congrats you get the '10%' discount"<<endl;
        double totalPrice = teaCups*teaCupPrice;
        discountedPrice=totalPrice-totalPrice*0.1;
        cout<<"Your total bill is "<<totalPrice<<endl;
        cout<<"After applying the offer your discounted price is "<<discountedPrice<<endl;
    }else if(teaCups>20){
        cout<<"Congrats you get the '20%'discount"<<endl;
        double totalPrice = teaCups*teaCupPrice;
        discountedPrice=totalPrice-totalPrice*0.2;
        cout<<"Your total bill is "<<totalPrice<<endl;
        cout<<"After applying the offer your discounted price is "<<discountedPrice<<endl;
    };


    return 0;
}