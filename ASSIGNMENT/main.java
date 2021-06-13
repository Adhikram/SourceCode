import java.util.*;  
import java.lang.*;
class ArrayBag{
    LinkedList<Integer> head=new LinkedList<Integer>();  
  
    public void addNode(int data) {  
       head.add(data);
    }  
 
    public void display() {  
        System.out.println();
        for(int i :head){
            System.out.print(i+ " ");  
        }
        System.out.println("\n---------------------------------------------");  
    }  
    public int evenNumber(){
        int count=0;
        for(int i :head){
            if((i&1) == 0){
                 count++;
            } 
           
        }
        return count;}
        
    
};
class SinglyLinkedList{
    LinkedList<Integer> head=new LinkedList<Integer>();  
  
    public void addNode(int data) {  
       head.add(data);
    }  
 
    public void display() { 
        System.out.println();
        for(int i :head){
            System.out.print(i+ " ");  
        }
        System.out.println("\n---------------------------------------------");  
    }  
    public int thirdElement (){
        if(head.size()<3){
            System.out.print( " List has less then 3 element");
            return -1;
        }else{
            return head.get(2);
        }
        

    }
};
class DoublyLinkedList{
   LinkedList<Integer> head=new LinkedList<Integer>();  
  
    public void addNode(int data) {  
        head.add(data);
    }  
   
    public void display() {  
        System.out.println();
        for(int i :head){
            System.out.print(i+ " ");  
        }
        System.out.println("\n---------------------------------------------");  
    } 
    public void reverse(){
        LinkedList<Integer> temp=new LinkedList<Integer>(); 
        Iterator<Integer> itr=head.descendingIterator();  
          while(itr.hasNext()){  
          temp.add(itr.next());  
          }  
          head=temp;
        
    }
    public void swapNode(int first , int second){
        int i=0;
        while(head.size()>i) {
            int x = head.get(i);
            if(x == first){
                head.set(i,second);
            }
            if(x == second){
                head.set(i,first);
            }
            i++;
        }
        

    }
};
public class Main
{
	public static void main(String[] args) {
	    ArrayBag bag= new ArrayBag();  
        //Add nodes to the list  
        bag.addNode(1);  
        bag.addNode(2);  
        bag.addNode(3);  
        bag.addNode(4);  
        bag.addNode(5);  
        bag.addNode(1);  
        bag.addNode(2);  
        bag.addNode(3);  
        bag.addNode(4);  
        bag.addNode(5);
        //Displays the nodes present in the list  
        bag.display(); 
        
        System.out.print( "Number of even numbers in the ArrayBag is  "+ bag.evenNumber()); 
        
        SinglyLinkedList sList = new SinglyLinkedList();  
        //Add nodes to the list  
        sList.addNode(1);  
        sList.addNode(2);  
        sList.addNode(3);  
        sList.addNode(4);  
        sList.addNode(5); 
        sList.addNode(6);  
        sList.addNode(7);  
        sList.addNode(8);  
        sList.addNode(9);  
        sList.addNode(10); 
  
        //Displays the nodes present in the list  
        sList.display(); 
        int third = sList.thirdElement();
        if(third != -1){
            System.out.print("The third element of the list is   " + third); 
        }
	 DoublyLinkedList dList = new DoublyLinkedList();  
        //Add nodes to the list  
        dList.addNode(1);  
        dList.addNode(2);  
        dList.addNode(3);  
        dList.addNode(4);  
        dList.addNode(5);  
  
        //Displays the nodes present in the list  
        dList.display(); 
        System.out.print("\nAfter reversing "); 
        dList.reverse();
        dList.display(); 
        System.out.print("\nAfter swapping  "); 
        dList.swapNode(5,1);
        dList.display(); 
	}
}
 LinkedList<Integer> head=new LinkedList<Integer>();

    public void addNode(int data) {
        head.add(data);
    }

    public void display() {
        System.out.println();
        for(int i :head){
            System.out.print(i+ " ");
        }
        System.out.println("\n---------------------------------------------");
    }
    public int evenNumber(){
        int count=0;
        for(int i :head){
            if((i&1) == 0){
                count++;
            }

        }
        return count;}
