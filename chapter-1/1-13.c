#include <stdio.h>

#define HISTOGRAM_LENGTH 10

main()
{

    int histogram[HISTOGRAM_LENGTH];

    int i;
    for (i = 0; i < HISTOGRAM_LENGTH; i++)
    {
        histogram[i] = 0;
    }

    int word_len = 0;
    char c;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\n' && c != '\t')
        {
            ++word_len;
        }
        else
        {
            ++histogram[word_len];
            word_len = 0;
        }
    }

    int k;

    for (i = 0; i < HISTOGRAM_LENGTH; i++)
    {
        printf("Len: %d | ", i);
        for (k = 0; k < histogram[i]; k++)
        {
            printf("=");
        }
        printf("\n");
    }
}