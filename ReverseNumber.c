#include <stdio.h>
int main()
{
	 int n,r,s=0,i;

	 printf("Enter a number: ");
	 scanf("%d",&n);
	 for (i=1;n>0;i++)
	 {
        r=n%10;
        n=n/10;
        s=s*10+r;
	 }

    printf("The reverse is %d",s);
}
