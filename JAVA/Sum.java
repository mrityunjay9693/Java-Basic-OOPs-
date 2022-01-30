import java.util.*;

class Sum{
    public static void main(String[] args){
        int a,b,c;
        Scanner obj = new scanner(System.in);
        //obj = new Scanner(System.in);
        
        System.out.print("Enter 1st Number: ");
        a = obj.nextInt();
        
        System.out.print("Enter 1st Number: ");
        b = obj.nextInt();
        c = a + b;
        System.out.println("Sum of 1st and 2nd Number is : "+c);
        obj.close();
    }
}        