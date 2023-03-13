#include <stdio.h>

int main()
{
	int a,b;
	printf("enter the before swap number a:");
	scanf("%d",&a);
	printf("enter the before swap number b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("ofter swap number a=%d b=%d",a,b);
	
	return 0;
}
