#include <stdio.h>
#include <stdlib.h>

int input(char *str, int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if ( i < n )
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main()
{
    char *str;
    str = (char*)malloc(5 * sizeof(char));
    int n = input(str, 5);

    printf("%d %s \n", n, str);
    return 0;
}
