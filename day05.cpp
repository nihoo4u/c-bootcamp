#include <iostream>
#include <iomanip>

using namespace std;



int main(){
    int capacity;
    int number;
    cin>>capacity;
    int *num_list=new int[capacity];
    for(int i=0;i<capacity;i++){
        cin>>number;
        *(num_list+i)=number;
    }
    int small,big;
    small=1000000;
    big=0;
    for(int i=0;i<capacity;i++){
        if (*(num_list+i)<small){
            small=*(num_list+i);
        }
        if (*(num_list+i)>big){
            big=*(num_list+i);
        }


    }
    cout<<"smallest: "<<small<<endl;
    cout<<"biggest: "<<big<<endl;

    

}







