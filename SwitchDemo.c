#include<stdio.h>
int main()
{
    float op1,op2,result;
    char opr;
    printf("Enter two operators:\t");
    scanf("%f%f",&op1,&op2);
    printf("\nEnter one operator among +,-,* and /:\t");
    scanf(" %c",&opr);

    switch(opr)
    {
        case '+':
            result=op1+op2;
            printf("\nThe sum is %.2f",result);
            break;
        case '-':
            result=op1-op2;
            printf("\nThe difference is %.2f",result);
            break;
        case '*':
            result=op1*op2;
            printf("\nThe product is %.2f",result);
            break;
        case '/':
            result=op1/op2;
            printf("\nThe quotient is %.2f",result);
            break;
        default:
            printf("\nInvalid operator!!!");
            break;

    }
    return 0;
}
