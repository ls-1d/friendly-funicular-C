#include <stdio.h>

main()
{
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = upper;

    while ( fahr >= lower )
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f ------->> %10.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}
