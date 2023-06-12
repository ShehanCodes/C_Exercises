#include <stdio.h>

float average(int array[], int len);

int main(void)
{
    int array[] = {5,7,8,7};
    int len = sizeof(array) / sizeof(array[0]);
    float avg = average(array, len);

    printf("The average of the array: %.2f\n", avg);

    return 0;
}

float average(int array[], int len)
{
    float average = 0;
    float sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    average = sum / len;

    return average;
}