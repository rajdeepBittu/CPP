#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaOrder;

    cout<<"Enter your order !!!"<<endl;

    getline(cin, teaOrder);

    if(teaOrder=="Green Tea"){
        cout<<"Your order is confirmed,your order is 'Green Tea'"<<endl;
    };
    
    return 0;
}