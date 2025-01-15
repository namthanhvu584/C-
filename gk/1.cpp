//Chương trình đọc hai chuỗi nhỏ hơn 100 ký tự, số ký tự cần so sánh và sử dụng hàm để hiển thị kết quả so sánh.

#include <iostream>
#include <cstring>
using namespace std;

int mem_cmp (const void *ptr1, const void *ptr2, size_t size){
    char *p1, *p2;
    p1 = (char*)ptr1;
    p2 = (char*)ptr2;
    while(size != 0){
        if(*p1 != *p2)
        return *p1 - *p2;
        p1++;
        p2++;
        size--;
    }
    return 0;
}

int main(){
    int num;
    char str1[100], str2[100];
    cout << "Nhap text 1: ";
    cin.getline(str1, sizeof(str1));
    cout << "Nhap text 2: ";
    cin.getline(str2, sizeof(str2));
    cout << "Nhap ki tu can check: ";
    cin >> num;
    cout << mem_cmp(str1, str2, num) << '\n';
    return 0;

}

