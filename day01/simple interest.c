#include<stdio.h>
int main()
{
	int principal,rate,year;
	printf("Enter value for principal ,rate,year ");
	scanf("%d%d%d",&principal,&rate,&year);
	int simpleinterest=(principal*rate*year)/100;
	printf("The  value of simple interest is%d",simpleinterest);
	return 0;
}