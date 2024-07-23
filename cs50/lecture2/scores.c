#include <stdio.h>

int main(void)
{
    int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;

    for (int i = 0; i < 3; i++)
    {
        int c;
        printf("Scores: ");
        scanf("%d", &c);
        scores[i] = c;
    }

    printf("average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
    return 0;
}