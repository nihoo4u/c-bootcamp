#include <iostream>
#include "fraction.h"

using namespace std;
int main(){
    int a,b;
    int z,c;
    cin>>a>>b;
    Fraction fraction1(a,b);
    a=fraction1.get_up();
    b=fraction1.get_down();
    z=fraction1.get_gcd(a,b);
    fraction1.get_fraction(a,b,z);
} 