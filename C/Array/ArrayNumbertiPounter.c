#include<stdio.h>
int main()
{
    int array[10];
    printf("%p\n",array);
    printf("---------Address of the array elements---------\n");
    for(int i=0;i<10;i++)
    {
        printf("%p\n",&array[i]);
    }
    return 0;

}