#include<stdio.h>
int main()
{
    int male_no,female_no;
    float ratio;
    printf("Enter number of male:");
    scanf("%d",&male_no);
    printf("Enter number of female:");
    scanf("%d",&female_no);
    ratio=(float)male_no/female_no;
    printf("Ratio=%f",ratio);
    return 0;
}
;
