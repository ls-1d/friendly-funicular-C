#include <stdio.h>
#include <stdlib.h>

int *createNoDuplexArray(int *sourceArray, int size)
{
  int i, j = 0;
  int count = 1;
  int *noDuplexArray;

  for (i = 0; i < size - 1;)
  {
    if (sourceArray[i] != sourceArray[i + 1])
      count++;
  }

  noDuplexArray = (int *)malloc(count * sizeof(int));

  for (i = 0; i < size - 1; i++)
    if (sourceArray[i] != sourceArray[i + 1])
    {
      noDuplexArray[j] = sourceArray[i];
      j++;
    }
  noDuplexArray[j] = sourceArray[i];

  return noDuplexArray;
}

void printArray(int *arr, int size)
{

  for (int i = 0; i < size; i++)
    printf("%d", arr[i]);
  printf("\n");
}

int main()
{
  int originalArray[] = {1, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12};

  int *newArr;

  printArray(originalArray, 11);

  newArr = createNoDuplexArray(originalArray, 11);
  printArray(newArr, 7);

  return 0;
}
/// this program does not work
