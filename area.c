#include <stdio.h>

int addnumber(int x,int y);//formal arguments
int main()
{
	int a,b;
	printf("enter the value od a and b");
	scanf("%d %d",&a,&b);
	
	int c=addnumber(a,b); //actual arguments
	
	printf("%d ans is",c);
	
	return 0;
}

int addnumber (int x,int y)
{
	return x+y;
}
