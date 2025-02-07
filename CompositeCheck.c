//WAP to print all composite numbers within a ranged point

#include<stdio.h>
void main()
{
    int start,end,i,j,count;
    printf("Enter Starting and Ending Point = ");
    scanf("%d%d",&start,&end);
    printf("The Composite Numbers:-");
    for(i=start;i<=end;i++)
    {
     count=0;
     for(j=1;j<=i;j++)
     {
         if(i%j==0)
         {
             count=count+1;
         }
     }
     if (count>2)
     {
         printf("%d\t",i);
     }
    }

}

