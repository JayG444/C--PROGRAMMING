#include<stdio.h>
main()
{
	int n,rem,rev,a;
	
	printf("Enter your Number :");
	scanf("%d",&n);
	rev==0;
	a=n;
	while(n!=0)
	{
		rem= n%10;
		rev=rev*10+rem;
		n=n/10;	
	}
	(a == rev)
	?printf("Your given Number is a Palindrome Number")
	:printf("Your given Number is not a Palindrome Number");	
}
