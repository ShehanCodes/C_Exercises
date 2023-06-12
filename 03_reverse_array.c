#include <stdio.h>

void reverse(int array[], int len);

int main(void)
{
    int myarray1[] = {1,2,3,4,5,6,7,8,9};
    int len1 = sizeof(myarray1)/sizeof(myarray1[0]);
    int myarray2[] = {7,6,5,4,3,2,1};
    int len2 = sizeof(myarray2)/sizeof(myarray2[0]);

    reverse(myarray1, len1);
    reverse(myarray2, len2);

    

    for (int i = 0; i < len1; i++)
    {
        printf("%d ", myarray1[i]);
    }

    printf("\n");

    for (int i = 0; i < len2; i++)
    {
        printf("%d ",myarray2[i]);
    }

    return 0;
}

void reverse(int array[], int len)
{
    int temp = 0;

    for (int i = 0; i < len/2; i++)
    {
        temp = array[i];
        array[i] = array[len - i - 1];
        array[len - i - 1] = temp;
    }
}