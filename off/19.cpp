#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

class Circle {
private:
    double radius;   
    string color;    

public:
    Circle() : radius(1.0), color("red") {}

    Circle(double r) : radius(r), color("red") {}

    Circle(double r, const string &c) : radius(r), color(c) {}

    double getRadius() const {
        return radius;
    }

    string getColor() const {
        return color;
    }

    double getArea() const {
        return M_PI * radius * radius;
    }
};

int main() {

    Circle c1(2.0, "blue"); 
    Circle c2(2.0);         
    Circle c3;              


    cout << "Circle c1:" << endl;
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Color: " << c1.getColor() << endl;
    cout << "Area: " << c1.getArea() << endl << endl;


    cout << "Circle c2:" << endl;
    cout << "Radius: " << c2.getRadius() << endl;
    cout << "Color: " << c2.getColor() << endl;
    cout << "Area: " << c2.getArea() << endl << endl;


    cout << "Circle c3:" << endl;
    cout << "Radius: " << c3.getRadius() << endl;
    cout << "Color: " << c3.getColor() << endl;
    cout << "Area: " << c3.getArea() << endl;

    return 0;
}
