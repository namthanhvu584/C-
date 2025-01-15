#include <iostream>
#include <vector>
#include <algorithm>  // Thư viện cho hàm sort và lower_bound
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);  // Khai báo mảng lưu chiều cao
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    // Tạo một bản sao của mảng và sắp xếp nó
    vector<int> sorted_heights = heights;
    sort(sorted_heights.begin(), sorted_heights.end());

    // Đếm số lượng phần tử nhỏ hơn cho mỗi phần tử
    for (int i = 0; i < N; ++i) {
        // Tìm số lượng phần tử nhỏ hơn heights[i] bằng cách dùng lower_bound
        int count = lower_bound(sorted_heights.begin(), sorted_heights.end(), heights[i]) - sorted_heights.begin();
        cout << count << " ";
    }

    return 0;
}
