#include <iostream>

struct Node {
    int data;
    struct Node* next;
};

void push(Node** head_ref, int data) {
    Node* node = new Node();
    Node* temp = (*head_ref);
    
    node->data = data;
    node->next = (*head_ref);
    
    if ((*head_ref) != NULL) {
        while(temp->next != node->next) {
            temp = temp->next;
        }
        temp->next = node;
    } else {
        node->next = node;
    }
    
    (*head_ref) = node;
}

void displayCLL(Node* head) {
    Node* temp = head;
    
    if(head != NULL) {
        do {
            std::cout << " " << temp->data << " ";
            temp = temp->next;
        } while(temp != head);
    }
}

int main()
{
    Node* head = NULL;
    
    push(&head, 7);
    push(&head, 1);
    push(&head, 8);
    push(&head, 4);
    
    std::cout << "Contents of Circular Linked List: " << std::endl;
    displayCLL(head); // output:: 4.8.1.7

    return 0;
}
