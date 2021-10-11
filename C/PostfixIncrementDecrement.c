#include<stdio.h>


int main()
{
    int y, x = 3;
    y = x++;
    printf("y = %d\n",y);
    printf("x = %d\n",x);
    y = x--;
    printf("y = %d\n",y);
    printf("x = %d\n",x);
    return 0;
    
}