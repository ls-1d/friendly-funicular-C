#include <stdio.h>
#include <stdlib.h>

// write a function to chech if the array is really sorted, sorted on not sorted
//
//

int checkIsSorted(int *arr, int size, int *isReallySorted)
{

    int i;
    *isReallySorted = 1;

    for (i = 1; i < size; i++)
    {

        if(arr[i] <= arr[i-1])
            *isReallySorted = 0;
        if(arr[i] < arr[i-1])
            return 0;

    }

    return 1;

}



int main()
{

    int valuesArr[] = {1,2,5,7,10};
    int isReallySortedFlag;
    int result;

    result = checkIsSorted(valuesArr, 5, &isReallySortedFlag);

    if (result == 1 )
        printf("the array is Really Sorted / Sorted\n");

    else if (result == 0)
        printf("the array is not sorted at all\n");

    if (isReallySortedFlag == 1)
        printf("the array is Really Sorted\n");

    else if (isReallySortedFlag == 0)
        printf("the array is Not Really Sorted\n");


    return 0;

}

