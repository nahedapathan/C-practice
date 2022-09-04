#include<stdio.h>
int main()
{
	int radius,height;
	float pi=3.14;
	printf("Enter the value for Radius and height:");

	scanf("%d%d",&radius,&height);
	printf("Area of circle%f\n",pi*radius*radius);
	printf("volume of cylinder is %f",pi*radius*radius*height);
	return 0;
	
}