#include <iostream>
using namespace std;

class InventoryItem {
    private: 
        string description;
        double cost;
        int units;

    public:
        InventoryItem() :  description(""), cost(0), units(0) {}

        InventoryItem(string desc, double c, int u) : description(desc), cost(c), units(u) {}

        void setDescription(string desc){
            description = desc;
        }
        string getDesciption() const {
            return description;
        }

        void setCost(double c){
            cost = c;
        }
        double getCost() const {
            return cost;
        }

        void setUnits(int u){
            units = u;
        }
        double getUnits() const {
            return units;
        }

};

int main(){
    const int SIZE = 3;
    InventoryItem items[SIZE];

    for(int i = 0; i < SIZE; i++){
        string description;
        double cost;
        int units;

        cout << "Nhap thong tin mat hang: " << i+ 1 << "\n";
        cout << "Mo ta: ";
        cin.ignore();
        getline(cin, description);
        cout << "Chi phi: " ;
        cin >> cost;
        cout << "So luong: ";
        cin >> units;

        items[i].setDescription(description);
        items[i].setCost(cost);
        items[i].setUnits(units);
    }

    cout << "\nThong tin mat hang:\n";
    for(int i =0; i < SIZE; i++){
        cout << "Mat hang: " << i + 1 << "\n";
        cout << "Mo ta: " << items[i].getDesciption() << "\n";
        cout << "Chi Phi: " << items[i].getCost() << "\n";
        cout << "So Luong: " << items[i].getUnits() << "\n";
        cout << "-----------------------\n";

    }
    return 0;
}