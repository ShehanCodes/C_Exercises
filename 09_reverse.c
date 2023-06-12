#include <stdio.h>
#include <string.h>

int main()
{
    char array[] = "racecar";
    int len = strlen(array);
    char reverseString[len + 1];

    for (int i = 0; i < len; i++)
    {
        reverseString[i] = array[len - 1 - i];
    }
    reverseString[len] = '\0';

    printf("The oringinal string: %s\n", array);
    printf("The reversed string: %s\n", reverseString);

    int result = strcmp(array, reverseString);

    if (result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    
    return 0;
}