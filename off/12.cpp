#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

int main() {
    int n, m;

    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cin >> m;
    int b[m];
    for (int i = 0; i < m; ++i) {
        std::cin >> b[i];
    }

    int c[n + m];
    for (int i = 0; i < n; ++i) {
        c[i] = a[i];
    }
    for (int i = 0; i < m; ++i) {
        c[n + i] = b[i];
    }

    std::sort(c, c + n + m);

    std::ostringstream oss;
    for (int i = 0; i < n + m; ++i) {
        oss << c[i];
        if (i != n + m - 1) {
            oss << " ";  
        }
    }
    std::string output = oss.str();

    std::cout << output << std::endl;

    return 0;
}
