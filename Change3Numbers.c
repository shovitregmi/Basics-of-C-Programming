#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nBefore changing a=%d, b=%d and c=%d",a,b,c);

    d=a;
    a=b;
    b=c;
    c=d;

    printf("\nAfter changing a=%d, b=%d and c=%d",a,b,c);
}
