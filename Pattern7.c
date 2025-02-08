#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<n;i++)
    {
        for(j=n-i;j<=2*n-2*i-1;j++)
            printf("\t%d",j);
        for(j=2*n-2*i-2;j>=n-i;j--)
            printf("\t%d",j);
        printf("\n");
        for(j=0;j<=i;j++)
            printf("\t");

    }
    return 0;
}
