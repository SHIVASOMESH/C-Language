#include <stdio.h>
void printFibo(int n)
{
	static int n1=0,n2=1,n3;
	if (n>0){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d",n3);
		printFibo(n-1);
	}
}

int main()
{
	int n;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	printf("Fibonacci series :");
	printf("%d %d",0,1);
	printFibo(n-2); //n-2 because 2 number are already printed
	
	return 0;
}
