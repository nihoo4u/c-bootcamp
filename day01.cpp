#include <iostream>
#include <typeinfo>
#include <limits>
#include <iomanip>
// #include <string>
using namespace std;
// unsigned int x;
// unsigned int y;


int main(void){
    int month;
    int day=0;
    int m1=31;
    int m2=28;
    int m3=31;
    int m4=30;
    int m5=31;
    int m6=30;
    int m7=31;
    int m8=31;
    int m9=30;
    int m10=31;
    int m11=30;
    int m12=31;

  
    cin>>month;
    switch(month){
        case 12 : day+=m12;
        case 11 : day+=m11;
        case 10 : day+=m10;
        case 9 : day+=m9;
        case 8 : day+=m8;
        case 7 : day+=m7;
        case 6 : day+=m6;
        case 5 : day+=m5;
        case 4 : day+=m4;
        case 3 : day+=m3;
        case 2: day+=m2;
        case 1 : day+=m1;
        

       


    }
    cout<<day;
    
    return 0;



}
    
    
 