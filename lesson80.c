#include <stdio.h>
#include <stdlib.h>

int main(){

    int grade1=80, grade2=100;

    printf("grade1 value = %d\n", grade1);
    printf("grade1 address = %p\n", &grade1);

    printf("grade2 value = %d\n", grade2);
    printf("grade2 address = %p\n", &grade2);

    return 0;
}
