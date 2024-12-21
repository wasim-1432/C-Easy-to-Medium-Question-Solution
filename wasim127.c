#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size\n");
    scanf("%d",&a);
    while(a)
    {
        printf("%d\n",2*a);
        a--;
    }
    printf("\n");
    return 0;
}