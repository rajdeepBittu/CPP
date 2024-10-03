#include <iostream>
#include <string>
using namespace std;

int main(){
    string response;

    while(true){
        cout<<"Do you want more tea(type 'stop' to exit ) ??";
        getline(cin,response);

        if(response=="stop"){
            break;//exit the loop
        }
        cout<<"here is your another cup of tea. \n"<<endl;
    };

    cout<<"no more tea will be served"<<endl;
    


    return 0;
}