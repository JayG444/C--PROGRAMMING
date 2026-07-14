#include <stdio.h>
#include "FUNCTION.C"
int main()
{
    int size;
    printf("Enter the Number of elements :");
    size = input();

    int a[size];

    ArrayInput(size, a);

    int ans = SumofArrayElements(size, a);

    printf("\nSum of Array Elements : %d", ans);
}