#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        printf("Lowercase Alphabet");
    }
    else if(a>='A' && a<='Z')
    {
        printf("Uppercase Alphabet");
    }
    printf("\n");
    return 0;
}