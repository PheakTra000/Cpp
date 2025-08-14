#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    int pages;

    Book (string a, string b, int c) {
        title = a;
        author = b;
        pages = c;
    }
};

void printInfo(Book b1, Book b2){
    cout<<b1.title<<" "<<b1.author<<" "<<b1.pages<<endl;
    cout<<b2.title<<" "<<b2.author<<" "<<b2.pages<<endl;
}

int main() {
    Book b1("My book1", "Tra", 100);
    Book b2("My book2", "javJit", 200);

    printInfo(b1, b2);
}

