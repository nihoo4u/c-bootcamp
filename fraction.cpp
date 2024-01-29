#include <iostream>
#include <cassert>
#include <cmath>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int x,int y):up(x),down(y){

}
Fraction::~Fraction(){

}
int Fraction::get_gcd(int x,int y){
    int gcd;
    if(x>y){
         gcd=y;
    }
    else{
         gcd=x;
    }
    while(gcd>0){
        if (y%gcd==0 && x%gcd==0){
            return gcd;
        } 
        gcd--;
        
    }
    return gcd;
}
void Fraction::get_fraction(int x,int y,int dominator){
    x=x/dominator;
    y=y/dominator;
    cout<<"분수는 -> "<<x<<"/"<<y<<"입니다"<<endl;
}
int Fraction::get_up(){
    return up;
}
int Fraction::get_down(){
    return down;
}
