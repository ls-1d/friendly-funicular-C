#include <stdio.h>
#include <stdlib.h>

void main()
{
    int grades[3] = {80,90,100};
    int *gradesPtr = grades;

    printf("grades start at : %p\n", gradesPtr);
    printf("grades start at : %p\n", gradesPtr+1);

    printf("grades start at : %p\n", &grades);
    printf("grades are %d \n", *gradesPtr);

}
