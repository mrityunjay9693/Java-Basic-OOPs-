#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    //if statement to check expression negative number as input by user
    if(number<0){
        printf("Number %d is negtive\n",number);
        number = -number;
        printf("number = %d\n",number);
    


    }
    
    // printf("Entered number is not negative\n");
    printf("Value of number is %d\n",number);
    
    return 0; 

}