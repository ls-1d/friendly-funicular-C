#include <stdio.h>

// find sum of elements in the array

// int sumArray(int arr[], int size)
// {
//     int i, sum = 0;
//     for (i = 0; i < size; i++)
//     {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main(void)
// {
//     int grades[3] = {73, 72, 33};
//     float result;
//     result = sumArray(grades, 3);
//     printf("sum: %f\n", result);
// }

// using pointers

int sumArray(int *ptr, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + ptr[i];
    }
    return sum;
}

int main(void)
{
    int grades[3] = {73, 72, 33};
    int result;

    result = sumArray(grades, 3);

    printf("Sum: %i\n", result);

    return 0;
}