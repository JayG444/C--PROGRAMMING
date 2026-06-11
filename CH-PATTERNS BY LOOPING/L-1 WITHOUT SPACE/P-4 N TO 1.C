#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter your Number :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d\t",j);	
		}
		printf("\n");
	}
}
