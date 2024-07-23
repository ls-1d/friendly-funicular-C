#include <stdio.h>
#define SIZE 5

void printArr(int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swapArrayON(int *arr1, int *arr2)
{
    for (int i = 0; i < SIZE; i++)
    {
        swap(&arr1[i], &arr2[i]);
    }
}

int main(void)
{
    int s[] = {1, 2, 5, 6, 7, 8};
    int t[] = {2, 2, 4, 11, 17};

    printArr(s);
    printArr(t);

    swapArrayON(s, t);

    printf("after swap\n");

    printArr(s);
    printArr(t);

    return 0;
}
