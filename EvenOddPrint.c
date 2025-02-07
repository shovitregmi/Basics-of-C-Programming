//Program to print all even and odd numbers till a certain entered digit.
#include <stdio.h>
void main()
{
	 int i,n,j;

	 printf("Enter a number: ");
	 scanf("%d",&n);
    printf("\nEVEN numbers are:");
    for(i=2; i<=n;)
	 {
	     printf("%d\t",i);
	 	i=i+2;
	 }
	 printf("\nODD numbers are:");
	 for(j=1;j<=n;)
     {
         printf("%d\t",j);
         j=j+2;

     }
}
