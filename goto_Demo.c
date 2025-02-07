#include<stdio.h>
int main()
{
    int i,num1,num2;
    printf("\nEnter any two numbers:");
    scanf("%d%d",&num1,&num2);

    if(num1<0)
    goto negative;
    if(num2<0)
    goto negative;
    printf("\nThe both numbers are positive");
    return 0;
    negative:
    printf("\nEither number is negative");
    return 0;

}
