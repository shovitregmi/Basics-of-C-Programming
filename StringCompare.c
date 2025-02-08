
#include<stdio.h>
#include<string.h>
int main()
{
    char name1[15],name2[15];
    int diff;
    printf("Enter first string:");
    scanf("%s",name1);
    printf("\nEnter second string:");
    scanf("%s",name2);

    diff=strcmp(name1,name2);
    if(diff<0)
    {
        printf("\n%s is greater than %s by value %d.",name1,name2,diff);
    }
    else if(diff>0)
    {
        printf("%s is greater than %s by value %d.",name2,name1,diff);
    }
    else
    {
        printf("%s is same as %s.",name1,name2);
    }

}

