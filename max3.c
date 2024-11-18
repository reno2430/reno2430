#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	printf("enter the third number\n");
	scanf("%d",&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("maximum number is %d\n",max);
	return 0;
}
