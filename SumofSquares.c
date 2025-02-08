#include<stdio.h>
int main()
{
  int n, sum=0,i;

    printf("Enter n value: ");
    scanf("%d", &n);
    i=0;
    do
  {
     sum = sum + (i*i);
     i++;
  }
  while(i<=n);

  printf("Sum of squares of first %d natural numbers = %d",n, sum);

//  return 0;
}
