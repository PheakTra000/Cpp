#include <iostream>
using namespace std;

class DynamicStack {
    private:
        // Define a node private to DynamicStack
        class Node {
            int value;
            Node* next;

            Node(int n) : value(n), next(nullptr) {};
            
            //This allow DynamicStack to use private properties of Node
            friend class DynamicStack; 
            
        };   
        int topIndex = -1; //change from size to topIndex
        Node* head = nullptr; // top of stack

    public:
        bool isEmpty() {
            if (head == nullptr) return 1;
            else return 0;
        };   // return true if stack has no elements
        int getSize() {
            return topIndex;
        };    // return current number of elements
        void push(int value) {
            Node *newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            topIndex++;
        }; // insert element at the top
        void pop() {
            Node* temp = head;
            head = head->next;
            delete temp;    
            topIndex--;
        };       // remove element at the top
        int getTop() {
            return this->head->value;
        };     // return the top element (without removing it)
        void print() {
            Node* temp = head;
            while (temp != nullptr) {
                cout<<temp->value<<" ";
                temp = temp->next;
            }
            cout<<endl;
        };     // print all elements from top to bottom
};

int main() {
    DynamicStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    stack.print();
    cout << stack.getTop() << endl;
    stack.pop();
    stack.print();
    cout<< stack.getSize();
    

}