#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return (float)a / b;
}

int modulo(int a, int b)
{
    return a % b;
}

int main()
{
    int n, num1, num2;
    for (;;)
    {
        printf("\nEnter 1 for +");
        printf("\nEnter 2 for -\n");
        printf("Enter 3 for *\n");
        printf("Enter 4 for /\n");
        printf("Enter 5 for %%\n");
        printf("Enter 6 for the exit\n");
        printf("Enter your choice :");
        scanf("%d", &n);
        if (n >= 1 && n <= 5)
        {
            printf("Enter First Number :");
            scanf("%d", &num1);
            printf("Enter Second Number :");
            scanf("%d", &num2);

            switch (n)
            {
            case 1:
                printf("Addition of %d and %d is %d", num1, num2, add(num1, num2));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d", num1, num2, sub(num1, num2));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d", num1, num2, mul(num1, num2));
                break;

            case 4:
                printf("Division of %d and %d is %.2f", num1, num2, div(num1, num2));
                break;
            case 5:
                printf("Modulo of %d and %d is %d", num1, num2, modulo(num1, num2));
                break;
            }
        }
        if (n == 6)
        {
            break;
        }
    }
}