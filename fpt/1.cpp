#include <iostream>
using namespace std;

// Hàm tính số Catalan (số tổ hợp hợp lệ)
int BracketCombinations(int num) {
    if (num == 0) return 1; // Trường hợp cơ sở: 0 cặp ngoặc => 1 cách hợp lệ

    // Khởi tạo giá trị ban đầu
    long long result = 1;

    // Tính số Catalan bằng công thức: C(n) = (2n)! / ((n+1)! * n!)
    // Tối ưu tính từng bước để tránh tràn số
    for (int i = 0; i < num; i++) {
        result = result * (2 * num - i) / (i + 1);
    }

    // Trả về kết quả cuối cùng
    return result / (num + 1);
}

int main() {
    int num;

    // Nhập số cặp dấu ngoặc
    cout << "Nhập số cặp dấu ngoặc: ";
    cin >> num;

    // Gọi hàm tính số tổ hợp và in kết quả
    cout << "Số tổ hợp hợp lệ: " << BracketCombinations(num) << endl;

    return 0;
}
