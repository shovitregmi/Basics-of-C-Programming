#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d,real,img;
    printf("\nEnter the values of a, b and c in x^2+b^x+c=0:\t");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;

    if(d<0)
    {
        printf("Roots are imaginary!!!!!");
        d=sqrt(fabs(d));
        real=-b/(2*a);
        img=d/(2*a);
        printf("\nx1=%.2f+i%.2f",real,img);
        printf("\nx2=%.2f+i%.2f",real,-img);

    }
    else
    {
        printf("\nRoots are real:");
        d=sqrt(d);
        x1=(-b-d)/(2*a);
        x2=(-b+d)/(2*a);
        printf("x1=%.2f\tx2=%.2f",x1,x2);
    }
    return 0;
}
