#include <iostream>
using namespace std;

// Hàm mẫu trả về tổng của hai giá trị lớn nhất
template <typename T>
T sumTwoLargest(T a, T b, T c) {
    // Tìm giá trị nhỏ nhất trong ba số
    T minVal = min(a, min(b, c));
    
    // Tổng của hai giá trị lớn nhất = Tổng ba số - Giá trị nhỏ nhất
    return (a + b + c) - minVal;
}

// Hàm mẫu trả về void, xác định giá trị lớn nhất và nhỏ nhất của mảng
template <typename T>
void findMaxMin(const T arr[], int size, T& maxVal, T& minVal) {
    maxVal = arr[0];
    minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
}

// Hàm main để kiểm tra
int main() {
    // Kiểm tra hàm sumTwoLargest với ba giá trị nhập từ người dùng
    int a, b, c;
    cout << "Nhập ba giá trị nguyên: ";
    cin >> a >> b >> c;
    cout << "Tổng của hai giá trị lớn nhất: " << sumTwoLargest(a, b, c) << endl;

    // Kiểm tra hàm findMaxMin với mảng
    int size;
    cout << "\nNhập số lượng phần tử trong mảng: ";
    cin >> size;

    int arr[size];
    cout << "Nhập các phần tử trong mảng: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int maxVal, minVal;
    findMaxMin(arr, size, maxVal, minVal);
    cout << "Giá trị lớn nhất trong mảng: " << maxVal << endl;
    cout << "Giá trị nhỏ nhất trong mảng: " << minVal << endl;

    return 0;
}
