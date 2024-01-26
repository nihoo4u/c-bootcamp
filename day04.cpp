#include <iostream>
using namespace std;
class Bank{
    private:
        int money;
        static int count;
    public:
        Bank(int x);
        int get_money();
        int add_moeny(int x);
        int subtract_monet(int x);
        static int get_count();
};

Bank::Bank(int x):money(x){
    cout<<"bank program started"<<endl;
}
int Bank::get_money(){
    count++;
    return money;
}
int Bank::add_moeny(int x){
    money+=x;
    return money;
}
int Bank::subtract_monet(int x){
    money+=x;
    return money;
}
int Bank::get_count(){
    return count;
}
int Bank::count=0;


int main(){
    Bank bank1(30);
    cout<<"은행잔고는"<<bank1.get_money()<<", count:"<<bank1.get_count()<<endl;
    bank1.add_moeny(20);
    cout<<"은행잔고는"<<bank1.get_money()<<", count:"<<Bank::get_count()<<endl;
   



    

    
}