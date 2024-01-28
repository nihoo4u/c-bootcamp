#include <iostream>
#include <iomanip>
using namespace std;
const double pi=3.141592;
class Circle{
    private:
        double radius;
        static int base;
    public:
        Circle(double radius);
        Circle(const Circle& x);
        ~Circle();
        static double get_base();
        double get_radius();
        double get_area();
        double get_perimeter();
        void setter();
};
Circle::Circle(double x):radius(x){
    base++;
}
Circle::Circle(const Circle& x):radius(x.radius){
    base++;

    cout<<"make the circle"<<get_base()<<endl;
}
Circle::~Circle(){
    cout<<"finish the circle"<<endl;
}
double Circle::get_base(){
    return base;
}

double Circle::get_radius(){
    return radius;
}
double Circle::get_area(){
    return pi*radius*radius;

}
double Circle::get_perimeter(){
    return 2*pi*radius;

}
void Circle::setter(){
    radius*=2;
}

int Circle::base=0;


int main(){
    double x;
    cin>>x;
    Circle circle1(x);
    cout<<fixed<<setprecision(3)<<endl;
    cout<<"Radius of Circle" <<Circle::get_base()<<"  "<<circle1.get_radius()<<endl;
    cout<<"Area of Circle"<<Circle::get_base()<<"  "<<circle1.get_area()<<endl;
    cout<<"Perimeter of Circle"<<Circle::get_base()<<"  "<<circle1.get_perimeter()<<endl;
    circle1.setter();

    Circle circle2(circle1);
    circle2.setter();
    cout<<"periemeter of Circle"<<Circle::get_base()<<"  "<<circle1.get_radius()<<endl;

    cout<<"periemeter of Circle"<<Circle::get_base()<<"  "<<circle2.get_radius()<<endl;

}