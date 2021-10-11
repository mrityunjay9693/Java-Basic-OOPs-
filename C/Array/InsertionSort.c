#include<stdio.h>
#include "SortSupport.c"
int main()
{
    
    int i=0,j=0,k=0;
    int t[10];
    int array[]= {9,12,15,16,1};
    printf("Array before sort: \n");
    display(array);
    t[0]=array[4];
    array[0]=array[1];
    printf("array[0]=%d\n",array[0]);
    printf("array[1]=%d\n",array[1]);
    printf("value of t[0]: %d",t[0]);
    for(i=0;i<5;i++)
    {
        printf("\narray :%d\t\n",array[i]);
    }
    printf("------------\n");
    
    for( i=1;  i<5 ; i++ ) 
    {
        k = array[i]; //k = array[i=1]
        printf("%d\t",array[i]);
        for(j=i-1; j>=0 ; j--) //j=0
        {
            if(k<array[j]) //12<19
            {
                
                array[j+1] = array[j]; //
               // array[j] = k;

            } 
            else
            {
                  array[j+1] = k;
            }          
          
                
        
        }   
        //array[j+1] = k;         
    }
    printf("\nThe Sorted Array after insertion : \n");
    //display(array);
    for(i=0;i<5;i++)
    {
        printf("%d\t\n",array[i]);
    }
   
}