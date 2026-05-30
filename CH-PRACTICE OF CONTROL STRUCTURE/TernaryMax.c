#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the value of first Number :");
	scanf("%d",&a);
	printf("Enter the value of Second Number :");
	scanf("%d",&b);
	printf("Enter the value of Third Number :");
	scanf("%d",&c);
	printf("Enter the value of Fourth Number :");
	scanf("%d",&d);
	(a>b)?
		(a>c)?
			(a>d)
			?printf("%d is Maximum.",a)
			:printf("%d is Maximum.",d)
		: 
			(c>d)
			?printf("%d is Maximum.",c)
			:printf("%d is Maximum.",d)
	:
		(b>c)?
			(b>d)
			?printf("%d is Maximum.",b)
			:printf("%d is Maximum.",d)
		: 
			(c>d)
			?printf("%d is Maximum.",c)
			:printf("%d is Maximum.",d);
			
}
