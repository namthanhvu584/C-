/*input: 1 ki tu, n lan lap 
 output: so lan lap, ki tu sau no*/
#include <iostream> 
using namespace std;
char show(int num, char c);
int main(){
    char c;
    int i;
    cout << "Nhap ki tu: ";
    cin >> c;
    cin.get();
    cout << "So lan lap: ";
    cin >> i;
    c = show(i, c);
    cout << "\n" << c << "\n";
    return 0;
}

char show(int num, char c){
    for(int i = 0; i < num; i++)
    cout << c; 
    switch (c)
    {
    case 'a':
    case 'b':
    case 'c':
    return c;
    
    default:
        return c+1;
    }
}