#include <stdio.h>

int main()
{
    char c;
    printf("Enter any character:\n");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("The character is a upper case letter.\n");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("The character is a lower case letter.\n");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is a special symbol.\n");
    }

    return 0;
}