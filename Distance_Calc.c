#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    float distance;

    printf("Enter the first coordinates = ");
    scanf("%d%d",&x1,&y1);

    printf("Enter the second coordinates = ");
    scanf("%d%d",&x2,&y2);

    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("Distance = %.2f ",distance);
}
