//Program to demonstrate Format Specifiers
#include <stdio.h>
#include <conio.h>
void main()
{
int a=1050552;
float x=11.123456;

printf("%   -6d",a);
printf("\n");
printf("%+d",a);
printf("\n");
printf("%09d",a);
printf("\n");
printf("% d",a);
printf("\n");
printf("%#o",a);
printf("\n");
printf("%#0x",a);
printf("\n");
printf("%7.2f",x);		//precision format %w.pf

}

