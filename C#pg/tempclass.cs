using System;

class temp
{
    float cel;
    float fah;

    public void Input()
    {
        Console.Write("Please enter the temprature in Fahreheit: fah");
        fah = Convert.ToSingle(Console.ReadLine());
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
        temp temp;
        temp = new temp();

        temp.Input();
        temp.Calculate();
        temp.Display();
    }
}