#include <stdio.h>

int loop(int i)
{
    if (i <= 10)
    {
        printf("%d\t", i);
        loop(i + 1);
    }
}
int main()
{
    loop(1);
}