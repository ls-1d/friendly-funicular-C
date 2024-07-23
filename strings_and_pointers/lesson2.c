#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charsArray[] = {'H','e','l','l','o','\0'}; // option 1
    char str[] = "Hello"; // option 2

    char *tempPtr;

    tempPtr = charsArray;
    tempPtr[0] = 'G';
    printf("%s\n",charsArray);
    // prints Gello

    // tempPtr = str;
    // tempPtr[0] = 'G';
    // printf("%s\n",str );
    // // prints Gello as well

    char *str2 = "Hello"; // option 3
    printf("str2 before : %s\n", str2);

    str2 = "Good - Bye";
    printf("str2 before : %s\n", str2);

    // str = "Good - Bye"; // does not work , can't change it after assignment
    // printf("str before : %s\n", str);




    return 0;
}