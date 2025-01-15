//noi chuoi
#include <iostream>
#include <cstring>
using namespace std;

void str_cat(char *fin, const char *str1, const char *str2) {
    while(*str1 != '\0') *fin++ = *str1++;
    while(*str2 != '\0') *fin++ = *str2++;
    *fin = '\0';
}

int main(){
    char *fin, str1[100], str2[100];
    int len1, len2;
    cout << "Nhap chuoi 1: ";
    cin.getline(str1, sizeof(str1));
    len1 = strlen(str1);
    cout << "Nhap chuoi 2: ";
    cin.getline(str2, sizeof(str2));
    len1 = strlen(str2);
    fin = new char[len1 + len2 + 1];
    str_cat(fin, str1, str2);
    cout << "Ket qua: " << fin << '\n';
    delete[] fin;
    return 0;
}