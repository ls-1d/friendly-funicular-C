#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericSwap(void* a, void* b, int size)
{

    // size - specifies the number of bytes
    void* tempMemory = malloc(size);

    // Memory copy function
    // void * memcpy(void *dest, const void * src, size_t num)

    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);

    free(tempMemory);

}

int main()
{

//    int a = 10;
//    void *ptr = &a;

//    // printf("%d",*ptr); // this won't work

//    printf("%d \n ",*(int*)ptr); // explicit type casting is required

    int num1 = 5, num2 = 7;
    double avg1 =  90.5, avg2 = 89.7;

    genericSwap(&avg1,&avg2,sizeof(double));
    genericSwap(&num1,&num2,sizeof(int));

    printf("%f, %f \n", avg1,avg2);
    printf("%d, %d \n", num1,num2);


    return 0;


}

