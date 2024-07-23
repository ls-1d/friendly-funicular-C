#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Write a function that receives a string - "Alpha"
// Return a concatenated string - "AlphaAlpha"

char *strConcat(char *originalStr);

int main()
{
    char abc[] = "Alpha";
    
    printf("%s\n", strConcat(abc));

    return 0;
}

char *strConcat(char *originalStr)
{
    int i;
    char *newStr;
    int lengthOriginal = strlen(originalStr);
    
    newStr = (char*)malloc(2*lengthOriginal * sizeof(char) + 1);

    for ( i = 0; i < lengthOriginal; i++)
    {
        newStr[i] = originalStr[i];
        newStr[i + lengthOriginal] = originalStr[i];
    }
    newStr[i + lengthOriginal] = '\0';

    return newStr;
    
}