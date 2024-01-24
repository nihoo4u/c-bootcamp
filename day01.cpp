#include <iostream>
#include <typeinfo>
#include <limits>
#include <iomanip>
// #include <string>
using namespace std;
// unsigned int x;
// unsigned int y;


int main(void){
    int a;
    cin>>a;
    cout<<fixed<<setprecision(2);
    if (a>300000000){
        cout<<"cost*0.5 -> "<<a*0.5;

    }
    else{
        if (a>150000000){
            cout<<"cost*0.45 -> "<<a*0.45;
        }
    }
    return 0;



}
    
    
 