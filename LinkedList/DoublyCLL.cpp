#include <iostream>

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
};

Node* start = NULL;

void insert(int data) {
    if (start == NULL) {
        Node* node = new Node();
        node->data = data;
        node->next = node->prev = node;
        start = node;
        return;
    }
    
    Node* last = start->prev;
    
    Node* new_node = new Node();
    
    new_node->data = data;
    new_node->next = start;
    new_node->prev = last;
    
    last->next = start->prev = new_node;
    start = new_node;
}

void displayDCLL() {
    Node* temp = start;
    
    std::cout << "\nTraversal in forward direction\n" << std::endl;
    while(temp->next != start) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << temp->data << " ";
    
    std::cout << "\nTraversal in backward direction\n" << std::endl;
    Node* last = start->prev;
    temp = last;
    while(temp->prev != last) {
        std::cout << temp->data << " ";
        temp = temp->prev;
    }
    std::cout << temp->data << " "; 
}

int main()
{
    insert(6);
    insert(24);
    insert(4);
    insert(2);
    insert(3);
    
    std::cout<<"Created Doubly Circular Linked List is: " << std::endl;
    displayDCLL();

    return 0;
}
