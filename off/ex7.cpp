#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int heights[100000];  

    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    for (int i = 0; i < N; ++i) {
        int count = 0;
        for (int j = 0; j < N; ++j) {
            if (*(heights + j) < *(heights + i)) {
                ++count;
            }
        }
        cout << count << " ";
    }

    return 0;
}
