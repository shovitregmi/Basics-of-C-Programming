//C Program to check if the number is palindrome or not.
#include<stdio.h>
void main()
{
    int n,r,s=0,i;
    printf("Enter a Number=");
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    printf("The Reverse is %d",s);
    if(s==n)
    {
        printf("\nThe Number is Palindrome");
    }
    else
        printf("\nThe Number is Not a Palindrome");
}
