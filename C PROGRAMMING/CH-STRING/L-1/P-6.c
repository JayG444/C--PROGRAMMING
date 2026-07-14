#include <stdio.h>
main()
{
    char name[50];
    printf("Enter your Name: ");
    scanf("%[^\n]", &name);

    if (name[0] >= 'a' && name[0] <= 'z')
    {
         name[0] -= 32;
    }

    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }
    printf("Title Case of your Name is : %s", name);
}