// finding the minimum number in an array
#include <stdio.h>

int find_min(int array[], int len);

int main(void) 
{
    int myarray1[] = {5, 9, 10, 11, 5, 4, 7, 1, 43};
    int myarray2[] = {2, 4, 6, 8,43, 7, 2, 9, 0};

    int min1 = find_min(myarray1, sizeof(myarray1) / sizeof(myarray1[0]));
    int min2 = find_min(myarray2, sizeof(myarray2) / sizeof(myarray2[0]));

    printf("The minimum number of myarray1 is %d\n", min1);
    printf("The minimum number of myarray2 is %d\n", min2);

    return 0; 
}

int find_min(int array[], int len)
{
    int minNum = array[0];

    for (int i = 0; i < len; i++) {
        if (array[i] < minNum){
            minNum = array[i];
        }     
    }
    return minNum;
}