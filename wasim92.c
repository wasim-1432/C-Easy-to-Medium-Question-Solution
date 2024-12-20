#include<stdio.h>
int main()
{
    float ph,ch,math,eng,hin;
    printf("Enter the marks of Physics,Chemistry,Math,English & Hindi\n");
    scanf("%f%f%f%f%f",&ph,&ch,&math,&eng,&hin);
    if(ph>33 && ch>33 && math>33 && eng>33 && hin>33)
    {
        printf("Congratulations! You are Passed");
    }
    else
    {
        printf("Sorry! You are failed");
    }
    printf("\n");
    return 0;
}