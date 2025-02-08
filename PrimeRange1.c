// To check if there are any prime numbers between two numbers.
#include<stdio.h>
void main ()
{
    int a,b,i,num;
    printf("\nEnter Start & End Value where a<b=\t");
    scanf("%d%d",&a,&b);
    printf("Prime Numbers are\n");
    for(num = a; num <= b; num++)
    {
        for(i = 2; i < num; i++)
        {
            if(num%i==0)
                break;
        }
    if(i==num)
        {
            printf("\t%d",num);
        }
    }
}



















