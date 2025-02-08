#include<stdio.h>
int main()
{
    int choice;
    printf("\nselect 1 for File, 2 for Edit and 3 for Save\n");
    printf("\n1=File\n2=Edit\n3=Save\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\nYou have chosen File menu item");
        break;
    case 2:
        printf("\nYou have chosen Edit menu item");
        break;
    case 3:
        printf("\nYou have chosen Save menu item");
        break;
    default:
        printf("\nInvalid option!!!");
        break;
    }
    return 0;
}
