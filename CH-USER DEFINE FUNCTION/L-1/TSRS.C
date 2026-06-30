#include <stdio.h>

int red(int a)
{
    return a * a * a;
}
int main()
{
    printf("Cube : %d", red(4));
}