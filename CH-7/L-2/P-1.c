#include<stdio.h>
main()
{
	int x,y,z;
	printf("Enter the value of first Number :");
	scanf("%d",&x);
	printf("Enter the value of Second Number :");
	scanf("%d",&y);
	printf("Enter the value of Third Number :");
	scanf("%d",&z);
	
	if(x<y)
	{
		if(x<z)
		{
			printf("%d is Minimum.",x);	
		}
		else
		{
			printf("%d is Minimum.",z);
		}
	}
	else
	{
		if(y<z)
		{
			printf("%d is Minimum.",y);	
		}
		else
		{
			printf("%d is Minimum.",z);
		}
	}
}
