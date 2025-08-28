#include <iostream>
using namespace std;

// class Stack {
//     private:
//         int size, top;
//     public:
//         int *stack;
    
//         Stack (int n) {
//             size = n;
//             stack = new int(size);
//             top = -1;
//         }

//         ~ Stack() {
//             delete[] stack;
//         }

//         void push(int value);
//         void pop();
//         int getTop();
//         void print();

// };

// void 


class DynamicStack {
    private:
        class Node{
            int value;
            Node* next;

            Node(int n): value(n), next(nullptr) {};

            friend class DynamicStack;
        };

};