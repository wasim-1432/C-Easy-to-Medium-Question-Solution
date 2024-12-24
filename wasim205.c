#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,i=2,s=1,r,y,sum=0;
    printf("Enter 1. For LCM\n");
    printf("Enter 2. For sum of digits of a given number\n");
    printf("Enter 3. For Volume of Cuboid\n");
    printf("Enter 4. Check Whether a given number is Prime or not\n");
    printf("Enter 5. Exit\n");
    printf("\n\n");
    printf("Enter any one choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Enter any two numbers\n");
            scanf("%d%d",&a,&b);
            while(a!=1 || b!=1)
            {
                if(a%i==0 && b%i==0)
                {
                    a=a/i;
                    b=b/i;
                    s=s*i;
                    continue;
                }
                else if(a%i==0)
                {
                    a=a/i;
                    s=s*i;
                    continue;
                }
                else if(b%i==0)
                {
                    b=b/i;
                    s=s*i;
                    continue;
                }
                i++;
            }
            printf("LCM is=%d",s);
            break;
        
        case 2:
            printf("Enter any number\n");
            scanf("%d",&a);
            for(y=a;y!=0;y=y/10)
            {
                r=y%10;
                sum=sum+r;
            }
            printf("Sum of digits=%d",sum);
            break;

        case 3:
            printf("Enter the length,width and height\n");
            scanf("%d%d%d",&a,&b,&r);
            printf("Volume of cuboid is=%d",a*b*r);
            break;

        case 4:
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
                printf("No Prime number");
            }
            break;
        
        case 5:
            exit(0);

        default:
            printf("Invalid Input! ... Please try again");
    }
    printf("\n");
    return 0;
}