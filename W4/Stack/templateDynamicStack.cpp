#include <iostream>
#include <string>
using namespace std;

template <typename T>
class DynamicStack {
private:
    class Node {
        T value;
        Node* next;
        Node(const T& v) : value(v), next(nullptr) {}
        friend class DynamicStack<T>;
    };
    int size = 0;
    Node* head = nullptr;

public:
    bool isEmpty() {
        if (head == nullptr) return 1;
        else return 0;
    };   // return true if stack has no elements

    int getSize() {
        return size;
    };    // return current number of elements
    void push(const T& value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        size++;
    }; // insert element at the top
    void pop() {
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
    };       // remove element at the top
    T& getTop() {
        return head->value;
    };      // return reference to top element
    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    };     // print all elements from top to bottom
    ~DynamicStack() {

    };  // destructor to clean up
    void clear();     // optional: clear the entire stack
};

class Book {
    private:
        string title;
        string author;
        int year;

    public:
        Book (string title, string author, int year) {
            this->title = title;
            this->author = author;
            this->year = year;
        }

        void print() const {
            cout<< title << author << year;
        }

    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    int getYear() {
        return year;
    }
};

bool isBalanced (char* expr) {
    int size = sizeof(expr);
    if ()
}

int main() {
    // // DynamicStack <string> str;
    // // DynamicStack <float> flo;

    // // str.push("helloworld");
    // // str.push("cooked");
    // // flo.push(1.123);
    // // flo.push(12.1234);

    // // str.print();
    // // flo.print();

    // // str.pop();
    // // flo.pop();

    // // str.print();
    // // flo.print();

    // DynamicStack <Book> bookStack;
    // // Book b1("how to not cook", "Boi", 2020);
    // // Book b3("how to not cook", "Boi", 2020);
    // // Book b2("how to not cook", "Boi", 2020);
  
    // // bookStack.push(b1);
    // // bookStack.push(b2);
    // // bookStack.push(b3);

    // bookStack.push(Book ("title", "author", 1234));
    // bookStack.push(Book ("title", "author", 1234));
    // bookStack.push(Book ("title", "author", 1234));
    // bookStack.getTop();


    DynamicStack <char> store;
    char* expr = "(hello)";
    cout<<isBalanced(expr);
    // store.push(expr);

    

}