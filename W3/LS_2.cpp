#include <iostream>
using namespace std;

struct Node {
    int num;
    Node *next;
    Node *prev;

    Node (int x) {
        num = x;
        next = NULL;
        prev = NULL;
    }
};

Node *insertBegin(Node *head, int num) {
    Node *temp = new Node(num);
    if (head != NULL) {
        head->prev = temp;
        temp->next = head;
    }   
    return temp;
}

void printListForward(Node *head) {
    Node *cur = head;
    while (cur != NULL) {
        cout<<cur->num<<" ";
        cur = cur->next;    
    }
}

void printListBackward(Node *head) {
    Node *cur = head;
        
    while (cur->next != NULL) {
        cur = cur->next;
    }

    while (cur != NULL) {
        cout<<cur->num<<" ";
        cur = cur->prev;
    }

}

int main() {
    Node *head = NULL;
    
    head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    
    printListForward(head);
    printListBackward(head);
}