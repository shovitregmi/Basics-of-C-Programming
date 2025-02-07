#include<stdio.h>
int main()
{
    int i=0,num;
    printf("\nEnter a number:\t");
    scanf("%d",&num);
    check:
    if(i>=num)
        goto stop;
        else
        {
            i++;
            printf("\n%d",i);
            goto check;
        }
    stop:
        printf("\nThis is end");
    return 0;
}
