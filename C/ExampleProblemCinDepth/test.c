#include<stdio.h>
int main()
{
    char ch;
    char s[50];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s%*c", s);
    //scanf("%s", sen);
    //getchar();
    //gets(sen);
    scanf("%[^\n]", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}