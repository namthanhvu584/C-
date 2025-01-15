#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Hàm tính GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm mã hóa Affine
string affineEncrypt(const string& plaintext, int a, int b) {
    // Kiểm tra tính hợp lệ của khóa a
    if (gcd(a, 26) != 1) {
        throw invalid_argument("Khóa a phải nguyên tố cùng nhau với 26.");
    }

    string ciphertext = "";

    // Duyệt từng ký tự trong thông điệp
    for (char ch : plaintext) {
        if (isalpha(ch)) { // Chỉ mã hóa chữ cái
            char upperChar = toupper(ch); // Chuyển ký tự thành chữ hoa
            int p = upperChar - 'A'; // Chuyển ký tự thành số (A = 0, B = 1, ...)
            int c = (a * p + b) % 26; // Công thức mã hóa
            ciphertext += (char)(c + 'A'); // Chuyển số thành ký tự
        } else {
            ciphertext += ch; // Giữ nguyên ký tự không phải chữ cái
        }
    }

    return ciphertext;
}

int main() {
    try {
        // Nhập thông điệp
        string plaintext;
        cout << "Nhập thông điệp cần mã hóa: ";
        getline(cin, plaintext);

        // Nhập khóa a và b
        int a, b;
        cout << "Nhập khóa a (phải nguyên tố cùng nhau với 26): ";
        cin >> a;
        cout << "Nhập khóa b: ";
        cin >> b;

        // Mã hóa thông điệp
        string ciphertext = affineEncrypt(plaintext, a, b);
        cout << "Thông điệp đã mã hóa: " << ciphertext << endl;
    } catch (const exception& e) {
        // Xử lý lỗi
        cerr << "Lỗi: " << e.what() << endl;
    }

    return 0;
}
