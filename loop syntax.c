#include <stdio.h>

int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i==90)
		{
			continue;
		}
		if(i==95)
		{
			continue;
		}
		printf("%d\n",i);
		
	}
	return 0;
}
