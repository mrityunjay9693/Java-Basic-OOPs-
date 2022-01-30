#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;
    printf("Enter first number: ");
    scanf("%d",&firstNumber);
    printf("Enter seconf number: ");
    scanf("%d",&secondNumber);
    //if-else for comparing first and second numbers to find out which one is bigger.

    if(firstNumber > secondNumber){
        printf("Bigger number is  %d \n",firstNumber);
    }
    else if(secondNumber > firstNumber){
        printf("Bigger number is %d \n",secondNumber);
    } 
    else{
        printf("The both entered numbers are equal\n");
    }
        
    
    return 0;

}

// void display()
// {

// }