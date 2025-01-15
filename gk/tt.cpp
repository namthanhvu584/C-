//220101388_ngoquanganh
#include <iostream>
#include <vector>
#include <string>
using namespace std;


template <typename T>
void nhapDL(vector<T>& vec) {
    T value;
    while (cin >> value && value != T(-1)) {
        vec.push_back(value);
    }
   
}


void nhapDL(vector<string>& vec) {
    string value;
    while (cin >> value && value != "end") {
        vec.push_back(value);
    }
}
template <typename T>
T tinhTong(const vector<T>& vec) {
    T sum = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
    }
    return sum;
}


string tinhTong(const vector<string>& vec) {
    string re;
    for (size_t i = 0; i < vec.size(); ++i) {
        re += vec[i];
    }
    return re;
}

int main() {
    
    vector<int> vecI;
    vector<double> vecD;
    vector<string> vecS;
    nhapDL(vecI);
    nhapDL(vecD);
    nhapDL(vecS);

    
    cout << tinhTong(vecI) << endl;
    cout  << tinhTong(vecD) << endl;
    cout << tinhTong(vecS) << endl;

    return 0;
}



//220101388_ngoquanganh
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Book {
private:
    int id;
    string name;
    double price;
    int qtyInStock;

public:
    Book(int id = 0, string name = "", double price = 0.0, int qtyInStock = 0)
        : id(id), name(name), price(price), qtyInStock(qtyInStock) {}
    void show() const {
        cout  << id << name <<  price << qtyInStock << endl;
    }
    int getId() const {
        return id;
    }
    int getQtyInStock() const {
        return qtyInStock;
    }
    string getName() const {
        return name;
    }
};
void filter(const vector<Book>& books) {
    bool found = false;
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].getQtyInStock() < 5) {
            books[i].show();
            found = true;
        }
    }
    if (!found) {
        cout << "nhap sai\n";
    }
}

void search(const vector<Book>& books, int bookId) {
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i].getId() == bookId) {
            books[i].show();
            return;
        }
    }
   
}

int main() {
   
    vector<Book> books = {
        Book(1, "C++ ", 150.0, 10),
        Book(2, "sach hay", 200.5, 3),
        Book(3, "sach day lap trinh", 180.0, 0),
        Book(4, "sach day nau an", 120.0, 5),
        Book(5, "yeu sach", 250.0, 1)
    };
    for (size_t i = 0; i < books.size(); ++i) {
        books[i].show();
    }
    filter(books);
    int searchId;
    cin >> searchId;
    search(books, searchId);

    return 0;
}



