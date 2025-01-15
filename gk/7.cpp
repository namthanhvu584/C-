#include<iostream>
using namespace std;
int main(){
    double a, b, c, max;
    cout << "Nhap gia: ";
    cin >> a >> b >> c;

    cout << "Max: " << ((a >= b && a >= c)? a : (b > a && a > c)? b : c ) << endl;
    return 0;

}