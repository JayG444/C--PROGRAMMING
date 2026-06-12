#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5; i++)
	{
		for(j=i; j<=5; j++)
		{
			if(j %2 ==0)
			{
				printf("%c\t",j+96);
			}
			else
			{
				printf("%d\t",j);
			}
		}printf("\n");
	}
}

