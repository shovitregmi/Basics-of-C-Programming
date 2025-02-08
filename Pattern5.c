#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;j++,k++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
