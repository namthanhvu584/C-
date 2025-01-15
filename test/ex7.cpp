#include <iostream>
using namespace std;

class Animal{
    public:
        void sound(){
            cout << "sound \n";
        }
};

class Dog : public Animal{
    public:
        void sound(){
            cout << "GOw gow \n";
        }
};

int main(){
    Animal myAninal;
    Dog mydog;

    myAninal.sound();
    mydog.sound();
    return 0;
}
