import java.util.*;

public class SICI {
    public static void main(String[] args){
        float principal, rate, time, SI, CI;
        Scanner put;
        put = new Scanner(System.in);
        System.out.print("Enter Principal");
        principal = put.nextFloat();
        System.out.print("Enter Rate: ");
        rate = put.nextFloat();
        System.out.print("Time: ");
        time = put.nextFloat();

        SI = principal*rate*time/100.0f;
        System.out.println("Simple interest: "+SI);
    }

}
