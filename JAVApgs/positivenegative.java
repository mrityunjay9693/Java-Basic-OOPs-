import java.util.*;

import javax.lang.model.util.ElementScanner14;

public class positivenegative {
    public static void main(String[] args){
        int number;
        Scanner put;
        put = new Scanner(System.in);
        System.out.print("Enter the number: ");
        number = put.nextInt();

        if(number>0)
            System.out.println("The number is positive");
        else if(number<0)
            System.out.println("The number is negative");
        else
            System.out.println("The number  is Zero");
    }

    
}
