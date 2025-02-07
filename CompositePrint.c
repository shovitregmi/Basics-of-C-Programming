#include <stdio.h>

//Print composite !!!

int main()
{
	 int i,j,n,count=0;

	 printf("Enter a number: ");
	 scanf("%d",&n);

	 printf("The Composite numbers are: \t");
	 for(i=1; i<=n; i++)
	 {

		 for(j=1; j<=i; j++)
		 {
		 	if(i%j==0){
		 		count++;
			 }
		 }

		 if(count>2)
		 {
		 	printf("%d\t",i);
		 	count=0;
		 }


	 }


}
