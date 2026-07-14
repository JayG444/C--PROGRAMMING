#include<stdio.h>
main()
{
	int a,b;
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("Enter Second Number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("%d is maximum and %d is minimum",a,b);
	}
	else if(b>a)
	{
		printf("%d is maximum and %d is minimum",b,a);
	}
	else
	{
		printf("Both are equal");
	}
}
	
