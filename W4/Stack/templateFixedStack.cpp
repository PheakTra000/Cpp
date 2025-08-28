#include <iostream>
using namespace std;

// write this right on top of class
// so that it applies to the class below
template <class T>
class Stack {
    private:
        int size, top;
    public:
        T *stack;

        Stack (int n) {
            size = n;
            stack = new T[size];
            top = -1;
        }

        ~ Stack() {
            delete[] stack;
        }

        void push(const T& value) {
            if(size <= top) {
                cerr << "error: failed to push. Stack is full." << endl;
            } else {
                top++;
                this->stack[top] = value;
            }
        }
        void pop();
        T getTop();
        void print();
        T Book();
        
};

template <class T>
void Stack<T>::pop(){
    if (top <= -1) {
        cerr << "error: failed to pop. Stack is empty." << endl;
    } else {
        stack[top] = 0;
        top--;
    }
}
template <class T>
T Stack<T>::getTop() {
    return this->stack[top];
}

template <class T>
void Stack<T>::print() {
    //print top to bottom
    for(int i = top; i >= 0; i--) {
        cout << stack[i] << endl;
    }
}

// template <class T>
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

int main() {
    // To use a class with template, 
    // simply input the type you want inside <>
    // Here, we create a stack of type string
    Stack <string> myStack(5);
    myStack.push("hello");
    cout << myStack.getTop();
    myStack.print();
    
    Stack <float> myFloatStack(5);
    myFloatStack.push(1.2);
    myFloatStack.push(1.4);
    cout<<myFloatStack.getTop()<<endl;
    myFloatStack.print();

    //pop
    myFloatStack.pop();
    myFloatStack.print();

    Stack <Book> bookStack();


    //ex3
    

    return 0;
}