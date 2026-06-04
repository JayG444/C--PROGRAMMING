
#include <stdio.h>
main()
{
	int Marks;
	printf("Enter your score :");
	scanf("%d",&Marks);
	
	(Marks>=80 && Marks<=100)
	?printf("Your grade is A.")
	:(Marks>=60 && Marks<=79)
	?printf("Your grade is B.")
	:(Marks>=40 && Marks<=59)
	?printf("Your grade is C.")
	:(Marks>=33 && Marks<=39)
	?printf("Your grade is D.")
	:(Marks>=0 && Marks<=32)
	?printf("Your grade is F.")
	:printf("Invalid Marks.");
	
	switch(Marks){
		 case 80 ... 100: 
            printf("Excellent Work!"); 
            break; 
        case 60 ... 79: 
            printf("Well Done."); 
            break; 
        case 40 ... 59 : 
            printf("Good Job."); 
            break; 
        case 33 ... 39: 
            printf("You Passed but you could do Better."); 
            break; 
        case 0 ... 32: 
            printf("Sorry, you Failed."); 
            break; 
        default: 
            printf("Invalid Marks."); 
	}
	if (Marks >= 33 && Marks <= 100) {
        printf("You are eligible for the next level.");
    }
    else if(Marks>=0 && Marks <33)
	{
		printf("Please try again next time.");
	}
	else
	{ 
		printf("Invalid Marks.");
	}
}

