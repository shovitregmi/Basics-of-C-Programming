#include<stdio.h>
#include<math.h>
#define PI 3.1428
int main()
{
    float x,y,r,q,angle;
    printf("Enter Cartesian coordinate x and y:");
    scanf("%f%f",&x,&y);

    r=sqrt(x*x+y*y);
    q=atan(y/x);  //gives the value of tan inverse
    angle=180*q/PI;
    printf("r=%f and angle in degree=%.2f",r,angle);
    return 0;
}
