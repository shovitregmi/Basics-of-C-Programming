#include<stdio.h>
void main ()
{
    int n,count=0,i;
    printf("Enter any Number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;;
            printf ("The Factor of is %d\n",i);
        }
    }
    if(count==2)
        printf("It is a Prime Number");
    else
      printf("It is a Composite Number");
}


