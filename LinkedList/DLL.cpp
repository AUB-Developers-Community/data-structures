#include<iostream>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    
    new_node->data = new_data;
    
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    
    if ((*head_ref) != NULL) {
        (*head_ref)->prev = new_node;
    }
    
    (*head_ref) = new_node;
}

void displayLinkedList(Node* node) {
    Node* last = NULL;
    
    std::cout << "\nnTraversal in forward direction\n" << std::endl;
    while(node != NULL) {
        std::cout << " " << node->data << " ";
        last = node;
        node = node->next;
    }
    
    std::cout << "\nTraversal in backward direction\n" << std::endl;
    while(last != NULL) {
        std::cout << " " << last->data << " ";
        last = last->prev;
    }
}

int main() {
    Node* head_ref = NULL;
    
    push(&head_ref, 5);
    
    push(&head_ref, 4);
    
    push(&head_ref, 1);
    
    std::cout << "Created DLL is: " << std::endl;
    displayLinkedList(head_ref);
    
    return 0;
}
