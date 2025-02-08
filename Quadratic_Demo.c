#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the value of a, b and c:");
    scanf("%f%f%f",&a,&b,&c);

    d=b*b-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("\nRoot1=%f\nRoot2=%f",r1,r2);
    return 0;
}
