#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *next;
    Node (int x) {
        key = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int key) {
    Node *temp = new Node(key);
    temp->next = head;
    return temp;
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        cout<<(current->key)<<" ";
        current = current->next;
    }
}

int main() {
    Node *head = NULL;
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    head = insertBegin(head, 5);
    head = insertBegin(head, 100);

    printList(head);
    printList(head);
    return 0;
}