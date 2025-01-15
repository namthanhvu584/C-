//22010003_Vu Thanh Nam
#include <iostream>
#include <vector>
#include <string>
using namespace std;


template <typename T>
void nhapDuLieu(vector<T>& v) {
    T val;
    while (cin >> val && val != T(-1)) {
        v.push_back(val);
    }
   
}

void nhapDuLieu(vector<string>& v) {
    string val;
    while (cin >> val && val != "end") {
        v.push_back(val);
    }
}

template <typename T>
T tinhTong(const vector<T>& v) {
    T sum = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    return sum;
}


string tinhTong(const vector<string>& v) {
    string s;
    for (size_t i = 0; i < v.size(); ++i) {
        s += v[i];
    }
    return s;
}

int main() {
    
    vector<int> vI;
    vector<double> vD;
    vector<string> vS;
    nhapDuLieu(vI);
    nhapDuLieu(vD);
    nhapDuLieu(vS);

    
    cout << tinhTong(vI) << endl;
    cout  << tinhTong(vD) << endl;
    cout << tinhTong(vS) << endl;

    return 0;
}

