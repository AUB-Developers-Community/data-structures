#include <iostream>

struct Node {
    int data;
    struct Node* next;
};

Node* start = NULL;

Node* create_header_list(int data) {
    struct Node* node1 = new Node();
    //node1 = (struct Node*)malloc(sizeof(struct Node));
    
    node1->data = data;
    node1->next = NULL;
    
    if (start == NULL) {
        start = new Node();
        //start = (struct Node*)malloc(sizeof(struct Node));
        start->next = node1;
    } else {
        Node* node2 = new Node();
        node2 = start;
        while(node2->next != NULL) {
            node2 = node2->next;
        }
        node2->next = node1;
    }
    
    return start;
}

Node* displayHeaderLL() {
    Node* node = start;
    node = node->next;
    
    while (node != NULL) {
        std::cout << " " << node->data << " ";
        node = node->next;
    }
    return start;
}

int main()
{
    create_header_list(9);
    create_header_list(7);
    create_header_list(1);
    
    std::cout << "Header Linked List after inserting 3 elements: " << std::endl;
    displayHeaderLL();
    
    create_header_list(4);
    create_header_list(6);
    create_header_list(11);
    create_header_list(5);
    
    std::cout << "\nHeader Linked List after inserting 5 more elements: " << std::endl;
    displayHeaderLL();

    return 0;
}
