// Program to check for Armstrong number

#include<stdio.h>
void main()
{
int num,digit,sum=0;
int temp;

printf("\nEnter number to be checked:\t");
scanf("%d", &num);
temp=num;

while(num!=0)
	{
	digit = num % 10;
	sum += digit*digit*digit;
	num /= 10;
	}
if(temp==sum)
	printf("\nArmstrong Number!!!");

else
	printf("Not Armstrong Number.");

}


