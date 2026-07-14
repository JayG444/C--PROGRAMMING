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
	
	(x<y)?
		(x<z)?printf("%d is Minimum.",x)	
		:printf("%d is Minimum.",z)
	:
		(y<z)?printf("%d is Minimum.",y)	
		:printf("%d is Minimum.",z);
}

