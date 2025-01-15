#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

string MinWindowSubstring(string strArr[], int arrLength) {
    string N = strArr[0]; // Chuỗi đầu tiên
    string K = strArr[1]; // Chuỗi thứ hai

    unordered_map<char, int> charCount; // Đếm số lượng ký tự cần trong K
    for (char c : K) {
        charCount[c]++;
    }

    int required = charCount.size(); // Số lượng ký tự duy nhất cần
    int left = 0, right = 0, formed = 0; // Con trỏ cửa sổ và số ký tự đã tìm đủ
    unordered_map<char, int> windowCount; // Đếm số ký tự hiện tại trong cửa sổ

    int minLen = INT_MAX; // Độ dài nhỏ nhất
    int startIdx = 0;     // Vị trí bắt đầu chuỗi con nhỏ nhất

    // Bắt đầu mở rộng cửa sổ
    while (right < N.size()) {
        char c = N[right];
        windowCount[c]++;

        if (charCount.count(c) > 0 && windowCount[c] == charCount[c]) {
            formed++;
        }

        // Thu hẹp cửa sổ khi đã tìm đủ ký tự
        while (left <= right && formed == required) {
            c = N[left];

            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                startIdx = left;
            }

            windowCount[c]--;
            if (charCount.count(c) > 0 && windowCount[c] < charCount[c]) {
                formed--;
            }

            left++; // Dịch cửa sổ sang phải
        }

        right++; // Mở rộng cửa sổ sang phải
    }

    return minLen == INT_MAX ? "" : N.substr(startIdx, minLen);
}

int main() {
    string strArr[] = {"aaabaaddae", "aed"};
    int arrLength = sizeof(strArr) / sizeof(strArr[0]);

    cout << "Chuỗi con nhỏ nhất: " << MinWindowSubstring(strArr, arrLength) << endl;
    return 0;
}
