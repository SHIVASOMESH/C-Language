#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the number :");
	scanf("%d %d",&a,&b);

	a=a+b;
	b=a-b;	
	a=a-b;
	
	printf("ofter swpping number a=%d b=%d",a,b);

	return 0;
}
