#include<stdio.h>

int main()
{
    int i;
    int j=10;
    int l=0,r=5,m;
    int arr[]= {1,2,3,4,5,6};
    i = j++ - j++;
    printf("%d %d",i,j);
    int arr_size = sizeof(arr);
  //  int arr_size_fstelement = sizeof()//
    printf("array size = %d",arr_size);
   // printf("array size of 1st index: %d",sizeof(arr[0]));
    m=l+(r-1)/2;
    printf("Middle=%d",m);


}
