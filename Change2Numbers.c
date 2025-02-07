#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    printf("\nBefore changing a=%d and b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter changing a=%d and b=%d",a,b);
    return 0;
}
