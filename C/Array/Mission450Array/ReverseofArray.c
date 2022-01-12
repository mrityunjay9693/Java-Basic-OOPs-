#include<stdio.h>
//#define MAXIMUM_SIZE 10
void display_array(int *array,  int size);
void reverseofArray(int *array, int start, int end);

int main(){
    int start=0,end, size;
    int array[]={12,3,5,6,7,8,9};
     
    size = sizeof(array)/sizeof(array[0]);
    end = (size-1);
    printf("Size of Array = %d\n",size);
    printf("Last index of array = %d\n",end);
    printf("Array elements: \n"); 
    display_array(array,size);
    reverseofArray(array,start,end);
    printf("\n");
    printf("The array after reversed: \n");
    display_array(array,size);   
}

void display_array(int *array, const int size){
    
    for(int i=0; i<size; i++){
        printf("%d\t",array[i]);        
    }

}

void reverseofArray(int *array, int start, int end){
    int tempSpace;
    for(int i=start; i<=end; i++,end--){
        tempSpace = array[i];
        array[i] = array[end];
        array[end] = tempSpace;

    }

}

