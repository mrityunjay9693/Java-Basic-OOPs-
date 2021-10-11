#include<stdio.h>

int main()
{
    int Fahrenheit, Celcius;

    printf("Enter the temperature in Celcius: ");
    scanf("%d",&Celcius);
    Fahrenheit = Celcius*(9/5)+32;
    printf("Temperature in Fahrenheit: %d\n",Fahrenheit);

    return 0;
}