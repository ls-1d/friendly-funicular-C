#include <stdio.h>
#include <stdlib.h>

void ageFunc(int age)
{
    printf("Your age is %d\n", age);
}

int main()
{

    void (*pf)(int); // pointer to a funcion just got created

    pf = &ageFunc; // we don't make a function call
    // printf("the address of the function &ageFunc is : %p\n", pf);
    // pf = ageFunc; // same here that's not a function call
    // printf("the address of the function ageFunc is : %p\n", pf);

    // (pf)(8); // calling the function through the pointer function

    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    // ageFunc(age); // function call it is

    (pf)(age);

    printf("Hello, World!\n");
    return 0;
}