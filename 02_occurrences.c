// How to count the occurances of a value in an array 
#include <stdio.h>

int main()
{
    int array[] = {1,4,6,7,9,0,7,6,7,4,9};
    int len = sizeof(array) / sizeof(array[0]);
    int count = 0;
    int to_find = 7;

    for (int i = 0; i < len; i++)
    {
        if (array[i] == to_find){
            count++;
        }
    }
    printf("The number of %d's in the array: %d\n", to_find, count);
    return 0;
}