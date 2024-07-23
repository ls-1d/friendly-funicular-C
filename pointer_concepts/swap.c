#include <stdio.h>
#include <stdlib.h>

// swap by reference - c language



void swap(int *ptr1, int *ptr2)
{

    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;


}




int main()
{

    int num1, num2;

    printf("enter num1: ");
    scanf("%d", &num1);

    printf("enter num2: ");
    scanf("%d", &num2);

    printf("before swap, num1 : %d, num2: %d\n", num1, num2);

    //
    swap(&num1,&num2);

    printf("after swap, num1 : %d, num2: %d\n", num1, num2);


    return 0;

}
