public class DoublyCircularLinkedList
{
    static class Node {
        int data;
        Node next;
        Node prev;
    }
    
    static Node start = null;
    
    static void insertBegin(int data) {
        if (start == null) {
            Node new_node = new Node();
            new_node.data = data;
            new_node.next = new_node.prev = new_node;
            start = new_node;
            return;
        }
        
        Node last = (start).prev;
        Node new_node = new Node();
        
        new_node.data = data;
        new_node.next = start;
        new_node.prev = last;
        
        last.next = (start).prev = new_node;
        
        start = new_node;
    }
    
    static void printList() {
        Node temp = start;
        
        System.out.println("\nTraversal in forward direction\n");
        while(temp.next != start) {
            System.out.printf("%d ", temp.data);
            temp = temp.next;
        }
        System.out.printf("%d ", temp.data);
        
        System.out.println("\nTraversal in backward direction\n");
        Node last = start.prev;
        temp = last;
        while(temp.prev != last) {
            System.out.printf("%d ", temp.data);
            temp = temp.prev;
        }
        System.out.printf("%d ", temp.data);
    }
    
	public static void main(String[] args) {
	    insertBegin(9);
	    insertBegin(11);
	    insertBegin(17);
	    insertBegin(3);
	    insertBegin(6);
	    
		System.out.println("Created Doubly Circular Linked List is: ");
		printList();
	}
}
