#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the selling and cost price\n");
    scanf("%f%f",&sp,&cp);
    if(sp>cp)
    {
        printf("Profit percentage=%f",(sp-cp)/cp*100);
    }
    else if(sp<cp)
    {
        printf("Loss percentage=%f",(cp-sp)/cp*100);
    }
    printf("\n");
    return 0;
}