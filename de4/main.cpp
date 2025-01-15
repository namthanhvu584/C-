#include "Food.cpp"
#include "CannedFood.cpp"
#include "NonCFood.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<CannedFood> cfoods(3);
    cfoods[0] = CannedFood("A", 15, 20);
    cfoods[1] = CannedFood("B", 20, 30);
    cfoods[2] = CannedFood("C", 10, 15);

    int maxNumberBoxIndex = 0;
    for(int i = 0; i < cfoods.size() ; i++){
        if(cfoods[i].getNumberBox() > cfoods[maxNumberBoxIndex].getNumberBox()) maxNumberBoxIndex = i;
    }
    cfoods[maxNumberBoxIndex].setPrice(cfoods[maxNumberBoxIndex].getPrice());
    CannedFood::sortNumberBox(cfoods);
    for(auto v : cfoods) v.display();


    vector<NonCFood> nfoods(2);
    nfoods[0] = NonCFood("E", 20, 25);
    nfoods[1] = NonCFood("D", 1, 25);

    int maxWeightIndex = 0;
    for(int i = 0; i < nfoods.size(); i++){
        if(nfoods[i].getWeight() > nfoods[maxWeightIndex].getWeight()) maxWeightIndex = i;
    }
    nfoods[maxWeightIndex].setPrice(nfoods[maxWeightIndex].getPrice());
    NonCFood::sortWeight(nfoods);
    for(auto j : nfoods) j.display();

}
