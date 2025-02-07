//C Program to find the area and perimeter of a Circle
#include <stdio.h>
int main()
{
	 int area, perimeter, radius;

	printf("Enter the radius of the circle: ");
	scanf("%d",&radius);

	area = 3.14 * radius * radius;
	perimeter = 2 * 3.14 * radius;

	printf("The area of the circle is:%d \n ",area);
	printf("The perimeter of the circle is:%d ",perimeter);
}
