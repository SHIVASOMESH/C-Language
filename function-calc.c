#include <stdio.h>
int addnumbers(int x,int y); //formal arguments
int main()
{
	int a,b;
	printf("enter the value of  a and b");
	scanf("%d %d",&a,&b)
	int c=addnumbers(a,b); //actual arguments
	printf("%d ans is",c);
	
	return 0;
}
int addnumbers(int x,int y)
{
	return x+y;
}
