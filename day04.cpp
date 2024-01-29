#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    int score=92;
    int& rscore=score;
    cout<<"score: "<<score<<endl;
    cout<<"rscore: "<<rscore<<endl;
   
    int num=80;
    rscore=num;
   
    cout<<"rscore: "<<rscore<<endl;
    cout<<"score: "<<score<<endl;
    cout<<endl;


}