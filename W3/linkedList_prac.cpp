// #include <iostream>
// using namespace std;

// struct Node {
//     string sprite;
//     Node *next;

//     Node (string x) {
//         sprite = x;
//         next = NULL;
//     }
// };

// Node *inseartBegin(Node *head, string sprite) {
//     Node* temp = new Node(sprite);
//     temp->next = head;
//     return temp;
// }

// void printList(Node* head) {
//     Node *cur = head;
//     while (cur != NULL) {
//         cout<<(cur->sprite)<<" ";
//         cur = cur->next;        
//     }
// }

// int main() {
//     Node *head = NULL;

//     head = inseartBegin(head, "Apple");
//     head = inseartBegin(head, "Bone");
//     head = inseartBegin(head, "Frog");
//     head = inseartBegin(head, "Ghost");
//     head = inseartBegin(head, "Imp");

//     printList(head);

// }   

#include <iostream>
using namespace std;

struct Node {
    string sprite;
    Node *next;
    Node *prev;
    
    Node (string x) {
        sprite = x;
        next = NULL;
        prev = NULL;
    }
};

Node *inseartBegin(Node *head, string sprite) {

    //single linked list

    // Node* temp = new Node(sprite);  
    // temp->next = head;
    // return temp;

    //double linked list

    Node *temp = new Node(sprite); 
    if (head != NULL) {
        head->prev = temp;
        temp->next = head;
    }
    return temp;
}


// void printList(Node* head) {
//     Node *cur = head;
//     while (cur != NULL) {
//         cout<<(cur->sprite)<<" ";
//         cur = cur->next;        
//     }
// }

void printForward(Node* head) {
    Node *cur = head;
    while (cur != NULL) {
        cout<<(cur->sprite)<<" ";
        cur = cur->next;
    }
}

void printBackward(Node* head) {
    // Node *cur = head;
    // while (cur != NULL) {
    //     cout<<(cur->sprite)<<" ";
    //     cur = cur->prev;
    // }

    if (head == NULL) return;

    Node *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }

    while (cur != NULL) {
        cout<<(cur->sprite)<<" ";
        cur = cur->prev;
    }
}

int main() {
    Node *head = NULL;

    head = inseartBegin(head, "Apple");
    head = inseartBegin(head, "Bone");
    head = inseartBegin(head, "Frog");
    head = inseartBegin(head, "Ghost");
    head = inseartBegin(head, "Imp");

    // printList(head);
    printForward(head);
    cout<<endl;
    printBackward(head);

}   