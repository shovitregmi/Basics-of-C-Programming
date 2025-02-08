#include<stdio.h>
void main ()
{
    int start,end,num,count,prime,temp;
    printf("Enter Start & End Value\n");
    scanf("%d%d",&start,&end);

    printf("Prime Numbers Between %d and %d are\n",start, end);
    for(num = start; num <= end; num++)
    {
        prime=1;
        for(count=2;count<num;count++)
        {
            if(num%count==0)
            {
                prime=0;
            }
        }
        if(prime) printf("%d\t",num);
    }
}

