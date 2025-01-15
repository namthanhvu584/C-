#include<iostream>
#include <iomanip> 
using namespace std;
int main (){
    double epsilon;
    cin >> epsilon;

    if (epsilon <= 0 || epsilon >= 1) {
        cout << "Yeu cau nhap 0 < epsilon < 1" << endl;
        return 0;  
    }
    double e = 1.0; 
    double term = 1.0; 
    int n = 1;

    while (term >= epsilon) {
        term = term / n;  
        e += term;        
        n++;
    }

    
    cout << fixed << setprecision(5) << e << endl;

    return 0;
}