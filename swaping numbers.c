//                     swaping numbers
main()
{
	int a,b;
	printf("enter the frist number a:");
	scanf("%d", &a);
	printf("enter th secende number b:");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("ofter swap a=%d b=%d", a,b);
	
	getch();
	return 0;	
}

