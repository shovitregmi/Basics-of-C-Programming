#include<stdio.h>
int main()
{
    int a,b,choice,x;
    printf("Enter two numbers = ");
    scanf("%d%d",&b,&a);

    printf("\nWhich operation would you like to undergo\n");
    printf("Type 1 For ADD\n Type 2 For SUB\n Type 3 For DIV\n Type 4 For MUL\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        x=a+b;
        printf("SUM = %d",x);
        break;

    case 2:
        x=a-b;
        printf("SUB = %d",x);
        break;

    case 3:
        x=a/b;
        printf("DIV = %d",x);
        break;

    case 4:
        x=a*b;
        printf("MUL = %d",x);
        break;

    default:
        printf("YOUR OPTION IS NOT VALID");
    }
}
