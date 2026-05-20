#include<stdio.h>
#define a 0.001
main()
{
	
	float p,r,n ;
	
	printf("Enter principal amount : ");
	scanf("%f" , &p);
	printf("Enter rate : ");
	scanf("%f" , &r);
	printf("Enter time : ");
	scanf("%f" , &n);
	
	
	printf("Simple Interest :%.2f" , a*p*r*n);
	
	
}
