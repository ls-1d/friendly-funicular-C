#include <stdio.h>

int checkIsSorted(int *pArr, int size, int *isReallySorted)
{
    *isReallySorted = 1;

    for (int i = 1; i < size; i++)
    {
        // printf(">>> %i\n", pArr[i]);

        if (pArr[i] <= pArr[i - 1])
            *isReallySorted = 0;
        if (pArr[i] < pArr[i - 1])
            return 0;
    }

    return 1;
}

int main(void)
{
    int s[] = {1, 2, 5, 7, 10}; // R - 1, P - 1
    int t[] = {1, 2, 2, 5, 10}; // R - 1, P - 0
    int u[] = {1, 2, 5, 3, 10}; // R - 0, P - 0

    int res;
    int isReallySorted;

    res = checkIsSorted(s, 5, &isReallySorted);

    printf("Returned Value: %i\n", res);
    printf("isReallySortedFlag: %i\n", isReallySorted);

    return 0;
}
