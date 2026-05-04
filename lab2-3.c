#include <stdio.h>
#include <math.h> // Необхідно для sin(), cos() та pow()

int main() {
    int x, y, z;
    double f;

    // 1. Введення цілих значень x, y, z
    printf("Введіть ціле число x: ");
    scanf("%d", &x);
    printf("Введіть ціле число y: ");
    scanf("%d", &y);
    printf("Введіть ціле число z: "); // z є в умові, хоча у формулі не використовується
    scanf("%d", &z);

    // 2. Обчислення знаменника першого дробу для перевірки на 0
    double tern1 = x+y/ pow(x,2) + x * y + pow(y,2);
    double tern2 = sin(x) / 1 + pow (y,2);
    double tern3 = cos(y) / 1 + pow (x,2);
        // 3. Обчислення за формулою
        // Використовуємо double для високої точності
        f = tern1 + tern2 + tern3;

        // 4. Виведення результату
        printf("Результат f = %.4lf\n", f);
    
    return 0;
}