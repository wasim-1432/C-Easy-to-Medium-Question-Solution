#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f;
    float g,h;
    printf("Enter 1.For Addition\n");
    printf("Enter 2.For Subtraction\n");
    printf("Enter 3.For Multiplication\n");
    printf("Ebter 4.For Division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            printf("Addition is=%d",a+b);
            break;
        case 2:
            printf("Enter any two numbers\n");
            scanf("%d%d",&c,&d);
            printf("Subtraction is=%d",c-d);
            break;
        case 3:
            printf("Enter any two numbers\n");
            scanf("%d%d",&e,&f);
            printf("Multiplication is=%d",e*f);
            break;
        case 4:
            printf("Enter any two numbers\n");
            scanf("%f%f",&g,&h);
            printf("Division is=%f",g/h);
            break;
        default:
            printf("Sorry! Invalid Input");
    }
    printf("\n");
    return 0;
}