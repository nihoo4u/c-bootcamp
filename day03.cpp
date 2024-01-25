#include <iostream>
#include <iomanip>
using namespace std;
int c;

int main(){
    
    
    do{
        cout<<"input the number"<<endl;
        cin>>c;
        if(c==1)
            cout<<"1은 소수도 아니고 복소수도 아닙니다"<<endl;
        else{
            cout<<"다시 입력하세요"<<endl;
        }
    }
    while(c<=1);
    for(int i=2;i<c;i++){
        if(c%i==0){
            cout<<"소수가 아닙니다"<<endl;
            return 0;
        }
            
    }
    cout<<"소수입니다"<<endl;
    return 0;
    


    }
    
    
        
    
