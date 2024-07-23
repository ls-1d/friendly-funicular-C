#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *arr[3];

    for(int i = 0; i < 5; i++)
    {

        arr[i] = (int*)calloc(3, sizeof(int));

    }

    arr[1][2] = 30;

    printf("arr[1][2] = %d\n", arr[1][2]);

    return 0;


}

