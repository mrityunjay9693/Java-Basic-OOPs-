using System;

class Time
{
    int hr1,hr2, min1,min2,sec1,sec2;
    //int hr4,min4,sec4;

    public void Input()
    {
        Console.Write("Enter Hour for 1st timming : ");
        hr1 = Int16.Parse(Console.ReadLine());
        Console.Write("Enter Minutes for 1st timming : ");
        min1 = Int16.Parse(Console.ReadLine());
        Console.Write("Enter Second for 1st timming : ");
        sec1 = Int16.Parse(Console.ReadLine());
        Console.Write("Enter Hour for 2nd timming : ");
        hr2 = Int16.Parse(Console.ReadLine());
        Console.Write("Enter Minutes for 2nd timming : ");
        min2 = Int16.Parse(Console.ReadLine());
        Console.Write("Enter Seconds for 1st timming : ");
        sec2 = Int16.Parse(Console.ReadLine());

        //return 0;
        
    }

    public void Display()
    {
    
        Console.WriteLine("1st Time is  ");
        Console.WriteLine(hr1+":"+min1+":"+sec1);
        Console.WriteLine(hr2+":"+min2+":"+sec2);
        
    }

    public void Addtime()
    {
        int hr3,min3,sec3;
        
        sec3 = sec1 + sec2;
        min3 = min1 + min2;
        hr3 = hr1 + hr2;
        if(sec3 > 60)
        {
            sec3 = sec3-60;
            min3 = min3+1;


        }
       // else
        //{
         //   sec4 = sec3; 
        //}

        if(min3 > 60)
        {
            min3 = min3-60;
            hr3 = hr3+1;


        }
       // else
        //{
          //  sec4 = sec3; 
        //}
         if(hr3 > 24)
        {
            int t;
            t = hr3-24;
            sec3 = sec3 + t;


        }

    }

    public void DiffTime()
    {
        int hr4, min4, sec4;
        int sec5;
        sec5 = sec1+sec2;

        

        if(sec5>60)
        {
            sec4 = 60-sec5;


        }

    }

    public void ShowAddtime()
    {
        Console.WriteLine("Addition of Two Timming  ");
        Console.WriteLine(hr3+":"+min3+":"+sec3);
        Console.WriteLine("Thank You!");
    }




}

class Time2
{
    public static void Main()
    {
        Time tm = new Time();
        tm.Input();
        tm.Display();

    }
}