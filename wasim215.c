#include<stdio.h>
int Print_First_Odd_Natural_Numbers(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    Print_First_Odd_Natural_Numbers(n);
    printf("\n");
    return 0;
}
int Print_First_Odd_Natural_Numbers(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n",2*i-1);
        i++;
    }
}