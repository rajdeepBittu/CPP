#include <iostream>
#include <string>
using namespace std;

int main(){
    int choice;
    double price;

    cout<<"select your tea \n";
    cout<<"1. Green Tea\n";
    cout<<"2. Lemon Tea\n";
    cout<<"3. Oolong Tea\n";
    cout<<"Enter your choices in number: \n";

    cin>>choice;

    switch(choice){
        case 1:
            price = 2.0;
            cout<<"You selected Green Tea. Price: "<<price<<endl;
            break;//break is the code to overcome the waterfall problem if we don't use it then after matching of one case all of the code that choice will be executed....
        case 2:
            price = 3.0;
            cout<<"You selected Lemon Tea. Price: "<<price<<endl;
            break;
        case 3:
            price = 4.0;
            cout<<"You selected Oolong Tea. Price: "<<price<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
    
    return 0;
}