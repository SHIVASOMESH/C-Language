#include<stdio.h>

int main()
{
	int y;
	printf("Enter the number :");
	scanf("%d",&y);
	if(y%400==0 || y%4==0 && y%100!=0)
		printf("This is leapyear");
	else 
		printf("This is not leapyear");
		
		
	return 0;
}
