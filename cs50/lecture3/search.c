#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    char t[30];
    printf("Enter string; ");
    scanf("%s", t);

    for ( int i = 0; i < 6; i++)
    {
        if (strcmp(s[i], t) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;

}
