#include <stdio.h>
#include <string.h>
main()
{
    char name[50];
    printf("Enter your name :");
    gets(name);
    puts(name);
    printf("Length : %d", strlen(name));
    printf("\nUPPERCASE : %s", strupr(name));
    printf("\nlowercase : %s", strlwr(name));
    printf("\nReverse : %s", strrev(name));
}