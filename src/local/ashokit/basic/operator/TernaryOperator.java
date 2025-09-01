package local.ashokit.basic.operator;

public class TernaryOperator {
    public static void main(String[] args){
        int num1 = 75;
        int num2 = 94;
        
        // Ternary Operator Synatx : (condition) ? true : false or (condition) ? 1 : 0
        int result = (num1>num2) ? 1 : 0;
        System.out.println(result);

        boolean bool = (num1 < num2 ) ? true : false;
        System.out.println(bool);
    }
}
