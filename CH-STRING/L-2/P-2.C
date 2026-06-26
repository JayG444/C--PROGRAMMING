#include <stdio.h>
#include <string.h>
main()
{
    char name[50], surname[50];
    printf("Enter your name :");
    gets(name);
    printf("Enter your surname :");
    gets(surname);
    printf("Comparison :%d", strcmp(name, surname));
    printf("\nMerge :%s", strcat(name, surname));
    printf("\nCopy :%s", strcpy(name, surname));
}