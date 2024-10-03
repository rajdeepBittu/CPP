#include <iostream>
#include <string>
using namespace std;

int main(){
    string response;

//DO WHILE LOOP
    do {
        cout<<"Do you want more tea??(yes/no)"<<endl;
        getline(cin,response);
    }/*while(response!="No"||response!="NO"||response!="no");*/ while(response=="yes"||response=="YES");





    return 0;
}