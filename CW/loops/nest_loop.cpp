#include <iostream>
#include <string>
using namespace std;

int main(){
    //prinying a pattern with n no of rows and m no of column
    int m;
    cout<<"enter the no columns you need"<<endl;
    cin>>m;
    int n;
    cout<<"enter the no rows you need"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        };
        cout<<endl;
    }

   return 0;
}