#include <iostream>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}