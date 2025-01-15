#include <iostream>
#include <cstring>
using namespace std;

void noi_Chuoi(const char* str1, const char* str2, char*& result){
    int length = strlen(str1) +  strlen(str2) + 1;
    result = new char[length];
    strcpy(result, str1);
    strcat(result, str2);
}

int main(){
    
    char str1[100], str2[100];
    cout << "str1:" << endl;
    cin.getline(str1, 100);
    cout << "str2:" << endl;
    cin.getline(str2, 100);

    char* result = nullptr;

    noi_Chuoi(str1, str2, result);
    cout << "str3:" << result << endl;
    delete[] result;
    return 0;

}