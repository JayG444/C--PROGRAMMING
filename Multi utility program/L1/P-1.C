#include<stdio.h>
#define b 32
main()
{
	const float a=1.8;
	float x;
	
	printf("The temperature in celcius :");
	scanf("%f",&x);
	
	printf("The temperature in Fahrenheit :%.2f",(a*x)+b);
	
}

