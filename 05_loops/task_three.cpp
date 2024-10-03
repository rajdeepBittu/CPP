#include <iostream>
#include <string>
using namespace std;

int main(){
    int teaCups = 5;
    for(int i =1;i<=teaCups;i++){
        cout<<"Brewing cup "<<i<<" of Tea...."<<endl;
    };
    cout<<"out side of loop"<<endl;
    cout<< "and remember we can't use the value of i but inside the curly braces of loop we can use the value of i";



    return 0;
}