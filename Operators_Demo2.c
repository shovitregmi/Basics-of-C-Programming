#include<stdio.h>
int main()
{
    int a=10,n1,n2,larger;
    printf("a=%d\n",a);                 //Increment and Decrement Operator
    printf("a=%d\n",++a);
    printf("a=%d\n",a++);
    printf("a=%d\n\n",a);

    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);

    larger=n1>n2 ? n1 : n2;         //Logical Operator
    printf("The larger number is %d.",larger);
}
