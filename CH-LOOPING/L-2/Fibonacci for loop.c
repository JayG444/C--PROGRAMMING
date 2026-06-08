#include<stdio.h>
main()
{
	int n,a=0,b=1,c;
	printf("Enter your Number :");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
		c=a+b;
		a=b;
		b=c;
	printf("%d\t",c);
}
