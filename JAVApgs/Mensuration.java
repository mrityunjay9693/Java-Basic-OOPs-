import java.util.*;

class circle
{
    public static void main(String[] args)
    {
        float radius,area;
        Scanner ar;
        ar = new Scanner(System.in);

        System.out.println("Enter input as radius: ");
        radius =  ar.nextFloat();
        area = 3.14f*radius*radius;
        System.out.println("Aea of Circle: "+area);
       
    }
}