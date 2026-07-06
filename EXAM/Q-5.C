#include<stdio.h>

main()
{
    for (int i = 10; i >= 6;i--)
    {
        for (int s = 5; s<=i;s++)
        {
            printf(" ");
        }
        for (int j = i; j<=10;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}