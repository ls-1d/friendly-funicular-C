#include <stdio.h>

int main(void)
{
    // int n = 50;
    // printf("%p\n", &n);
    // int *p = &n;
    // printf("%p\n", p);
    // printf("%i\n", *p);

    char *s = "HI!";
    // printf("%s\n", s);
    // printf("%p\n", s);
    // printf("%p\n", &s[0]);
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}