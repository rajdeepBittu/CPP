#include <iostream>

using namespace std;
int main(){
    int x=5;
    cout<<x++<<endl;//post incremet after cout x value changes so next line value is 6 whereas in this line x value is 5
    cout<<x<<endl;//6
    cout<<++x<<endl;//pre increment so the output increases by 1 from prev line
    cout<<x<<endl;//7
}