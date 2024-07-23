#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    int rows, columns;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    a = (int**)calloc(rows,sizeof(int));

    for(int i = 0; i < rows; i ++)
    {
        printf("Enter the number of rows for each rows");
        scanf("%d",&columns);

        a[i] = (int*)calloc(columns,sizeof(int));

    }

    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0; j < 3;j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
