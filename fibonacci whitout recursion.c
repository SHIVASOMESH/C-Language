#include <stdio.h>

int main()
{
	int n1=0, n2=1,n3,i,num;
	printf("Enter the numbeer of elements :");
	scanf("%d",&num);
	printf("\n%d %d",n1,n2); //printing 0 and 1
	for (i=2; i<=num; i++)   // loop start form 2 becoud\se 0 and 1 are alredy
	{
		n3 = n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
	
	
	return 0;
}
