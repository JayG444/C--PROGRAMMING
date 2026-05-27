#include<stdio.h>
main()
{
	float x , y , z ,a = (x+y+z)/3;
	printf("Enter the Marks of Maths :");
	scanf("%f",&x);
	printf("Enter the Marks of Social Science :");
	scanf("%f",&y);
	printf("Enter the Marks of Science :");
	scanf("%f",&z);
	
	printf("Average Marks :%.2f.\n",a = (x+y+z)/3);
	
	
	if(a>=90 && a<=100)
	{
		printf("Your Grade is A1.");
	}
	else if(a>=80 && a<90)
	{
		printf("Your Grade is A2.");	
	}
	else if(a>=70 && a<80)
	{
		printf("Your Grade is B1.");	
	}
	else if(a>=60 && a<70)
	{
		printf("Your Grade is B2");	
	}
	else if(a>=50 && a<60)
	{
		printf("Your Grade is C1");	
	}
	else if(a>=40 && a<50)
	{
		printf("Your Grade is C2");	
	}
	else if(a>=33 && a<40)
	{
		printf("Your Grade is D1");	
	}
	else
	{
		printf("Better luck , Next time.");	
	}
	
}
