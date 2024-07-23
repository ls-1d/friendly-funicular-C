#include <stdio.h>
#include <stdlib.h>


// work with neighbours

int hasNeighbors(int *arr, int size)
{

    int i;

    for (i = 1 ; i < size - 1 ; i++)
    {

        if (arr[i] == arr[i-1] + arr[i+1])

                return 1;

    }

    return 0;

}


int main()
{

    int result;
    int grades[] = {1,4,7,3,2};
    result = hasNeighbors(grades,5);
    printf("%d\n", result);

    return 0;

}

