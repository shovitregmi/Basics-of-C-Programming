//Program to find the sum of all even and odd numbers till a entered digit.
#include <stdio.h>
void main()
{
	 int i,n,odd=0,even=0;

	 printf("Enter a number: ");
	 scanf("%d",&n);
	 for(i=1; i<=n;i++)
	 {
	 	if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
	 }
	 printf("Sum of the Even numbers are: %d\n",even);
     printf("Sum of the Odd numbers are: %d",odd);
}
