#include <stdio.h>

int main()
{
	int age;
	g:
		{
			printf("eligible\n");
		}
	l:
		{
			printf("not-eilible/n");
		}
		
	printf("enter the age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		goto g;
	}
	else
	{
		goto l;
	}
	return 0;
}
