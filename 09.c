#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Sunday");
			break;
		
		case 2:
			printf("Monday");
			break;
			
		case 3:
			printf("thusday");
			break;
			
		case 4:
			printf("wednesday");
			break;
			
		case 5:
			printf("thuseday");
			break;
		
		case 6:
			printf("Friday");
			break;
			
		case 7:
			printf("saturday");
			break;
			
		default :
			printf("Input worng, Enter the (1-7) numbers");
			break;
	}
	
	return 0;
}
