#include<stdio.h>
int main()
{
    int a=14,b=33,c=14;
    float d=20.5,e=10.25,f=3.5;

    printf("a/b=%d\t a/c=%d\n",a/b,a/c);                    //Arithmetic Operator
    printf("d/e=%f\t d/f=%f\t d/a=%f\n",d/e,d/f,d/a);

    printf("(a<b) => %d\t (a>b) => %d",a<b,a>b);        //Relational Operator
    printf("\n(a==c) => %d\t (a<=c) => %d\t (a>c) => %d\n",a==c,a<=c,a>=c);

    printf("\na<b && a<c =>%d",(a<b && a<c));           //Logical Operator
    printf("\na>b && b<c =>%d",(a>b && b<c));
    printf("\na<b || a<c =>%d",(a<b || a<c));
    printf("\na>b || b<c =>%d",(a>b || b>c));
    printf("\na>c || b>c =>%d",(a>c || b>c));
}
