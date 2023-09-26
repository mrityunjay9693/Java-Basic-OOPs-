#include <stdio.h>

int main()
{
    char name[2][20];
    int difference;
    int size=2;
    // char name1[] = { 'a', 'b', 'c'};
    // char name2[] = { 'd', 'e', 'f'};
    int arr1[1],arr2[1];
    printf("Enter name: \n");
    for(int i = 0; i <2; i++){
        scanf("%[^\n]%*c",name[i]);

    }
    printf("Entered names are: \n");
    for(int i = 0; i <2;i++){
        printf("%s\n",name[i]);
    }
    printf("%c\n",name[0][0]);
    printf("%c\n",name[1][0]);
    arr1[0] = name[0][0];
    arr2[0] = name[1][0];
    difference = arr1[0] - arr2[0];
    printf("difference : %d\n",difference);

    if(difference > 0)
    {
       //printf("1\n");
       return 1;
    }
    else if(difference < 0)
    {
        printf("-1\n");
        //return -1;
    }
    else
    {
        printf("0\n");
        //return 0;
    }
       

    
    printf("arr1 : %c\n",arr1[0]);
    printf("arr2 : %c\n",arr2[0]);
    
    // printf("%c\n",name1[0]);
    // printf("%c\n",name2[0]);
    // printf("difference: %i\n",name1[0]-name2[0]);
    
    return 0;
}

void compare(Avichal,Abinash)
// {

// }



// printf("%s\n",name[0][0]);
// void input_array(char *name, ){

// }

//void display_array(char *array, const int size){
    
//     for(int i=0; i<size; i++){
//         printf("%d\t",array[i]);        
//     }

// }