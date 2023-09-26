#include<stdio.h>
//void display(int *array); 

int main()
{
    int array[5],i;
    printf("Print the unsorted array: \n");
    for( i=0; i<5; i++)
    {
        scanf("%d\n",&array[i]);
       // printf("%d",i);
    }
  //  printf("The unsorted array is:");
    //display(array);
    
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
    printf("\nThe Sorted Array is : \n");
    for(int i=0; i<5; i++)
    {
        printf("\n%d\n",array[i]);
    }
   // display(array);
}

//void display(int *array)
//{
//    for(int i=0; i<5; i++)
//    {
 //       printf("%d\n",array[i]);
   // }

//}    


