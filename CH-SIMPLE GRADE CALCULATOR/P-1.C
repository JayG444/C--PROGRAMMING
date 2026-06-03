<<<<<<< HEAD
#include <stdio.h>
main()
{
	int Marks;
	printf("Enter your score :");
	scanf("%d",&Marks);
	
	(Marks>=90 && Marks<=100)
	?printf("Your grade is A.Excellent Work!Congratulations!You are eligible for next level.")
	:(Marks>=80 && Marks<90)
	?printf("Your grade is B.Well Done!Congratulations!You are eligible for next level.")
	:(Marks>=70 && Marks<80)
	?printf("Your grade is C.Good Work!Congratulations!You are eligible for next level.")
	:(Marks>=60 && Marks<70)
	?printf("Your grade is D1.Good Effort.Congratulations!You are eligible for next level.")
	:(Marks>=50 && Marks<60)
	?printf("Your grade is D2.You Passed but you could do better!Congratulations!You are eligible for next level.")
	:(Marks>=33 && Marks<50)
	?printf("Your grade is E.Good but try harder.Congratulations!.You are eligible for next level.")
	:(Marks>=0 && Marks<33)
	?printf("Your grade is F.You Fail.Better luck, Next time.You are not eligible for next level.")
				
	: printf("Invalid Marks");
}
=======
#include <stdio.h>
main()
{
	int Marks;
	printf("Enter your score :");
	scanf("%d",&Marks);
	
	(Marks>=90 && Marks<=100)
	?printf("Your grade is A.Excellent Work!Congratulations!You are eligible for next level.")
	:(Marks>=80 && Marks<90)
	?printf("Your grade is B.Well Done!Congratulations!You are eligible for next level.")
	:(Marks>=70 && Marks<80)
	?printf("Your grade is C.Good Work!Congratulations!You are eligible for next level.")
	:(Marks>=60 && Marks<70)
	?printf("Your grade is D1.Good Effort.Congratulations!You are eligible for next level.")
	:(Marks>=50 && Marks<60)
	?printf("Your grade is D2.You Passed but you could do better!Congratulations!You are eligible for next level.")
	:(Marks>=33 && Marks<50)
	?printf("Your grade is E.Good but try harder.Congratulations!.You are eligible for next level.")
	:(Marks>=0 && Marks<33)
	?printf("Your grade is F.You Fail.Better luck, Next time.You are not eligible for next level.")
				
	: printf("Invalid Marks");
}
>>>>>>> 1c415ea1502bf302f30c9e32a22b8408561d2fb9
