#include<stdio.h>
main()
{
	int x,y;
	printf("Enter your First number:");
	scanf("%d",&x);
	printf("Enter your Second number:");
	scanf("%d",&y);
	
	while(y>=x)
	{
		if(x%4 == 0 && x<=y)
		{
			printf("%d\t",x);
		}
		x++;
	}
}
