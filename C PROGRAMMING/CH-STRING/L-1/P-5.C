#include <stdio.h>
main()
{
    char name[50];
    printf("Enter your Name: ");
    scanf("%[^\n]",&name);
    for (int i = 0; i < 1; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;  
        }
    }

    printf("Title case of your Name is: %s", name);
}