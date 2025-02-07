#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int len;
    printf("Enter your name:");
    scanf("%s",name);
    len=strlen(name);
    printf("\nThe length of character is %d.",len);
    return 0;
}
