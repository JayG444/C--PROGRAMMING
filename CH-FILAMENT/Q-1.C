#include <stdio.h>
main()
{
    char str[50];
    int i, j, z = 1;
    printf("Enter any String: ");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    for (j = 0; j < i; j++)
    {
        if (str[j] != str[i - j - 1])
        {
            z = 0;
            break;
        }
    }
    if (z == 1)
        printf("The given string is Palindrome.");
    else
        printf("The given string is not Palindrome.");
    printf("\n");
    for (int x = 0; x < i; x++)
    {
        int freq = 1;

        for (int j = x + 1; j < i; j++)
        {
            if (str[x] == str[j])
            {
                freq++;
                str[j] = '\0';
            }
        }
        if (str[x] != '\0')
        {
            printf("%c => %d\n", str[x], freq);
        }
    }
}