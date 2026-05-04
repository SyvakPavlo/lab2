#include <stdio.h>

int main() {
    int num1, num2;
    
    // 1. Введення даних
    printf("Введіть перше число: ");
    scanf("%d", &num1);
    printf("Введіть друге число: ");
    scanf("%d", &num2);

    // 2. Обчислення та виведення суми
    int sum = num1 + num2;
    printf("Сума чисел: %d\n", sum);

        float division = (float)num2 / num1;
        printf("Результат ділення 2-го числа на 1-е: %.2f\n", division);

    // 4. Обчислення добутку
    int product = num1 * num2;
    printf("Добуток чисел: %d\n", product);

    return 0;
}