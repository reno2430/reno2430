#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	a=a/b;
	b=a/b;
	a=a/b;
	printf("%d\n%d",a,b);
	return 0;
}
