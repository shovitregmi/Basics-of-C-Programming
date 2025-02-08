// Program to check is a number is positive, negative or zero.
#include<stdio.h>
void main ()
{
    int a;
    printf("Enter a Number=");
    scanf("%d",&a);
    if(a>0)
    {
        printf("It is a Positive Number");
    }
    else if (a<0)
    {
        printf("It is a Negative Number");
    }
    else
        printf("The Number is ZERO");
}
