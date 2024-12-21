#include<stdio.h>
int main()
{
    int a,i=1;
    printf("Enter the table name\n");
    scanf("%d",&a);
    while(i<=10)
    {
        printf("%d x %d=%d\n",a,i,a*i);
        i++;
    }
    printf("\n");
    return 0;
}