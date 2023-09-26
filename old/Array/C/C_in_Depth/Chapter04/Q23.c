#include<stdio.h>

int main(){
   int Number;
   int Divisor = 3;
   int Remainder_Value;

   printf("Enter the Number : ");
   scanf("%d",&Number);
   Remainder_Value = Number % Divisor;

   printf("The Remainder Value after divided by %d : %d\n",Divisor, Remainder_Value);
   return 0;

}