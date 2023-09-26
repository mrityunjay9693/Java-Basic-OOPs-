//Program to add elements of an array
#include<stdio.h>

int main()
{
    int Arr[10], Sum=0;
    printf("Enter elements(integer) in array: ");
    for(int i=0; i<10; i++){
        scanf("%d",&Arr[i]);
        Sum += Arr[i];
    }
    printf("Sum of elements in array: %d\n",Sum);
    return 0;
}