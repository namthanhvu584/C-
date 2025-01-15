#include<iostream>
using namespace std;
int main(){
    double hight;
    int gender;
    cin >> gender;
    cin >> hight;

    switch (gender)
    {
    case 0:
        if(hight < 1.7) 
            cout << "Short";
        else if (hight >= 1.7 && hight < 1.8)
            cout << "Normal";
        else if (hight >= 1.85)
            cout << "Tall";
        break;

    case 1:
        if(hight < 1.6) 
            cout << "Short";
        else if (hight >= 1.6 && hight < 1.75)
            cout << "Normal";
        else if (hight >= 1.75)
            cout << "Tall";
        break;
    
    default:
        cout << "Wrong Input";
    }
}