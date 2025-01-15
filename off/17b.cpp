#include <iostream>
using namespace std;

class Rect {
    private:
        double l, h;
    public:
        Rect(double length, double height)  : l(length), h(height) {}
        double getArea() const {
            return l * h;
        }
};

class Circle {
    private:
        double r;
    public:
        Circle(double radius) : r(radius) {}
        double getArea() const {
            return 3.14 * r * r;
        }
};

template <typename Type>
double calculateArea(const Type* type){
    return type->getArea();
}

int main(){
    Rect rect(3, 7);
    Circle circle(4.5);

    cout << "S Rectangle: " << calculateArea(&rect) << endl;
    cout << "S Circle: " << calculateArea(&circle) << endl;

    return  0;
}