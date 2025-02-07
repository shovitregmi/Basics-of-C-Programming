#include<stdio.h>
int main()
{
    int n1=60,n2=15,AND,OR,XOR;
    unsigned int n3=60, left,right;
    AND=n1 & n2;                            //Bitwise Operator
    OR=n1 | n2;
    XOR=n1 ^ n2;
    printf("AND =>%d\n",AND);
    printf("OR =>%d\n",OR);
    printf("XOR =>%d\n",XOR);

    left=n3<<3;                 //Bitwise Shift
    right=n3>>3;

    printf("Left =>%d\n",left);
    printf("Right =>%d\n",right);
}
