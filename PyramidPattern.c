#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf("\t");
        for(j=i;j<=2*i-1;j++)
            printf("\t%d",j);
        for(j=2*i-2;j>=i;j--)
            printf("\t%d",j);
        printf("\n");
    }
    return 0;
}
