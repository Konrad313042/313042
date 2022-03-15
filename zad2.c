#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define STEPS 2

void main()
{
    char glontab[SIZE] = {'A'};
    char *glon = glontab;
    char glontab2[SIZE] = {'A'};
    char *glon2 = glontab2;

    for (int i=0; i <= STEPS; i++)
    {
        while (*glon != '\0')
        {
            if (*glon == 'A')
            {
                *glon2 = 'A';
                glon2++;
                *glon2 = 'B';
                glon++;
                glon2++;
            }
            else
            {
                *glon2 = 'A';
                printf("%c \n", *glon);
                glon2++;

                glon++;
            }
        }
        glon = glontab2;
        glon2 = glontab;
    }

    glon = glontab;
    glon2 = glontab2;

    while (*glon != '\0')
    {
        printf("%c", *glon++);
    }
    printf ("\n");

        while (*glon2 != '\0')
    {
        printf("%c", *glon2++);
    }

    return 0;
}
