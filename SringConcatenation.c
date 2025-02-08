#include<stdio.h>
#include<string.h>
int main()
{
    char firstName[20]="Shovit",lastName[]=" Regmi";
    strcat(firstName,lastName);
    printf("\nThe full name is %s.",firstName);
    return 0;
}
