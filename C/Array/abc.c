#include<stdio.h>
#include "SortSupport.c"
int main()
{
    
    int j=0,k=0;
    int array[]= {9,12,15,16,1};
    printf("Array before sort: \n");
    display(array);
    
    for(int i=1;  i<5 ; i++ ) 
    {
        k = array[i];
        for(int j=i-1; j>=0 && k<array[j] ; j--) //j=0
        {
            array[j+1] = array[j];
        }  
        //printf("%d",array[j]);
       //printf("%d/n",array[j+1]);
        array[j+1] = k;     
       // printf("%d",array[j+1]); 
    }
    printf("\nThe Sorted Array after insertion : \n");
    display(array);

}