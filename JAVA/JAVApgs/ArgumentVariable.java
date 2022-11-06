public class ArgumentVariable {
    
    public static void A(int a){
        System.out.println("Static Block");
        System.out.println(a);
    }
    public void B(int b){
        System.out.println("Non-Static Block");
        System.out.println(b);
    }


    public static void main(String[] args){
        ArgumentVariable Av = new ArgumentVariable();
        ArgumentVariable.A(10);
        Av.B(20);
        A(15);
        Av.A(50);

    }
}
