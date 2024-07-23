#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = "hi!";

    char *t = malloc(strlen(s) + 1);

    for (int i, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
}