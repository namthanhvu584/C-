#pragma once
#include <iostream>
#include <vector>
#include "Food.cpp"
#include <vector>
#include <iostream>
using namespace std;

class NonCFood : public Food {
    private:
        double weight;
    public:
        NonCFood(){}
        NonCFood(string name, double price, double weight) : Food(name, price){
            this->weight = weight;
        }
        void setWeight(double weight){
            this->weight = weight;
        }
        double getWeight(){
            return weight;
        }

        void display(){
            cout << "Name: " << Food::getName() << endl;
            cout << "Price: " << Food::getPrice() << endl;
            cout << "Weight: " << this->weight << endl;
        }

        static void sortWeight(vector<NonCFood> &vt){
            for(int i = 0; i < vt.size() - 1; i++){
                for(int j = i + 1; i < vt.size(); j++){
                    if(vt[j].weight < vt[i].weight){
                        swap(vt[j].weight , vt[i].weight);
                    }
                }
            }
        }
};
