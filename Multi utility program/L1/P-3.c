#include<stdio.h>
#define a 180
main()
{
	float x,y;
	
	printf("First angle :");
	scanf("%f",&x);
	printf("Second angle :");
	scanf("%f",&y);
	printf("Third angle:%.2f",a-(x+y));
	
}
