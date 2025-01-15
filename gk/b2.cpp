//22010003-Vu Thanh Nam
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
    Book(int id = 0, string name = " ", double price = 0, int qtyInStock = 0)
        : id(id), name(name), price(price), qtyInStock(qtyInStock) {}

    void show() const {
        cout  << id << name <<  price << qtyInStock << endl;
    }

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    int getQtyInStock() const {
        return qtyInStock;
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
        cout << "Khong tim thay sach co so luong <5\n";
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
        Book(1, " Lap trinh C ", 45, 10),
        Book(2, " Lap trinh C++ ", 55, 3),
        Book(3, " Cau Truc du lieu ", 65, 0),
        Book(4, " Lap trinh C# ", 75, 5),
        Book(5, " Javascript ", 85, 1)
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

