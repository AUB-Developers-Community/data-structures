public class HeaderLinkedList
{
    static class Node {
        int data;
        Node next;
    }
    
    static Node start = null;
    
    static Node CreateHeaderList(int data) {
        Node node1 = new Node();
        
        node1.data = data;
        node1.next = null;
        
        // if it is the first node
        if (start == null) {
            start = new Node();
            start.next = node1;
        } else {
            Node node2 = start;
            while(node2.next != null) {
                node2 = node2.next;
            }
            node2.next = node1;
        }
        
        return start;
    }
    
    static Node printList() {
        Node node;
        node = start;
        node = node.next;
        
        while(node != null) {
            System.out.print(" " + node.data + " ");
            node = node.next;
        }
        
        return start;
    }
    
    
	public static void main(String[] args) {
	    CreateHeaderList(5);
	    CreateHeaderList(11);
	    CreateHeaderList(60);
	    CreateHeaderList(14);
	    CreateHeaderList(39);
	    
	    System.out.println("\nList after inserting 5 elements: ");
	    printList();
	    
	    CreateHeaderList(99);
	    CreateHeaderList(83);
	    CreateHeaderList(69);
	    
	    System.out.println("\nList after inserting new 3 elemenst: ");
	    printList();
	}
}
