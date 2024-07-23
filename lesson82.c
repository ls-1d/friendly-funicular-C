#include <stdio.h>
#include <stdlib.h>

void findMinMax(int num1, int num2, int *pMax, int *pMin)
{

    if(num1>num2)
    {
        *pMax = num1;
        *pMin = num2;
    }
    else
    {
        *pMax = num2;
        *pMin = num1;
    }

}


void main()
{

    int a = 51, b = 7;
    int min, max;

    findMinMax(a,b,&max,&min);

    printf("max = %d and min = %d \n",max,min);

}
