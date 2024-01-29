#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    // int score=92;
    // int& rscore=score;
    // cout<<"score: "<<score<<endl;
    // cout<<"rscore: "<<rscore<<endl;
   
    // int num=80;
    // rscore=num;
   
    // cout<<"rscore: "<<rscore<<endl;
    // cout<<"score: "<<score<<endl;
    int score=90;
    int rscore=80;
    int temp;
    temp=score;
    score=rscore;
    rscore=temp;
    cout<<"score: "<<score<<endl;
    cout<<"rscore: "<<rscore<<endl;

}