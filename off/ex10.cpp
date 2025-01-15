#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Chuỗi là palindrome" << endl;
    } else {
        cout << "Chuỗi không phải là palindrome" << endl;
    }

    return 0;
}
