#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n<0)
	{
	printf("%d it a negative",n);
	}
	else if(n>0)
	{
		printf("%d it is positive",n);
	}
	else if(n==0)
	{
		printf("%d it is a zero",n);
	}
	return 0;
}
