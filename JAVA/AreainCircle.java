package PGjava;

import java.util.*;

class Circle
{
    public static void main(String[] args)
    {
        float r,ar;
        Scanner obj = new Scanner(System.in);
        
        System.out.print("Enter Required Radius: ");
        r = obj.nextFloat();
        
        ar = 3.14f*r*r;
        System.out.println("Area of Circle = "+ar);
    }    


}