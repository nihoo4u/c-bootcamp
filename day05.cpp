#include <iostream>
#include <iomanip>

using namespace std;

void convey(int(*m)[3]);

int main(){
    int arr[2][3]={{10,20,30},{40,50,60}};
    convey(arr);
    
    
    
}

void convey(int(*m)[3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<setw(3)<<m[i][j];
        }
        cout<<endl;
    }
}






