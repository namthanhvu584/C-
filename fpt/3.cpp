/*BinaryTree
Trình tự In-order (inOrder)
Định nghĩa: Trong trình tự in-order, các nút được duyệt theo thứ tự:
Duyệt cây con bên trái
Truy cập nút gốc
Duyệt cây con bên phải
Trình tự Pre-order (preOrder)
Định nghĩa: Trong trình tự pre-order, các nút được duyệt theo thứ tự:
Truy cập nút gốc
Duyệt cây con bên trái
Duyệt cây con bên phải */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

// Hàm kiểm tra xem có thể xây dựng cây nhị phân từ in-order và pre-order hay không
bool canConstructTree(const vector<int>& inOrder, const vector<int>& preOrder) {
    // Nếu số lượng phần tử không bằng nhau, không thể xây dựng cây
    if (inOrder.size() != preOrder.size()) return false;

    unordered_map<int, int> inOrderMap; // Bảng ánh xạ để lưu vị trí của các nút trong in-order
    for (int i = 0; i < inOrder.size(); i++) {
        inOrderMap[inOrder[i]] = i; // Gán vị trí của mỗi nút
    }

    set<int> seen; // Tập hợp để theo dõi các nút đã thấy
    for (int i = 0; i < preOrder.size(); i++) {
        // Nếu nút đã thấy, không thể xây dựng cây
        if (seen.count(preOrder[i])) return false; 
        seen.insert(preOrder[i]); // Thêm nút vào tập hợp đã thấy

        int index = inOrderMap[preOrder[i]]; // Lấy vị trí của nút trong in-order
        // Kiểm tra xem có nút nào chưa thấy trong cây con bên trái không
        for (int j = 0; j < index; j++) {
            if (seen.count(inOrder[j]) == 0) return false; 
        }
    }

    return true; // Có thể xây dựng cây
}

// Hàm chính để xử lý đầu vào và gọi hàm kiểm tra
string TreeConstructor(const string strArr[], int arrLen) {
    vector<int> inOrder, preOrder;

    // Phân tích cú pháp đầu vào
    for (int i = 0; i < arrLen; i++) {
        int a, b;
        char c;
        sscanf(strArr[i].c_str(), "%d%c%d", &a, &c, &b); // Đọc giá trị từ chuỗi
        inOrder.push_back(a); // Thêm vào inOrder
        preOrder.push_back(b); // Thêm vào preOrder
    }

    return canConstructTree(inOrder, preOrder) ? "true" : "false"; // Gọi hàm kiểm tra
}

int main() {
    string strArr[] = {"1-2", "2-4", "3-6", "4-5"};
    int arrLen = sizeof(strArr) / sizeof(strArr[0]);
    cout << TreeConstructor(strArr, arrLen) << endl; // In kết quả
    return 0;
}