#include<stdio.h>
void main()
{
	float celsius;
	printf("Enter value which you want to convert celsius temperature in fahrenheit");
	scanf("%f",&celsius);
	float far=(celsius*9/5)+32;
	printf("the value of this celsius temperature in farenheit is %f",far);
	
}