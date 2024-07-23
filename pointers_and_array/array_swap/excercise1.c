#include <stdio.h>
#include <stdlib.h>

#define SIZE 5


void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;

}

void swapArrayON( int *arr1, int *arr2)
{

    int i;
    for (i = 0; i < SIZE; i++)
        swap(&arr1[i],&arr2[i]);
}

void printArr(int *arr)
{
    for (int i = 0 ; i < SIZE; i ++)
    {
        printf("%d  ", arr[i]);
        //printf("\n");

    }
    printf("\n");
}


int main()
{

    int arr1[SIZE] = {1,3,6,8,10};
    int arr2[SIZE] = {2,4,2,11,17};

    printf("before swap\n");
    printArr(arr1);
    printArr(arr2);

    swapArrayON(arr1,arr2);
    printf("after swap\n");
    printArr(arr1);
    printArr(arr2);


    return 0;

}

