import java.util.*;

class product
{
  public static void main(String[] args)
  {
      Scanner obj = new Scanner(System.in);

      System.out.println("First Number: ");
      int num1 = obj.nextInt();

      System.out.println("Second Number: ");
      int num2 = obj.nextInt();

      int c = num1*num2;

      System.out.println("Product of two number"+c);
  }
}
