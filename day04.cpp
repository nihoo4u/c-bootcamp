#include <iostream>
using namespace std;
class Account{
    private:
        int money;
        static int count;
    public:
        Account(int x);
        ~Account();
        int add_money(int x);
        int subtract_money(int x);
        int get_money();
        static int get_count();
        void print_money();

        


};
int Account::get_count(){
    return count;
}

Account::Account(int x):money(x){
    cout<<"Account를 시작합니다."<<endl;
}
int Account::add_money(int x){
    count++;
    money+=x;
    return money;
}
int Account::subtract_money(int x){
    count++;
    money-=x;
    return money;
}
int Account::get_money(){
    return money;
}

void Account::print_money(){
    cout<<money<<endl;
}
Account::~Account(){
    count--;
}
int Account::count=0;
int main(){
    Account account1(50);
    cout<<"account1의 잔고는"<<account1.get_money()<<endl;
    Account account2(34);
    cout<<"account2의 잔고는"<<account2.get_money()<<endl;
    account2.add_money(100);
    cout<<"account2의 잔고는"<<account2.get_money()<<endl;
    account2.add_money(100);
    cout<<"account2의 잔고는"<<account2.get_money()<<endl;

    cout<<"총 거래 내역은 : "<<Account::get_count()<<"입니다";

    
}