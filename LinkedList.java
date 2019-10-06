import java.util.*; 
public class LinkedList{

    public static void main(String args[])
    {
        java.util.LinkedList<String> object = new java.util.LinkedList<String>(); 
        
        object.add("E"); 
        object.add("L"); 
        object.add("L"); 
        object.add("O"); 
        object.add(" ");
        object.add("W");
        object.add("O");
        object.add("R");
        object.add("L");
        object.add("D"); 
        object.addFirst("H");
        System.out.println("Linked list : " + object); 
    }

}
