//Viết hàm nhận một mảng và kích thước của mảng, trả về giá trị lớn nhất bằng cách sử dụng con trỏ.
#include <iostream>
using namespace std;

int findMax(int *arr, int size) {
    int maxVal = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxVal)
            maxVal = *(arr + i);
    }
    return maxVal;
}

int main() {
    int arr[] = {1, 3, 5, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max value in array: " << findMax(arr, size) << endl;
    return 0;
}

// Viết hàm nhận một mảng và đảo ngược nó bằng cách sử dụng con trỏ.
#include <iostream>
using namespace std;

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    reverseArray(arr, size);

    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

// Viết hàm kiểm tra số nguyên tố sử dụng tham chiếu để trả về kết quả (true/false).
#include <iostream>
using namespace std;

void isPrime(const int &num, bool &result) {
    if (num <= 1) {
        result = false;
        return;
    }
    result = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            result = false;
            break;
        }
    }
}

int main() {
    int number;
    bool result;

    cout << "Enter a number: ";
    cin >> number;

    isPrime(number, result);

    if (result)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
// noi chuoi
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


// nhap vao 3 gia tri, tra ve tong của 2 gia tri lon nhat
#include <iostream>
using namespace std;

// Hàm mẫu trả về tổng của hai giá trị lớn nhất
template <typename T>
T sumTwoLargest(T a, T b, T c) {
    // Tìm giá trị nhỏ nhất trong ba số
    T minVal = min(a, min(b, c));
    
    // Tổng của hai giá trị lớn nhất = Tổng ba số - Giá trị nhỏ nhất
    return (a + b + c) - minVal;
}

// Hàm mẫu trả về void, xác định giá trị lớn nhất và nhỏ nhất của mảng
template <typename T>
void findMaxMin(const T arr[], int size, T& maxVal, T& minVal) {
    maxVal = arr[0];
    minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
}

// Hàm main để kiểm tra
int main() {
    // Kiểm tra hàm sumTwoLargest với ba giá trị nhập từ người dùng
    int a, b, c;
    cout << "Nhập ba giá trị nguyên: ";
    cin >> a >> b >> c;
    cout << "Tổng của hai giá trị lớn nhất: " << sumTwoLargest(a, b, c) << endl;

    // Kiểm tra hàm findMaxMin với mảng
    int size;
    cout << "\nNhập số lượng phần tử trong mảng: ";
    cin >> size;

    int arr[size];
    cout << "Nhập các phần tử trong mảng: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int maxVal, minVal;
    findMaxMin(arr, size, maxVal, minVal);
    cout << "Giá trị lớn nhất trong mảng: " << maxVal << endl;
    cout << "Giá trị nhỏ nhất trong mảng: " << minVal << endl;

    return 0;
}

// Viết một hàm swapValues dùng khuôn mẫu hàm để hoán đổi giá trị của hai biến bất kỳ kiểu dữ liệu.
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    double p = 3.14, q = 2.71;
    swapValues(p, q);
    cout << "After swap: p = " << p << ", q = " << q << endl;

    char c1 = 'A', c2 = 'Z';
    swapValues(c1, c2);
    cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}

// Viết khuôn mẫu hàm arraySum để tính tổng các phần tử trong một mảng.
#include <iostream>
using namespace std;

template <typename T>
T arraySum(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    cout << "Sum of int array: " << arraySum(intArr, 5) << endl;

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
    cout << "Sum of double array: " << arraySum(doubleArr, 4) << endl;

    return 0;
}

// Viết một hàm compare dùng khuôn mẫu hàm để so sánh hai chuỗi bất kỳ và trả về chuỗi lớn hơn theo thứ tự từ điển.
#include <iostream>
#include <string>
using namespace std;

template <typename T>
T compare(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    string str1 = "Apple";
    string str2 = "Banana";

    cout << "Larger string: " << compare(str1, str2) << endl;

    return 0;
}

// Nhập một vector số nguyên và sắp xếp theo thứ tự tăng dần và giảm dần.


#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    cout << "Nhập các phần tử:\n";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        numbers.push_back(value);
    }

    vector<int> ascending = numbers;
    vector<int> descending = numbers;

    sort(ascending.begin(), ascending.end());
    sort(descending.begin(), descending.end(), greater<int>());

    cout << "Sắp xếp tăng dần: ";
    for (int num : ascending) {
        cout << num << " ";
    }

    cout << "\nSắp xếp giảm dần: ";
    for (int num : descending) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// Quản lý danh sách sản phẩm
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product {
public:
    string name;
    float price;
    int quantity;

    Product(string n, float p, int q) : name(n), price(p), quantity(q) {}
};

void printProducts(const vector<Product>& products) {
    cout << "\nDanh sách sản phẩm:\n";
    for (const auto& product : products) {
        cout << "Tên: " << product.name << ", Giá: " << product.price << ", Số lượng: " << product.quantity << endl;
    }
}

void findMostExpensiveProduct(const vector<Product>& products) {
    float maxPrice = 0.0;
    string expensiveProduct;
    for (const auto& product : products) {
        if (product.price > maxPrice) {
            maxPrice = product.price;
            expensiveProduct = product.name;
        }
    }
    cout << "\nSản phẩm đắt nhất: " << expensiveProduct << " (Giá: " << maxPrice << ")\n";
}

float calculateTotalValue(const vector<Product>& products) {
    float total = 0.0;
    for (const auto& product : products) {
        total += product.price * product.quantity;
    }
    return total;
}

int main() {
    vector<Product> products;
    int n;
    cout << "Nhập số lượng sản phẩm: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name;
        float price;
        int quantity;

        cout << "\nNhập thông tin sản phẩm thứ " << i + 1 << ":\n";
        cout << "Tên: ";
        cin.ignore();
        getline(cin, name);
        cout << "Giá: ";
        cin >> price;
        cout << "Số lượng: ";
        cin >> quantity;

        products.emplace_back(name, price, quantity);
    }

    printProducts(products);
    findMostExpensiveProduct(products);
    cout << "\nTổng giá trị của các sản phẩm: " << calculateTotalValue(products) << endl;

    return 0;
}

// Nhap gia , sap xep min, max, avg
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

// 
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


// 
#include <iostream>
using namespace std;

class Rect {
    private:
        double l, h;
    public:
        Rect(double length, double height)  : l(length), h(height) {}
        double getArea() const {
            return l * h;
        }
};

class Circle {
    private:
        double r;
    public:
        Circle(double radius) : r(radius) {}
        double getArea() const {
            return 3.14 * r * r;
        }
};

template <typename Type>
double calculateArea(const Type& type){
    return type.getArea();
}

int main(){
    Rect rect(3, 7);
    Circle circle(4.5);

    cout << "S Rectangle: " << calculateArea(rect) << endl;
    cout << "S Circle: " << calculateArea(circle) << endl;

    return  0;
}


