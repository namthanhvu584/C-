#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T sumOfLargestPair(T a, T b, T c) {
    T max1 = max(a, max(b, c));
    T sum = a + b + c;
    return sum - min(a, min(b, c));
}

template <typename T>
void findMinMax(vector<T> arr, T &minVal, T &maxVal) {
    if (arr.empty()) return;
    minVal = *min_element(arr.begin(), arr.end());
    maxVal = *max_element(arr.begin(), arr.end());
}

int main() {

    cout << "Sum of the largest pair = " << sumOfLargestPair(3, 1, 2) << endl;


    vector<float> arr2 = {5.1, 1.1, 2.1, 3.1, 4.1};
    float minVal2, maxVal2;
    findMinMax(arr2, minVal2, maxVal2);
    cout << "Min = " << minVal2 << ", Max = " << maxVal2 << endl;


    cout << "Sum of the largest pair = " << sumOfLargestPair(-5, -2, -3) << endl;


    vector<float> arr4 = {-1.5, -3.2, -0.5, -4.7, -2.1};
    float minVal4, maxVal4;
    findMinMax(arr4, minVal4, maxVal4);
    cout << "Min = " << minVal4 << ", Max = " << maxVal4 << endl;

    return 0;
}
