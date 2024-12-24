#include<stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter 1. Check for Isosceles triangle\n");
    printf("Enter 2. Check for Right angle triangle\n");
    printf("Enter 3. Check for Equilateral triangle\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter the length of the triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || b==c || c==a)
            {
                printf("Isosceles Triangle");
            }
            else
            {
                printf("Not Isosceles Triangle");
            }
            break;
        case 2:
            printf("Enter the length of the traingle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            {
                printf("Right Angle Triangle");
            }
            else
            {
                printf("Not Right Angle Triangle");
            }
            break;
        case 3:
            printf("Enter the length of the triangle\n");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b && b==c && c==a)
            {
                printf("Equilateral Triangle");
            }
            else
            {
                printf("Not Equilateral Triangle");
            }
            break;
        default:
            printf("Sorry! Invalid Input");
    }
    printf("\n");
    return 0;
}