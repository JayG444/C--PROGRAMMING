#include<stdio.h>
main()
{
	int i=1;
	int N;
	printf("Enter your number:");
	scanf("%d",&N);
	
	while(N>=i)
	{
		if(i%2 != 0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}
