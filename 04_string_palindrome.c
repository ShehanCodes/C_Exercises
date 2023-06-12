#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]);

int main (void)
{
    char string1[] = "shehas";
    char string2[] = "racecar";
    char string3[] = "abcdcba";
    
    if (is_palindrome(string1))
        printf("%s\n is a palindrome\n",string1);
    else
        printf("%s\n Is not a palindrome\n", string1);

    if (is_palindrome(string2))
        printf("%s\n is a palindrome\n",string2);
    else
        printf("%s\n Is not a palindrome\n", string2);
    
    if (is_palindrome(string3))
        printf("%s\n is a palindrome\n",string3);
    else
        printf("%s\n Is not a palindrome\n", string3);

    return 0;
}

bool is_palindrome(char string[])
{
    int length = strlen(string);
    int middle = length / 2;
    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[length - i - 1])
            return false;
    }
    return true;
}