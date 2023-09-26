#include<stdio.h>

int main()
{
    int array[] = {12,5,96,33,45};
    int Search_Value;
    int i;
    printf("Enter the value, you want to search: ");
    scanf("%d",&Search_Value);
    for(i=0; i<5; i++)
    {
        if(Search_Value==array[i])
        {
            break;
        }
    }

    if(i>=5)
        printf("The search value was not found!\n");
    else
        printf("The search value is found at %d\n",i);
    return 0;
}