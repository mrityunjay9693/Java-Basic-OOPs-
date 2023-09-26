using System;

class Celcius
{
    static void Main()
    {
        float cel;
        float fah;

        
        Console.WriteLine("Enter Your temperature in fahrenheit= ");
        fah = Convert.ToSingle(Console.ReadLine());

        cel = 5*(fah-32)/9;

        Console.WriteLine("Temperature in Celcius= "+cel);


    }
}