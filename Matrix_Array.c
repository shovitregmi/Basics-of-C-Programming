#include<stdio.h>
int main()
{
    int matrix[2][3],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter matrix [%d][%d]:\t",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe entered matrix is:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
