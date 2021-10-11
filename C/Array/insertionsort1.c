#include<stdio.h>
#include "SortSupport.c"
int main()
{
    
    int k=0,j=0;
    int array[]= {19,12,15,16,1};
    printf("Array before sort: \n");
    display(array);
    
    for(int i=1;  i<5 ; i++ ) 
   { 
        k = array[i];
       // printf("K:%d\n",k);    
        for( j=i-1; j>=0 && k<array[j] ; j--) //j=0     //Shifting elements backward to create a hole
        {
            array[j+1] = array[j];
          //  array[j+1] = k; 
        }  
        //printf("%d\t",array[j]);
        //printf("%d\t",array[j+1]);
        array[j+1] = k;   
        printf("list1:%d\t",array[j+1]); 
        printf("\nlist2:%d\t",array[j]); 
    }
    printf("\nThe Sorted Array after insertion : \n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }

}