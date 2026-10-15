#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    double x, y, z, f;

    setlocale(LC_CTYPE, "RUS");

    printf("Домашнее задание. Вариант 13\n");

    x = 17.421;
    y = 10.365e-3;
    z = 0.828e5;

    f = pow(y + cbrt(x - 1), 1.0 / 4.0) /
        (fabs(x - y) *
            (pow(sin(z), 2) + tan(z)));

    printf("x = %.3f\n", x);
    printf("y = %.6f\n", y);
    printf("z = %.3f\n", z);
    printf("f = %.5f\n", f);

    return 0;
}