#include<stdio.h>
#define MAX 100

void display(int *arr, int size);

int main()
{
    int arr[MAX], size=0,value, index;
    char ch;
    inputarray(arr, size);
    display(arr, size);
   
    
    while(1)
    {
        printf("Enter the value to insert: ");
        scanf("%d",&value);
        printf("Enter the index: ");
        scanf("%d%*c",&index,&value);
         //Lets have validation , do it later
        if(index == size)
        {
            arr[index] = value;
            printf("Last insert:\n");

        }
        else
        {
            for(int i=size;i>index;i--)
            {
                arr[i] = arr[i-1];

            }
            arr[index] = value;
            printf("Middle insert!\n");
        }
        size++;
        display(arr,size);
        printf("Would you like to add another value(Y/N): ");
        scanf("%c",&ch);
        if(ch=='N')
        {
            break;
        }

    }

    
}

void display(int *arr, const int size)
{
    int i;
    if(size==0)
    {
        printf("The array is empty\n");

    }
    //ElementScanner14
    else
    {
        for(i=0;i<size;i++)
        {
            printf("%d\n",arr[i]);

        }
    }
}