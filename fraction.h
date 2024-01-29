#include <iostream>
#include <cassert>
using namespace std;
#ifndef Fraction_h
#define Fraction_h
class Fraction{
    private:
        int up;
        int down;
    public:
        Fraction(int x, int y);
        ~Fraction();
        int get_gcd(int x, int y);
        void get_fraction(int x,int y,int dominator);
        int get_up();
        int get_down();
};
#endif