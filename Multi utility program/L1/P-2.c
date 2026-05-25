#include<stdio.h>
main()
{
	const float b=0.01;
	float x,y,z,a;
	
	printf("Base Salary :");
	scanf("%f",&x);
	printf("HRA :");
	scanf("%f",&y);
	printf("DA :");
	scanf("%f",&z);
	printf("TA :");
	scanf("%f",&a);
	
	printf("Gross Salary :%.2f", x+(x*y*b)+(x*z*b)+(x*a*b));
	
}
