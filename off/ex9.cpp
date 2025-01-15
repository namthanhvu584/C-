#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string toBinaryString(int num, int length) {
    string binary = "";
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    
    while (binary.length() < length) {
        binary = "0" + binary;
    }
    
    return binary;
}

int main() {
    int n;
    cin >> n;

    int totalStrings = pow(2, n);  

    for (int i = 0; i < totalStrings; i++) {
        string binaryString = toBinaryString(i, n);
        cout << binaryString << endl;
    }

    return 0;
}
