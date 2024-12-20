#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b & c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Two real & distinct solutions\n");
    }
    else if(d=0)
    {
        printf("Real and equals\n");
    }
    else if(d<0)
    {
        printf("Imaginary Roots");
    }
    printf("\n");
    return 0;
}