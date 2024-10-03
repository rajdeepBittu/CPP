#include <iostream>
#include <string>
using namespace std;

int main(){
    int teaCups;
    cout<<"How many cups of tea do you want??"<<endl;
    cin>>teaCups;

    //while loops

    while(teaCups>0){
        teaCups-=1;
        cout<<"Serving a cup of tea \n"<<teaCups<<"  remaing"<<endl;

    };

    cout<<"all tea cups are served"<<endl;


    
    return 0;
}