#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaTypes[5] = {"Oolong Tea","Orange Tea","Green Tea","Black Tea","Lemon Tea"};
    for(int i=0;i<5;i++){
        if(teaTypes[i]=="Green Tea"){
            cout<<"Skipping the "<<teaTypes[i]<<endl;
            continue;
        }
        cout<<"brewing  "<<teaTypes[i]<<"..."<<endl;
    };

/*remember one thing that in a list or arrray the index of the first word starts with the value of 0
so for the above 'for loop' we use the conditional as i<=3 the it will print an extra brewing but as there
will be no tea name remaining to print so it will be extra to avoid this problem we have to use i<3  */

    return 0;
}