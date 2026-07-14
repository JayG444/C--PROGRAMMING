#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter the marks of Maths :");
    scanf("%d",&m1);
    printf("Enter the marks of English :");
    scanf("%d",&m2);
    printf("Enter the marks of S.S. :");
    scanf("%d",&m3);
    printf("Enter the marks of Computer :");
    scanf("%d",&m4);
    printf("Enter the marks of Hindi:");
    scanf("%d",&m5);


    int sum = (m1 + m2 + m3 + m4 + m5);
    printf("Average : %.2f\n", sum*0.20);
    int avg=sum * 0.20 ;
    if(avg>=90 && avg<=100)
    {
        printf("Your grade is A.");
    }
    else if(avg>=70 && avg<90)
    {
        printf("Your grade is B.");
    }
     else if(avg>=50 && avg<70)
    {
        printf("Your grade is C.");
    }
     else if(avg>=33 && avg<50)
    {
        printf("Your grade is D.");
    }
    else
    {
        printf("Your grade is E.You fail.");
    }
}