#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the cost price and selling price\n");
    scanf("%d%d",&cp,&sp);
    printf("Profit and Loss of the 25 bananas=%f",(sp-cp)/12.0*25);
    printf("\n");
    return 0;
}