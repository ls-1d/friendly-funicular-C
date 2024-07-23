#include <stdio.h>
#include <stdlib.h>


// int sumArray(int arr[],int size)
int sumArray(int *ptr,int size)
{
    int i, sum=0;

    for(i=0;i<size;i++)
    {

        sum = sum + ptr[i];

    }

    return sum;



}

int main()
{

    int grades[3]={5,6,7};

    int sum;

    sum = sumArray(grades,3);


    printf("%d\n",sum);

    return 0;


}

