#include<stdio.h>
void main()
{

 int a,b,c;

 printf("Enter 3 numbers:\n ");
 scanf("%d%d%d",&a,&b,&c);

    if(a>b & a>c)
        {
            printf("%d is the greatest.",a);
        }

    else if(a<b & b>c)
        {
            printf("%d is the greatest.",b);
        }

    else
        {
            printf("%d is the greatest.",c);
        }
}
