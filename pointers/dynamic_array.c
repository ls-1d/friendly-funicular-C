#include <stdio.h>
#include <stdlib.h>

void displayArray(int *ptr, int size)
{
    printf("values of array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", ptr[i]);
    printf("\n");
}

int *generateArray(int size)
{
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    printf("Enter values of array\n");
    // for (int i = 0; i < size; i++)
    //     scanf("%d", &arr[i]);

    return arr;
}

int main(void)
{
    int *s;
    int arraySize;

    printf("array size: ");
    scanf("%d", &arraySize);

    s = generateArray(arraySize);
    displayArray(s, arraySize);
    free(s);

    return 0;
}