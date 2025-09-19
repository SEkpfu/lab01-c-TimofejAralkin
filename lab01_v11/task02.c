#include <stdio.h>

int main() {

    int n, d;
    printf("Введите числитель и знаменатель:");
    scanf("%d %d", &n, &d);

    int w = n / d;
    int rem = n % d;

    printf("Результат: %d %d/%d", w, rem, d);

    return 0;

}