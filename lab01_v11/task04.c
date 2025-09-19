#include <stdio.h>

int main() {

    double x, y;

    printf("Введите х \n");
    scanf("%lf", &x);

    y = ((((((2*x - 1)*x + 3)*x - 1)*x + 4)*x - 1)*x + 5);

    printf("y = %lf", y);

    return 0;
}