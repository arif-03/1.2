#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char string[MAX_LENGTH];
    int length, i, j, palindrome;

    // Read input string
    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);
    palindrome = 1;

    // Check if string is a palindrome
    for (i = 0, j = length - 1; i < length / 2; i++, j--)
    {
        if (string[i] != string[j])
        {
            palindrome = 0;
            break;
        }
    }

    // Print result
    if (palindrome)
    {
        printf("%s is a palindrome\n", string);
    }
    else
    {
        printf("%s is not a palindrome\n", string);
    }

    return 0;
}