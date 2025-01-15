// nhap 3 gia tri [1,2] va output gia tri min va avg
#include<iostream>
#include<cmath>
using namespace std;

double min_avg(double a, double b, double c){
    int k = 0;
    double sum = 0;

    if(a < b && a < c ) cout << "Min: " << a << '\n';
    else if(b < a && b < c ) cout << "Min: " << b << '\n';
    else  cout << "Min: " << c << '\n';

    if(a >= 1 && a <= 2){
        sum += a;
        k++;
    }
    if(b >= 1 && b <= 2){
        sum += b;
        k++;
    }
    if(c >= 1 && c <= 2){
        sum += c;
        k++;
    }

    if(k != 0) return sum/k;
    else return -1;
}

int main(){
    double m, n, p, q;
    cout << "Nhap cac so nguyen: ";
    cin >> m >> n >> p;
    q = min_avg(m, n, q);

    if(q == -1) cout << "Gia tri nhap vao khong thoa man!";
    else cout << "Avg: " << q << '\n';
    return 0;
}