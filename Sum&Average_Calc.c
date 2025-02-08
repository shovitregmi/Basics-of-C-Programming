//Program that gives the sum and average of entered digits
#include<stdio.h>
int main()
{
    int num, count=0;
    float sum=0,avg;
    do
    {
        printf("\nEnter number:\t");
        scanf("%d",&num);
        sum+=num;
        count ++;
    } while (num>0); // 0 to end the loop
    sum=sum-num;
    avg=(sum)/(count-1);
    printf("\nThe sum is %f.",sum);
    printf("\nThe average is %f.",avg);
    return 0;
}
