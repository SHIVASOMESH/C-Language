#include<stdio.h>
void hello();
void namste();

int main()
{
	hello();
	namste();
	
	return 0;
}
void hello()
{
	printf("hello in function\n");
}
void namste()
{
	printf("hello in namste");
}
