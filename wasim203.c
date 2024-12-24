#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character\n");
    scanf("%c",&a);
    switch(a)
    {
        case 'A' ... 'Z':
            printf("Uppercase Alphabet");
            break;
        case 'a' ... 'z':
            printf("Lowercase Alphabet");
            break;
        case '0' ... '9':
            printf("Digits");
            break;
        default:
            printf("Special Character");
    }
    printf("\n");
    return 0;
}