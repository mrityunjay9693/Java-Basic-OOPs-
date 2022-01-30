import java.util.*;

class CalculateSICI{
    public static void main(String[] args){
        float P,R,T,SI,CI;
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter Principles:");
        P = obj.nextFloat();
        System.out.print("Enter Rate:");
        R = obj.nextFloat();
        System.out.print("Enter Time:");
        T = obj.nextFloat(); 
        SI = P*R*T/100.0f;
       // CI = P-pow((1+R/100),T);
        System.out.println("\nResult in SI="+SI);
        //System.out.println("\nResult in CI="+CI);
        obj.close();
    }
}