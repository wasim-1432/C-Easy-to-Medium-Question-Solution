#include<stdio.h>
int main()
{
    int a,i=2;
    printf("Enter any number\n");
    scanf("%d",&a);
    while(i<=a)
    {
        if(a%i==0)
        {
            break;
        }
        i++;
    }
    if(a==i)
    {
        printf("Prime number");
    }
    else
    {
        printf("Non prime number");
    }
    printf("\n");
    return 0;
}