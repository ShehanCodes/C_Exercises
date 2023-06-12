#include <stdio.h>
#include <string.h>

int main()
{
    int number;
    printf("Enter a valid number: ");
    scanf("%d", &number);

    int temp = number;
    int count = 0; 

    while(temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    int count_temp = count;
    temp = number;
    int rem;
    int mul = 1;
    int result = 0;

    while (temp != 0)
    {
        rem = temp % 10;
        while(count_temp != 0)
        {
            mul = mul * rem;
            count_temp--;
        }
        result = result + mul;
        count_temp = count;
        temp = temp / 10;
        mul = 1;
    }
    if(result == number)
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is not an Armstrong number\n", number);
    return 0;
}