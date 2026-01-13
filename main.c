#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;

    printf("--- Лабораторна робота №2 (Частина 1) ---\n");
    printf("Варіант №12. Обчислення розгалуженої функції.\n");
    printf("Введіть значення x: ");
    scanf("%lf", &x);


    if (x >= 0 && x < 4) {

        y = (2 * x - 1) / (3 * x + 1);
    }
    else if (x >= 4 && x < 12) {

        y = 5 * x + 10;
    }
    else if (x >= 15 && x < 55) {

        y = (2 * x) / sqrt(-x + 2 * pow(x, 2)) - 3 * pow(x, 2);
    }
    else {

        y = 2 - (x / 10.0);
    }

    printf("----------------------------------------\n");
    printf("Для x = %.4f результат y = %.4f\n", x, y);
    printf("----------------------------------------\n");

    return 0;
}
