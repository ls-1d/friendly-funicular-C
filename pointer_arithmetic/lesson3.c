#include <stdio.h>
#include <stdlib.h>

void main()
{
    // size of array
    int arr[3];
    printf("size of arr %d\n", sizeof(arr)); // printed : 12
    double brr[3];
    printf("size of arr %d\n", sizeof(brr));  // printed: 24

    // size of pointers
    int *ptr1;
    int grade1 = 80;
    ptr1 = &grade1;
    printf("size of ptr1 %d\n", sizeof(ptr1)); // printed : 8

    double *ptr2;
    double grade2 = 80;
    ptr2 = &grade2;
    printf("size of ptr2 %d\n", sizeof(ptr2)); // printed : 8

    int crr[6];
    printf("address of crr: %p\n", crr);
    printf("size of crr : %d\n", sizeof(crr));

    int *cPtr = crr;
    printf("Address of aPtr: %p\n", cPtr);
    printf("size of aPtr: %d\n", sizeof(cPtr)); // printed: 8


}


