//tinh a mu b thu cong
#include <iostream> 
using std::cout; 
using std::cin; 
#include <cmath>
double power(double a, int b);
int main () {
int exp; double base;
cout << "Enter base: ";
cin >> base;
cout << "Enter exponent: "; cin >> exp;
cout << base << " power " << exp << " = " << power(base, exp) <<'\n';
return 0; }
double power(double a, int b) {
int i, exp; double val;
val = 1; // Necessary initialization.
exp = b;
if(exp < 0) // If the exponent is negative, we make it positive.
exp = -exp; // using for loop for
 
for(i = 0; i < exp; i++) val *= a;
if(b < 0)
val = 1/val;
return val; }