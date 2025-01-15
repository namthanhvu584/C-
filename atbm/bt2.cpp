#include <std>
#include <string>
#include <cctype>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

string affineEncrypt(const string& plaintext, int a, int b) {
    if (gcd(a, 26) != 1) {
        throw invalid_argument("Khóa a phải nguyên tố cùng nhau với 26.");
    }

    string ciphertext = "";

    for (char ch : plaintext) {
        if (isalpha(ch)) { 
            char upperChar = toupper(ch); 
            int p = upperChar - 'A'; 
            int c = (a * p + b) % 26; 
            ciphertext += (char)(c + 'A');
        } else {
            ciphertext += ch;
        }
    }

    return ciphertext;
}

int main() {
    try {
        string plaintext;
        cout << "Nhập thông điệp cần mã hóa: ";
        getline(cin, plaintext);

        int a, b;
        cout << "Nhập khóa a (phải nguyên tố cùng nhau với 26): ";
        cin >> a;
        cout << "Nhập khóa b: ";
        cin >> b;

        string ciphertext = affineEncrypt(plaintext, a, b);
        cout << "Thông điệp đã mã hóa: " << ciphertext << endl;
    } catch (const exception& e) {
        cerr << "Lỗi: " << e.what() << endl;
    }

    return 0;
}
