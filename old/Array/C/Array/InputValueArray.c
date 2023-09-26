//Program to input values into the array and display them.
#include<stdio.h>

int main()
{
    int Arr[10];
    printf("Enter values in the Array: ");
    for(int i=0; i<10; i++){
        scanf("%d",&Arr[i]);
    }
    printf("The array elements after input: ");
    for(int i=0; i<10; i++){
        printf("%d\t",Arr[i]);
    }
    return 0;
}