#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr[3];

    int numOfColuns;

    for( int i = 0; i < 3; i ++)
    {
        printf("Enter the number of columns for each row: \n");
        scanf("%d",&numOfColumns);

        arr[i] = (int*)calloc(numOfColumns, sizeof(int));

    }

    return 0;
}
