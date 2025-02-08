#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two numbers = ");
    scanf("%d%d",&a,&b);

    c=a^b;
    a=c^a;
    b=c^b;

    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
