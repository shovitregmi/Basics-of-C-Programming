//Program that gives sum all all numbers to a entered digit
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter n:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("\nThe sum is %d.",sum);
    return 0;
}
