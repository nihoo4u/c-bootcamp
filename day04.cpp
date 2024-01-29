#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    int sum=0;

    int x[5]={1,2,3,4,5};
    int* t=x;

    for(int i=0;i<5;i++){
        sum+=*(t++);
    }
    cout<<sum<<endl;    
    }


   
   






