#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void printArr(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void *generateArray(int size)
{
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    printf("Enter values of array \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

void swapArrayO1(void **ptr1, void **ptr2)
{
    void *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    // int s[] = {1, 2, 5, 6, 7, 8};
    // int t[] = {2, 2, 4, 11, 17};

    void *s, *t;
    int sizeArr1, sizeArr2;

    printf("size for array1: ");
    scanf("%d", &sizeArr1);
    s = generateArray(sizeArr1);

    printf("size for array2: ");
    scanf("%d", &sizeArr2);
    t = generateArray(sizeArr2);

    printf("before swap\n");
    printArr(s, sizeArr1);
    printArr(t, sizeArr2);

    swapArrayO1(&s, &t);

    printf("after swap\n");
    printArr(s, sizeArr1);
    printArr(t, sizeArr2);

    free(s);
    free(t);

    return 0;
}