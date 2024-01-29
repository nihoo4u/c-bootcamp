#include <iostream>
#include <iomanip>
using namespace std;


void get(int x[2][4],int y[4][2],int& t);
int main(){
    int sum=0;

    int v[2][4]={{1,2,3,4},{5,6,7,8}};
    int m[4][2];
    get(v,m,sum);
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    }

void get(int x[2][4],int y[4][2],int& t){
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            y[j][i]=x[i][j];
            t+=x[i][j];
        }
    }
}
   
   






