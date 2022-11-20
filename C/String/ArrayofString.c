//Program to take some name as string and do operation in array.

#include<stdio.h>

int main(){    
    char names[5][20];

    printf("The size of array names is %ld bytes\n",sizeof(names));
    printf("Enter any five name: \n");

    for(int i=0; i<5;i++){
        scanf("%[^\n]%*c",names[i]);
    }

    printf("The entered names are: \n");

    for(int i=0; i<5; i++){
        printf("%s\n",names[i]);
    }
    
    return 0;
}