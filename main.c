#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Purpose: To see how fast you can finish typing the entire alphabet perfectly
// Created by Julian Meyn 10/2/2016

void error(char input[27], char alphabet[27], int inputLength);

void main()
{
    time_t beginningTime = time(NULL);
    char   alphabet[27]  = "abcdefghijklmnopqrstuvwxyz";
    char   input   [27];

    printf("Type the entire alphabet and hit enter after completing:\n- ");
    scanf("%s", input);

    if (strcmp(alphabet, input) == 0)
    {
        //Current Time - Beginning Time = Time taken to complete
        printf("Correct!\nTime taken: %d Seconds", (time(NULL) - beginningTime));
    }
    else
    {
        error(input, alphabet, sizeof(input));

        printf("\nTime taken: %d seconds", (time(NULL) - beginningTime));
    }
}
void error(char input[27], char alphabet[27], int inputLength)
{
    int increment = 0;

    printf("Incorrect, got '");

    for (; increment < inputLenght; increment++)
    {
        if (input[increment] != alphabet[increment])
        {
            printf("%c", *(input + increment));
            break;
        }
    }

    printf("', expected '%c'.", *(alphabet + increment));

    return;
}
