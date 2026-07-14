#include<stdio.h>
#define a 3
main()
{
	float x , y;
	printf("Enter the value of x :");
	scanf("%f",&x);
	printf("Enter the value of y :");
	scanf("%f",&y);
	
	printf("Enter value of (x+y)(x+y)(x+y) :%.2f",(x*x*x)+(y*y*y)+a*x*y*(x+y));
	
}
