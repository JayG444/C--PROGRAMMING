#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("Enter the Number :");
    scanf("%d", &num);

    ptr = &num;

    printf("Your given number :%d", *ptr);
    printf("\nAdress of Your given number :%lu", ptr);
}