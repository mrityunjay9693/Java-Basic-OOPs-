#include<stdio.h>
//void display(int *array); 
#include "ElementSupport.c"


int main()
{
    int item = 13,i;
    int array[]= {2,4,6,9,12,15,16,19,20,};
    printf("The sorted Array: \n");
    display(array);
    
    for(int i=8;  i>0  ; i-- )
    {
        if( item<array[i])
        {
            array[i+1] = array[i]; //element is shifted in right direction
            //array[i+1] = item; //element is inserted
        }
        else
        {
            array[i+1] = item; //element is inserted
            break;
        }
        
        
    }
    //array[i+1] = item; //element is inserted
    printf("\nThe Sorted Array after insertion : \n");
    for(int i=0; i<10; i++)
    {
        printf("%d\n",array[i]);
    }
   // display(array);
}


