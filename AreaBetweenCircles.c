#include<stdio.h>
#define PI 3.1428
int main()
{
    float r1,r2,a1,a2,area;
    printf("Enter the radius of large and small circle:");
    scanf("%f%f",&r1,&r2);

    a1=PI*r1*r1;
    a2=PI*r2*r2;

    area=a1-a2;
    printf("Area of first and second circle is %.2f \nand %.2f respectively.",a1,a2);
    printf("\nThe area between two circle is %.2f.",area);
    return 0;

}
