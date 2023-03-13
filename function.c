#include<stdio.h>

void indian();
void french();

int main()
{
	char ch;
	printf("Enter the i for indian:-");
	scanf("%c",&ch);
	if(ch=='i')
	{
		indian();
	}
	else
	{
		french();
	}	

	return 0;
}
	
void indian()
{
	printf("hello iam indian");
}
void french()
{
	printf("hello iam french");
}
