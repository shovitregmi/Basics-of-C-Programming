#include<stdio.h>
int main()
{
    int a,b,sum;
    char nextTime;
    nextTime='y';

    while (nextTime=='y')
    {
        printf("\nEnter two number to be added = \t");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("\nThe sum is = \t%d",sum);
        printf("\n\nDo you want to add another two numbers?");
        printf("\nPress y for yes and other characters to exit\t");
        scanf(" %c",&nextTime);
    }
}
