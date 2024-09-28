#include <iostream>

using namespace std;

int main(){
    int teabags;
    cout<<"Enter the number of teabags you have : "<<endl;
    cin>>teabags;
    if(teabags<10){
        teabags+=5;//teabag = teabag +5
    };

    cout<<"Your total bags are: "<<teabags;

    return 0;
}