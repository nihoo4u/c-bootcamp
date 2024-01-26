#include <iostream>
using namespace std;
float pi=3.14;
class Circle{
    private:
        double radius;
    public:
        Circle(double x);
        Circle(Circle& z);
        // ~Circle();
        void sett_radius();
        double get_radius();
        double get_perimeter();
        double get_area();
};
double Circle::get_radius(){
    return radius;
}
double Circle::get_perimeter(){
    return 2*pi*radius;
}
double Circle::get_area(){
    return pi*radius*radius;
}
void Circle::sett_radius(double x){
    radius=x;
}
Circle::Circle(double x)
:radius(x){
    cout<<"circle1 생성자가 호출되었습니다"<<endl;
}
Circle::Circle(Circle& z):radius(z.radius*10){
    cout<<"circle 2 생성자가 호출되었습니다"<<endl;
}



int main(){
    Circle circle1(5.2);
    Circle circle2(circle1);
    circle1.sett_radius(4.5);

    cout<<"circle1  "<<circle1.get_radius()<<endl;
    cout<<"circle1  "<<circle1.get_perimeter()<<endl;
    cout<<"circle1  "<<circle1.get_area()<<endl<<endl;
    cout<<"circle2  "<<circle2.get_radius()<<endl;
    cout<<"circle2  "<<circle2.get_perimeter()<<endl;
    cout<<"circle2  "<<circle2.get_area()<<endl;


    return 0;

    
}