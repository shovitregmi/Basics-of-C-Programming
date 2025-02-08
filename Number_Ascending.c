#include<stdio.h>
int main()
{
    int i,j,n,tem;
    int a[100];
    printf("Enter how many are there\n");
    scanf("%d",&n);
    printf("Enter any number\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    printf("The numbers in ascending order is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
