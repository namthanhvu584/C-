#include <iostream>
#include <string>

using namespace std;
int main(){
    int abc, a, b ,c;
    cin >> abc;
    int sum = 0;

    if(abc > 100 && abc <= 999){
        a = abc / 100;
        b = (abc - a * 100) / 10;
        c = abc - ( a * 100 + b * 10);
        sum = a + b + c;
        cout << sum;
    }else{
        cout << "Nhap so nguyen 3 chu so";
    }
    return 0;
}