#include<stdio.h>
void main()
{
	int b;
	printf("Enter the value of b:");
	scanf("%d",&b);
	int r = b % 2;
	if(r==0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
}
