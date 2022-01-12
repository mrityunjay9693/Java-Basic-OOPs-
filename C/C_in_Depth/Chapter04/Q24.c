#include <stdio.h>

int main(){
    int Number1, Number2, result;
    printf("Enter Your first number: \n");
    scanf("%d",&Number1);
    
    printf("Enter second number: \n");
    scanf("%d",&Number2);
    
    result = (Number1 > Number2) ? (Number1 - Number2) : (Number1 + Number2);
    printf("The result is : %d\n",result);



}