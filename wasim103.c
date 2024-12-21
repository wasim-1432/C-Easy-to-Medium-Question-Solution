#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("Uppercase");
    }
    else if(a>='a' && a<='z')
    {
        printf("Lowercase");
    }
    else if(a>='0' && a<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
    printf("\n");
    return 0;
}