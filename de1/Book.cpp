#include<iostream>
using namespace std;
class Book{
    private:
        string nameBook;
        string nameAuthor;
        int numberBook;
    public:
        Book() {}
        Book(string nameBook, string nameAuthor, int numberBook){
            this->nameBook = nameBook;
            this->nameAuthor = nameAuthor;
            this->numberBook = numberBook;
        }

    string getNameBook(){
        return this->nameBook;
    }
    string getNameAuthor(){
        return this->nameAuthor;
    }
    
    int getNumberBook(){
        return this->numberBook;
    }



    void display(){
        cout << "Name Book: " << this->nameBook << endl;
        cout << "Name Author: " << this->nameAuthor << endl;
        cout << "NUmber book: " << this->numberBook << endl;
    }
    };