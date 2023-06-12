#include <stdio.h>

int sum(int array[], int len);

int main (void)
{
    int array[] = {2,4,5,7};
    int len = sizeof(array)/sizeof(array[0]);

    int total = sum(array, len);
    
    printf("Sum of the array is: %d\n", total);
    return 0;
}

int sum(int array[], int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}