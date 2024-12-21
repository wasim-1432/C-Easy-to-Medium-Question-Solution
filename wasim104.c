#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the three sides of the triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    printf("\n");
    return 0;
}