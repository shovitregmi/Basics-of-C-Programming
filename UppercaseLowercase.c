#include<stdio.h>
int main();
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    {
        printf("\nThe character is in uppercase.");
        c=c+32;
        printf("\nThe equivalent lowercase is %c.",c);
    }
    else if(c>=97 && c<=122)
    {
        printf("\nThe character is in lowercase.");
        c=c-32;
        printf("\nThe equivalent uppercase is %c.",c);
    }
    return 0;
}
