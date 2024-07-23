#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;

    int grades[3]={8,9,7};
    printf("grades start at : %p \n", grades);

    printf("first element : %d\n",*grades);

    printf("first address: %p\n", &grades[0]);
    printf("second address: %p\n", &grades[1]);
    printf("third address: %p\n", &grades[2]);

    printf("grades start at : %p \n", grades+1);

}
