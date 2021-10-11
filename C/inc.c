#include<stdio.h>

int main()
{
    int a=10;
    printf("a=%d\n",a);
    printf("++a=%d\n",++a);//a=11
    printf("a++=%d\n",a++);//a=12
    printf("a=%d\n",a);
    printf("a=%d \t ++a=%d \n",a,++a);//a=13
    printf("a=%d \t a++=%d \n",a,a++);
    return 0;
}