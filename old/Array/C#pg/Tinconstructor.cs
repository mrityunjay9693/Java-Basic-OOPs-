using System;

class Temp
{
    float cel;
    float fah;

    public Temp()
    {
        fah = 35.41F;
    }

    public void Calculate()
    {
        cel = 5*(fah-32)/9;

    }

    public void Display()
    {
        Console.WriteLine("Calculation of temperature is in process! Please wait.");
        Console.WriteLine("Temperature in celcius =   celcius"+cel);
      
    }
}

class Converter
{
    public static void Main()
    {
        Temp temp = new Temp();
        

       
        temp.Calculate();
        temp.Display();
    }
}