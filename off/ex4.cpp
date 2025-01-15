#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, m;

    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    vector<int> c;
    c.reserve(n + m);
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(), c.end());

    for(int i= 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    return 0;



    }
