import java.util.*;

class Sumofnos {
    public static void main(String[] args){
        int first_no, second_no,sum;
        Scanner put;
        put = new Scanner(System.in);
        
        System.out.println("Enter first number");
        first_no = put.nextInt();
        System.out.println("Enter second number");
        second_no = put.nextInt();
        sum = first_no + second_no;
        System.out.println("Resultant sum "+sum);
    }

    
}
