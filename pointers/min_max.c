#include <stdio.h>

void minMax(int *pArr, int size, int *minValue, int *maxValue)
{
    *minValue = pArr[0];
    *maxValue = pArr[0];

    for (int i = 0; i < size; i++)
    {

        if (*minValue > pArr[i])
        {
            *minValue = pArr[i];
        }

        if (*maxValue < pArr[i])
        {
            *maxValue = pArr[i];
        }
    }
}

int main(void)
{
    int grades[] = {80, 90, 100};
    int min, max;

    minMax(grades, 3, &min, &max);

    printf("Min: %i\n", min);
    printf("Max: %i\n", max);

    return 0;
}