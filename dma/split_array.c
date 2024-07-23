#include <stdio.h>
#include <stdlib.h>


void printArray(int *arr, int size)
{
    int i;
    for(i = 0; i < size;i++)
        printf("%d\t",arr[i]);
    printf("\n");

}

void generateOddEvenArrays(int *sourceArray, int size)
{

    int *oddArray;
    int *evenArray;

    int evenArrayIndex = 0;
    int oddArrayIndex = 0;

    int oddArraySize = 0;
    int evenArraySize = 0;

    for(int i = 0; i < size; i++)
    {
        if(sourceArray[i] % 2 == 0)
        {
            printf("%d\n",evenArraySize);
            evenArraySize++;
        }

        else
        {
            oddArraySize++;
        }
    }

    oddArray = (int*)malloc(oddArraySize*(sizeof(int)));
    evenArray = (int*)malloc(evenArraySize*(sizeof(int)));

    for(int i = 0; i < size; i++)
    {
        if(sourceArray[i] % 2 == 0)
        {
            evenArray[evenArrayIndex] = sourceArray[i];
            evenArrayIndex++;
        }
        else
        {
            oddArray[evenArrayIndex] = sourceArray[i];
            oddArrayIndex++;
        }
    }

    printArray(oddArray, oddArraySize);
    printArray(evenArray, evenArraySize);

}

int main()
{

    int originalArray[] = {12,5,7,8,3,10,4,9};

    printArray(originalArray, 8);

    return 0;

}

