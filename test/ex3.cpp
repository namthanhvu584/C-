#include <iostream>
using namespace std;

 int main(){
    int ages[] = {20, 16, 45, 3, 23};
    int i;
    int bigest = ages[0];
    for(int age: ages ){
        if(bigest < age){
            bigest = age;
        }
    }
    cout << "The bigest is: " << bigest << "\n";
 }