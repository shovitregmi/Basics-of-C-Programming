//Program to compute sum of digits of an integer

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, r, q, s=0;

    printf("\nEnter number to be checked:\t");
    scanf("%d", &n);
    do
	{
        q = n / 10;
        r = n % 10;
        n = q;
        s = s + r;
	}
	while(q!=0);

    printf("\nThe sum of digits is:\t%d", s);

}

