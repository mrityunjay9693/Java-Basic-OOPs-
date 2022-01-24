#include<stdio.h>
//#include "SortSupport.c"
int main()
{
    
    int i=0,j=0,k=0;
    int array[]= {9,12,15,16,1};
    printf("Array before sort: \n");
    display(array);
    
    for(i=1;  i<5 ; i++ ) 
    {
        k = array[i];
        for(j=i-1; j>=0 && k<array[j] ; j--) //j=0
        {
            array[j+1] = array[j];
        }  
        array[j+1] = k;     
    }
    printf("\nThe Sorted Array after insertion : \n");
    for( i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }

}

void display(int *array)
{
	int i=0;
    for( i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
}

