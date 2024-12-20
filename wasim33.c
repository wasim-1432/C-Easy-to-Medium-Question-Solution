#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter any three characters\n");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c-%d,%c-%d,%c-%d",a,a,b,b,c,c);
    printf("\n");
    return 0;
}