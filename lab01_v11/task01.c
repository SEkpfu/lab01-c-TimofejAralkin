#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C;
    printf("Введите значения точек A, B, C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    double AC = fabs(A - C);
    double BC = fabs(B - C);
    double res = AC * BC;

    printf("Произведение - %lf", res);

    return 0;

}