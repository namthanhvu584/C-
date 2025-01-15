#include <iostream>
#include <vector>
#include <limits>
using namespace std;

void calculatePrices(const vector<double>& prices, double& minPrice, double& maxPrice, double& avgPrice) {
    if (prices.empty()) {
        minPrice = maxPrice = avgPrice = 0.0;
        return;
    }

    minPrice = numeric_limits<double>::max();
    maxPrice = numeric_limits<double>::lowest();
    double sum = 0.0;

    for (double price : prices) {
        if (price < minPrice) minPrice = price;
        if (price > maxPrice) maxPrice = price;
        sum += price;
    }

    avgPrice = sum / prices.size();
}

int main() {
    vector<double> prices;
    double input;

    cout << "Enter product prices (enter a negative or zero value to stop):" << endl;

    while (true) {
        cout << "Price: ";
        cin >> input;
        if (input <= 0) break; 
        prices.push_back(input);
    }

    if (!prices.empty()) {
        double minPrice, maxPrice, avgPrice;
        calculatePrices(prices, minPrice, maxPrice, avgPrice);

        cout << "Minimum Price: " << minPrice << endl;
        cout << "Maximum Price: " << maxPrice << endl;
        cout << "Average Price: " << avgPrice << endl;
    } else {
        cout << "No valid prices entered." << endl;
    }

    return 0;
}
