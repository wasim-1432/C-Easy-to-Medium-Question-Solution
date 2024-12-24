#include<stdio.h>
float Area_of_Circle(int r);
int main()
{
    int r;
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    printf("Area of Circle=%f",Area_of_Circle(r));
    printf("\n");
    return 0;
}
float Area_of_Circle(int r)
{
    float area;
    area=3.14*r*r;
    return area;
}