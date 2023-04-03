#include<stdio.h>

int main()
{
	int n;
	printf("Enter even are odd check number :");
	scanf("%d",&n);
	
	if(n % 2 == 0){
		printf("this is even number.");
	}
	else{
		printf("this is odd number.");
	}
		
	
	return 0;
}
