#include <stdio.h>

int main()
{
	int n; //user value
	printf("Enter the number :");
	scanf("%d",&n);
	
	printf("----------------------------------even number----------------------------------");
	for(int i=2;i<=n;i=i+2)
	{
		printf("%d\n",i);
	}
	
	printf("----------------------------------odd number-------------------------------------");
	for(int i=1;i<=n;i=i+2)
	{
		printf("%d\n",i);
	}
	return 0;
}
