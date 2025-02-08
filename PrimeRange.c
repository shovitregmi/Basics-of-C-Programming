#include <stdio.h>
int main()
{
	int i,j,count,start,end;

	printf("Enter starting point and Ending Point.\n");
	scanf("%d%d",&start,&end);

    printf("Prime numbers are: \t");
	 for(i=start; i<=end; i++)
	 {
	  count =0;
		 for(j=1; j<=i; j++)
		 {
		 	if(i%j==0)
            {
		 		count++;
            }
		 }
		 if(count == 2)
		 {
		 	printf("%d\t",i);
		 }
	 }


}
