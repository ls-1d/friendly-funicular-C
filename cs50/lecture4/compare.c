#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "Hi!";
    char *t = "Hi!";

    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}