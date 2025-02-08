#include<stdio.h>
int main()
{
    float cel,fahr,centi,fah;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&fahr);
    printf("Enter the temperature in Celsius:");
     scanf("%f",&cel);

    centi=(5*(fahr-32)/9);
    fah=(9*cel)/5+32;

    printf("\nThe equivalent temperature in centigrade is %.2f.",centi);
    printf("\nThe equivalent temperature in Fahrenheit is %.2f.",fah);
    return 0;
}
