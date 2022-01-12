#include<stdio.h>
//#include<stlib.h>
#include "MergeSupport.c"

//void display_array(int arr[], int size);
void split_array(int arr[], int li, int mt, int rt);
int main()
{
    int mid_term;
    int array[20] = {13, 9, 14, 6, 8, 10, 11, 19};
    int array_size = sizeof(array)/sizeof(array[0]);
    printf("Array size: %ld\n",sizeof(array));
   // printf("Array Size: %d",array_size);
    display_array(array,array_size);
    mid_term = 0+(array_size-1)/2;
    printf("middle term =%d",mid_term);
    split_array(array, 0, mid_term, array_size-1);
     
}     

//void display_array(int arr[], int size)
//{
//    //int i;
//   for(int i=0; i<size; i++){
//        printf("%d\n",arr[i]);       
//    }
//}
void split_array(int arr[], int li, int mt, int rt) //li=left index/ mt=middle term/ rt =right index
{
    int i,j;
    int s1 = mt-li+1; //splliting array before mid term
    int s2 = rt-mt; //splliting array after mid term

    //creating the splitted array

    int LR[s1],RR[s2]; //LR[4], RR[2]


    //INSERTING VALUES IN SPLITTED ARRAY
    printf("\ns1: %d\n ",s1);
    printf("\nLeft array: \n");
    for(i=0; i<s1; i++){
        LR[i] = arr[li+i];  //li= left index=0
        printf("%d\t",LR[i]);
    } 
    printf("\ns2: %d\n ",s2);
    printf("Right array: ");
    for(j=0; j<s2; j++){
        RR[j] = arr[mt+1+j]; //mt=middle term=3
        printf("%d\t",RR[j]);
    }
    split_array(LR, 0, mid_term, array_size-1);
}
