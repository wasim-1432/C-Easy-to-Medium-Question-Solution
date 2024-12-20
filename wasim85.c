#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
    {
        printf("Required answer:%d",a);
    }
    else if(b>a && b>=c)
    {
        printf("Required answer:%d",b);
    }
    else if(c>a && c>b)
    {
        printf("Required answer:%d",c);
    }
    else if(a==b && a==c)
    {
        printf("Required answer:%d",a);
    }
    printf("\n");
    return 0;
}