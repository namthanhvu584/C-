#include<iostream>
#include<string>
using namespace std;

class Product {
    private:
        string code;
        double price;
    public:
        Product(): code("No code"), price(0){}
        Product(string c,double pr): code(c), price(pr){}

        virtual void show() const{
            cout << "\nProduct code: "<< code << "\nPrice: " << price << endl;
        }
};

class Book : public Product{
    private:
        string title;
        string author;
    public:
        Book(): title("No title"), author(" NO author "){}
        Book(string c, double pr, string tle, string au): Product(c, pr), title(tle), author(au){}

        void show() const override{
            Product:: show();
            cout << "Book title: " << title << "\nAuthor: " << author << endl;
        }
};

int main(){
    const int SIZE = 5;
    int i , ch;
    float prc;
    string code, title, auth;
    Product *p[SIZE];
    for (i = 0; i < SIZE; i++){
        cout << "Enter choice (1 for Product): ";
        cin >> ch;
        cout << "Enter code: ";
        cin.get();
        getline(cin, code);
        cout << "Enter price: ";
        cin >> prc;
        if(ch == 1)
            p[i] = new Product(code, prc);
        else {
            cout << "Enter title: ";
            cin.get();
            getline(cin, title);
            cout << "Enter auth: ";
            getline(cin, auth);
            p[i] = new Book(code, prc, title, auth);
        }
    }
    for(i= 0; i < SIZE; i++){
        p[i]->show();
        delete p[i];
    }
    return 0;
}