#include <iostream>
using namespace std;

struct Book {
    public:
        string title;
        string author;
        int pages;

    Book (string a, string b, int c) {
        title = a;
        author = b;
        pages = c;
    }

    Book (string a, string b) {
        title = a;  
        author = b;
    }
};

void printInfo(Book b1, Book b2, Book b3){
    cout<<b1.title<<" "<<b1.author<<" "<<b1.pages<<endl;
    cout<<b2.title<<" "<<b2.author<<" "<<b2.pages<<endl;
    cout<<b3.title<<" "<<b3.author<<" "<<b3.pages<<endl;
    
}

int main() {
    Book b1("My book1", "Tra", 100);
    Book b2("My book2", "javJit", 200);

    Book b3("book3", "Tra");
    printInfo(b1, b2, b3);
}

