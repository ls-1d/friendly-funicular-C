#include <stdio.h>
#include <string.h>

// int string_length(char a[]);
int main(void)
{
    char name[20];
    printf("Name: ");
    scanf("%s", name);
    // int length = string_length(name);
    int length = strlen(name);

    printf("%i\n", length);
    return 0;
}

// int string_length(char a[])
// {
//     int n = 0;
//     while (a[n] != '\0')
//     {
//         n++;
//     }
//     return n;
// }