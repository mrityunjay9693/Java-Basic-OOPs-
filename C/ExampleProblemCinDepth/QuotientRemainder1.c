//Boolean operator for combining conditions.
#include <stdio.h>

int main()
{
    int number1, number2, quotient, remainder;
    
    printf("Enter number1: ");
    scanf("%d", &number1);
    
    printf("Enter number2: ");
    scanf("%d", &number2);

    if(!number2)  //if number2 is zero then expression is true
    {
        printf("The number is divided by Zero\n");

    }
    else
    {
        printf("The number is divided by Zero\n");
        quotient = number1/number2;
        remainder = number1%number2;

        printf("Quotient : %d\nRemainder : %d\n", quotient, remainder);
    }
    return 0;   
} 
