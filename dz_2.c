#include <stdio.h>
#include <ctype.h>

int main()
{
    int digit = 0;
    int latin = 0;
    char c;
    while ((c = getc(stdin)) != EOF)
    {
        if (isdigit(c)) digit++;
        if (isalpha(c)) latin++;
    }
    printf("Digits: %d\n", digit);
    printf("Latin symbols: %d\n", latin);
}