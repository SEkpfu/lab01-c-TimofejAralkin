#include <stdio.h>

int main() {
    double a, b, c;
    printf("Введите три числа: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double sum = a + b + c;

    (sum < 0)
        ? printf("Наименьшее из первых двух: %lf\n", (a < b ? a : b))
        : printf("Квадраты: %lf %lf %lf\n", a*a, b*b, c*c);

    return 0;
}