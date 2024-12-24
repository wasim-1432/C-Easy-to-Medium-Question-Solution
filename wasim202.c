#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,s=1,sum=0;
    printf("Enter 1. For Calculate Factorial of a number\n");
    printf("Enter 2. For Check Even or Odd number\n");
    printf("Enter 3. For Area of Circle\n");
    printf("Enter 4. For Sum of first N natural numbers\n");
    printf("Enter 5. For Exit\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(a)
            {
                s=s*a;
                a--;
            }
            printf("Factorial is=%d",s);
            break;
        case 2:
            printf("Enter any number\n");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("Even number");
            }
            else
            {
                printf("Odd number");
            }
            break;
        case 3:
            printf("Enter the radius of the circle\n");
            scanf("%d",&a);
            printf("Area of the circle=%f",3.14*a*a);
            break;
        case 4:
            printf("Enter any number\n");
            scanf("%d",&a);
            while(a)
            {
                sum=sum+a;
                a--;
            }
            printf("Sum of natural numbers=%d",sum);
            break;
        case 5:
            exit(0);
        default:
            printf("Sorry! Invalid Input ... Please try again.");
    }
    printf("\n");
    return 0;
}