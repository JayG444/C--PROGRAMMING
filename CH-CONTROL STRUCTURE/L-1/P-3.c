#include<stdio.h>
main()
{
	int a;
	printf("Enter Number :");
	scanf("%d",&a);
	
	if(a>0)	
	{
		printf("Your Number is positive.");
	}
	else if(a<0)
	{
		printf("Your Number is Negative.");
	}
	else 
	{
		printf("Your Number is Neutral.");
	}
}
	
