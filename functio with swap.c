#include<stdio.h>

void swap (int x,int y);

int main()
{
	int a=10;
	int b=20;
	printf("before swapping of a nd b is %d %d :",a,b);
	scanf(a,b);
	
	printf("After swapping value of a and b is %d %d \n",a,b);
	return 0;
}

void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
