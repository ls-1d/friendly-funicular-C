#include <stdio.h>

int checkNeighbours(int *pArr, int size)
{

    for (int i = 1; i < size - 1; i++)
    {
        if (pArr[i - 1] + pArr[i + 1] == pArr[i])
        {
            return 1;
        }

        // printf(">> %i\n", pArr[i]);
    }

    return 0;
}

int main(void)
{
    int s[] = {1, 4, 7, 3, 2};
    int t[] = {1, 4, 1, 4, 2};

    int result;
    result = checkNeighbours(t, 5);

    printf("Result: %i\n", result);

    return 0;
}
