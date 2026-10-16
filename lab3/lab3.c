#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>

int task1() {
    int i;
    float f;
    double d;
    char c;

    puts("\nЗадание 1:");
    printf("Введите целое число (int): ");
    scanf("%d", &i);
    printf("Введите вещественное число (float): ");
    scanf("%f", &f);
    printf("Введите вещественное число (double): ");
    scanf("%lf", &d);
    printf("Введите символ (char): ");
    scanf(" %c", &c);

    printf("\nВы ввели:\n");
    printf("int: %d\n", i);
    printf("float: %.2f\n", f);
    printf("double: %.2lf\n", d);
    printf("char: %c\n", c);
    return 0;
}

int task2() {
    puts("\n=== Задание 2: Деление и дюймы ===");
    int a = 5, b = 2;
    
    // Неявное деление 
    float implicit = a / b; 
    // Явное деление 
    float explicit = (float)a / b; 

    printf("Неявное деление (a / b): %.2f\n", implicit);
    printf("Явное деление ((float)a / b): %.2f\n", explicit);
    printf("Разница: явное деление сохраняет дробную часть.\n");


    int dym;
    float result;
    puts("\nВведите число дюймов для перевода в сантиметры:");
    scanf("%d", &dym);
    result = 2.54 * dym;
    printf("%d дюймов – это %.2f см\n", dym, result);
    return 0;
}

int task3() {
    int num3, num4;
    puts("\nЗадание 3:");
    puts("Введите первое число:");
    scanf("%d", &num3);
    puts("Введите второе число:");
    scanf("%d", &num4);
    
    printf("___________________________________________\n");
    printf("|%9s    |%9s    |%9s    |\n", "a * b", "a + b", "a - b");
    printf("___________________________________________\n");
    printf("|%5d * %-5d|%5d + %-5d|%5d - %-5d|\n", num3, num4, num3, num4, num3, num4);
    printf("___________________________________________\n");
    printf("|%8d     |%8d     |%8d     |\n", num3*num4, num3+num4, num3-num4);
    return 0;
}

int main() {
    SetConsoleOutputCP(65001);
    task1();
    task2();
    task3();
    return 0;
}
