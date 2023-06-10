public class Main
{
    static class Node {
        int data;
        Node next;
    }
    
    static Node push(Node head_ref, int n_data) {
        Node node = new Node();
        
        Node temp = head_ref;
        
        node.data = n_data;
        node.next = head_ref;
        
        if (head_ref != null) {
            while(temp.next != node.next) {
                temp = temp.next;
            }
            temp.next = node;
        } else {
            node.next = node;
        }
        
        head_ref = node;
        
        return head_ref;
    }
    
    static void printList(Node head) {
        Node temp = head;
        if (head != null) {
            do {
                System.out.print(" " + temp.data + " ");
                temp = temp.next;
            } while (temp != head);
        }
    }
    
	public static void main(String[] args) {
	    Node head = null;
	    
	    head = push(head, 8);
	    head = push(head, 71);
	    head = push(head, 16);
	    head = push(head, 9);
	    
	    System.out.println("Content of Circular Linked List");
	    printList(head); // output:: 9.16.71.8
	}
}
