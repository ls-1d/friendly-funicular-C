#include <stdio.h>

main()
{
    long c = 0;
    long *nc;
    nc =  &c;

    while (getchar() != EOF)
    {
        ++*nc;
    }
    printf("count: %.1ld\n", *nc);
}

