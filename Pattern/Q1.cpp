#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// 🔹 Insert at End
void insert(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

// 🔹 Delete a Node
void deleteNode(int key) {
    if (head == NULL) return;

    Node *curr = head, *prev = NULL;

    // If head node itself holds the key
    if (curr->data == key) {
        while (curr->next != head)
            curr = curr->next;

        if (curr == head) {
            head = NULL;
        } else {
            curr->next = head->next;
            head = head->next;
        }
        return;
    }

    prev = head;
    curr = head->next;

    while (curr != head) {
        if (curr->data == key) {
            prev->next = curr->next;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

// 🔹 Search Element
void search(int key) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        if (temp->data == key) {
            cout << "Element found\n";
            return;
        }
        temp = temp->next;
    } while (temp != head);

    cout << "Element not found\n";
}

// 🔹 Display List
void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)\n";
}

// 🔹 Main Function
int main() {
    insert(10);
    insert(20);
    insert(30);

    display();

    search(20);

    deleteNode(20);
    display();

    return 0;
}