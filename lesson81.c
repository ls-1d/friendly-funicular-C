#include <stdio.h>
#include <stdlib.h>


int findMax(int num1, int num2)
{

    if (num1>num2)
        return num1;
    else
        return num2;

}


int main()
{
    int num1 = 5, num2 = 7;
    int *ptrA, *ptrB;

    printf("num1 = %d, num2 = %d \n", num1, num2);

    ptrA = &num1;
    ptrB = &num2;

    printf("Address of num1 = %p \n",ptrA);
    printf("Address of num2 = %p \n", ptrB);

    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;
    printf("num1 = %d \n",num1);
    printf("num2 = %d \n",num2);

    int c,a=6,b=7;
    c = findMax(a,b);
    printf("max is %d \n", c);


    return 0;
}


