#include<stdio.h>
int main()
{
    char names[5][10];
    int i;
    printf("\nEnter name of 5 persons:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",names[i]);
    }
    printf("\nThe names we have entered are:\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t",names[i]);
    }
}
