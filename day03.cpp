#include <iostream>
#include <iomanip>
using namespace std;
int day=0;
int startday;

int main(){
    cout<<"날짜 수를 입력하세요"<<endl;
    cin>>day;
    cout<<"첫 날의 요일을 입력하세요"<<endl;
    cin>>startday;
    cout<<"Sun Mon Tue Wed Thr Fri Sat"<<endl;
    for(int j=0;j<startday;j++)
        cout<<"    ";
    for(int i=1;i<=day;i++){
        startday++;
        cout<<setw(3)<<i<<" ";
        if(startday%7==0){
            cout<<endl;
        }
    }
    return 0;


    }
    
    
        
    
