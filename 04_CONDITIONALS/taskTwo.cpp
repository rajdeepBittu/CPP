#include <iostream>
#include <string>
using namespace std;

int main(){
    double hours;
    cout<<"Enter the time!!!"<<endl;
    cin>>hours;
    if(hours>=8.00 && hours<=18.00){
        cout<<"THE SHOP IS OPEN"<<endl;
     } //else if(hours<=8.00 || hours>=18){
    //     cout<<"THE SHOP IS CLOSED"<<endl;
    // }else if(hours<0 || hours>23){
    //     cout<<"Time is invalid"<<  endl;
    // };
    else{
        cout<<'THE SHOP IS CLOSED'<<endl;
    }
    
    return 0;
}