#include<stdio.h>
#include "SortSupport.c"
int main()
{
    int array[]={12,5,96,33,45};
    printf("Unsorted Array:\n");
    display(array);
    for(int i=0; i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
    printf("\nSorted Array: \n");
    display(array);
}    