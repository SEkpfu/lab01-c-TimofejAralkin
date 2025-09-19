#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    double z1, z2;

    printf("Введите x и y: ");
    scanf("%lf %lf", &x, &y);

    z1 = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x;

    z2 = pow(2, -x) - cos(x) + sin(2 * x * y);

    printf("%+.5f\n", z1);
    printf("%+e\n", z2);

    return 0;
}