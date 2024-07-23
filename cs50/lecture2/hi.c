#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    // printf("%c%c%c\n", c1, c2, c3);
    // printf("%i %i %i\n", c1, c2, c3);

    char s[] = "HI!";
    // printf("%c\n", s[0]);
    // printf("%c%c\n", s[0], s[1]);
    // printf("%c%c%c\n", s[0], s[1], s[2]);
    // printf("%i %i %i\n", s[0], s[1], s[2]);
    // printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

    // array of characters are called strings

    printf("%s\n", s);

    return 0;
}