#include<stdio.h>
main()
{
	int x,y,z,a;
	printf("Enter the value of first Number :");
	scanf("%d",&x);
	printf("Enter the value of Second Number :");
	scanf("%d",&y);
	printf("Enter the value of Third Number :");
	scanf("%d",&z);
	printf("Enter the value of Fourth Number :");
	scanf("%d",&a);
	
	if(x>y)
	{
		if(x>z)
		{
			if(x>a)
			{
				printf("%d is Maximum.",x);
			}
			else
			{
				printf("%d is Maximum.",a);
			}
		}
		else
		{
			if(z>a)
			{
				printf("%d is Maximum.",z);	
			}
			else
			{
				printf("%d is Maximum.",a);
			}
		}
		
	}
	else
	{
		if(y>z)
		{
			if(y>a)
			{
				printf("%d is Maximum.",y);
			}
			else
			{
				printf("%d is Maximum.",a);
			}
		}
		else
		{
			if(z>a)
			{
				printf("%d is Maximum.",z);		
			}
			else
			{
				printf("%d is Maximum.",a);	
			}
		}
	}
}
