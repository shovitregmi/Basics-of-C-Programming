#include <stdio.h>
int main()
{
	 int a,b,sum=0,i;

	 printf("Enter a range of number where b>a:\n ");
	 scanf("%d%d",&a,&b);

	 for(i=a; i<=b; i++)
	 {
	 	sum=sum+i;

	 }

	 printf("Sum is: %d",sum);


}
