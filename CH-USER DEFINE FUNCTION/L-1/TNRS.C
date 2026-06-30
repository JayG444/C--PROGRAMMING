#include <stdio.h>

int red()
{
    int a;
    printf("Enter the Number :");
    scanf("%d", &a);

    return a * a;
}

int main()
{
    printf("%d", red());
}