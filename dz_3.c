#include <stdio.h>

int main()
{
    printf("\n    TABLE OF SQUARES OF NATURAL NUMBERS FROM 1 TO 9\n");
    printf("");
    for (int i = 0; i < 53; i++)
    {
        printf("_");
    }
    printf("\n|t|");
    for (int i = 0; i < 49; i++)
    {
        printf(" ");
    }
    printf("|");
    printf("\n|e|            units");
    for (int i = 0; i < 32; i++)
    {
        printf(" ");
    }
    printf("|");
    printf("\n|n|");
    for (int i = 0; i < 49; i++)
    {
        printf("_");
    }
    printf("|");
    printf("\n|t|");
    for (int i = 0; i < 49; i++)
    {
        if (i%5 == 4) printf("|");
        else printf(" ");
    }
    printf("|\n|h|");
    for (int i = 0; i < 10; i++)
    {
        printf(" ");
        printf("%d", i);
        printf("  |");
    }
    printf("\n|_|");
        for (int k = 0; k < 49; k++)
        {
            if (k%5 == 4) printf("|");
            else printf("_");
        }
    printf("|\n");
    for (int i = 1; i<10; i++)
    {
        printf("|");
        printf("%d", i);
        printf("|");
        for (int j = 0; j<10; j++)
        {
            int num = i*10+j;
            printf("%d", (num)*(num));
            if (num*num < 1000) printf(" ");
            printf("|");
        }
        printf("\n|_|");
        for (int k = 0; k < 49; k++)
        {
            if (k%5 == 4) printf("|");
            else printf("_");
        }
        printf("|\n");
    }
}