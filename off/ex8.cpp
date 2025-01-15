#include<iostream>
#include<string>
using namespace std;

int main(){
    string z;
    cin >> z;
    string reversed_z = string(z.rbegin(), z.rend());
    cout << reversed_z << endl;
    return 0;
}