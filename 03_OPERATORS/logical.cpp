#include <iostream>

using namespace std;

int main(){
  bool isStudent;
  int cups;
  cout<<"Are you a student (1 for yes and 0 for no) ??";
  cin>> isStudent;
  cout<<"How many cups of tea have you purchased?";
  cin>>cups;

  if(isStudent=1|| cups>15){
    cout<<"You are Eligible for the discount "<<endl;
  }else{
    cout<<"You are NOT Eligible for the discount "<<endl;

  }


    return 0;
}
//should be a student or ordered more than 15 cups