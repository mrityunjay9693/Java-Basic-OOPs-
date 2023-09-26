#include<stdio.h>

int main()
{
    int arr[5];
    
    for(int i=0; i<5; i++)
    {
        printf("Enter Number to display:");
        scanf("%d",&arr[i]);
       // printf("%d",i);
    }
    printf("The array is: ");
    for(int i=0; i<5; i++)
    {
        printf("Enter Number to display:%d",arr[i]);
    }    
}