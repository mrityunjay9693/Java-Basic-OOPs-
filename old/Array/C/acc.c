#include <stdio.h>
int main()
{
    int number=1,rem;
    rem = number%10;
    number = number/10;
    printf("remainder=%d\n",rem);
    printf("number=%d\n",number);
    

    return 0;
}