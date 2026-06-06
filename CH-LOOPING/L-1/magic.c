#include<stdio.h>
main()
{
	int n,rem,a,sum=0;
	printf("Enter your Number :");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem= n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	()
	?printf("Your given Number is a Magic Number")
	:printf("Your given Number is not a Magic Number");	
}
