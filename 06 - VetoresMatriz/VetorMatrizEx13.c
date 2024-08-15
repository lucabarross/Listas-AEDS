#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *vetor = malloc(27*sizeof(char));

    vetor = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < strlen(vetor); i++)
    {
        printf("%c ", *(vetor + i));
    }

    return 0;
}