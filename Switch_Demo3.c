#include<stdio.h>
int main()
{
    char choice, ch;
    printf("Enter your choice:\n1.For vowel/consonant\n2.For digit or non-digit\n");
    choice=getchar();
    fflush(stdin);
    printf("\nEnter your character to be tested:");
    ch=getchar();
    switch (choice)
    {
        case '1':
            if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O' || ch=='U')
            {
                printf("\nThe input character %c is vowel.",ch);
            }
            else
            {
                printf("\nThe input character %c is consonant.",ch);
            }
        break;
        case '2':
            if(ch>=48 && ch<=57)
            {
                printf("\nThe input character %c is digit!!!!",ch);
            }
            else
            {
                printf("\nThe character %c is not digit. Its ASCII value is %d.",ch,ch);
            }
        break;
        default:
            printf("\nInvalid Choice!!!!");
        break;
    }
    return 0;
}
