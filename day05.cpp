#include <iostream>
#include <iomanip>

using namespace std;



int main(){
    int row_num;
    int col_num;
    cin>>row_num;
    cin>>col_num;
    int** p=new int* [row_num];
    for(int i=0;i<col_num;i++){
        p[i]=new int[col_num];
    }
    for(int i=0;i<row_num;i++){
        for(int j=0;j<col_num;j++){
            cout<<"p[i[[j]: "<<p[i][j]<<" ";
        }
        cout<<endl;
    } 
      

    
    
    
}








