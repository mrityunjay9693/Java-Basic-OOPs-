#include<stdio.h>
void display(int *array); 

int main()
{
    int array[]= {12,5,96,33,45};
    printf("The Unsorted Array: \n");
    display(array);
    
    for(int i=0;i<4;i++)
    {
        for(int j = i+1; j<5; j++)
        {
            if(array[i]>array[j])
            {
            int temp = array[i];
            array[i]=array[j];
            array[j] = temp;
            }
            
        }
    }
    printf("\nThe Sorted Array: \n");
    display(array);
}

void display(int *array)
{
    for(int i=0; i<5; i++)
    {
        printf("%d\n",array[i]);
    }
}


