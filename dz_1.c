#include <stdio.h>

int main()
{
    double a;
    double b;
    double c;
    scanf_s("%lf", &a);
    scanf_s("%lf", &b);
    scanf_s("%lf", &c);
    if (a*a + b*b == c*c)
    {
        printf("True");
    }
    else if (a*a + c*c == b*b)
    {
        printf("True");
    }
    else if (c*c + b*b == a*a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}