#include <iostream>
using namespace std;

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
};

int main(){
    Car car1("Vin", "RD3", 2024);
    Car car2("BMW", "R3", 2020);

    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
}