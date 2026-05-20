#include<stdio.h>
#define a 12
#define b 6
#define p printf

main()
{
	p("Addition of %d and %d is %d\n" , a , b, a+b);
	p("Subtraction of %d and %d is %d\n" , a , b , a-b);
	p("Multiplication of %d and %d is %d\n" , a , b , a*b);
	p("Division of %d and %d is %d\n" , a , b , a/b);
	p("Modulo of %d and %d is %d\n" , a , b , a%b);
	
	p("%d + %d=%d\n" , a , b , a+b);
	p("%d - %d=%d\n" , a , b , a-b);
	p("%d * %d=%d\n" , a , b , a*b);
	p("%d / %d=%d\n" , a , b , a/b);
	p("%d %% %d=%d\n" , a , b , a%b);
}
