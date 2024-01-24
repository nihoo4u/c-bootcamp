#include <iostream>
#include <typeinfo>
#include <limits>
#include <iomanip>
// #include <string>
using namespace std;
// unsigned int x;
// unsigned int y;


int main(void){
    unsigned int a,b,c,sum;
    double m,x;
    cin>>a>>b>>c;
    cout<<fixed;
    sum=a+b+c;
    m=sum/3;
    x=((a-m)*(a-m)+(b-m)*(b-m)+(c-m)*(c-m))/3;
    cout<<"합은: "<<sum<<endl;
    cout<<"평균은 "<<m<<endl;
    cout<<"분산은 "<<setprecision(3)<<x<<endl; 





}
    
    
 