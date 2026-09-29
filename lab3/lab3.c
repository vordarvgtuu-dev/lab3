#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h> // не работает #include <locale.h>
#define      D       2.54

int task1() {
	int num, num2, sum, raz, proz, chast, ost;

	puts("\n\nВведите число"); // 1ое число
	scanf("%d", &num);
	printf("Введено число: %d\n", num);

	puts("\nВведите число"); // 2ое число
	scanf("%d", &num2);
	printf("Введено число: %d\n", num2);

	sum = num + num2; // суммаааа
	printf("\nСумма чисел: %d\n", sum);

	raz = num - num2; // разность
	printf("Разность чисел: %d\n", raz);

	proz = num * num2; // произведение
	printf("Произведение чисел: %d\n", proz);

	chast = num / num2; // деление част
	printf("Деление частное чисел: %d\n", chast);

	ost = num % num2; // деление ост
	printf("Деление остаток чисел: %.d\n", ost);
	return 0;
}

int task2() {
	int dym;
	float result;
	puts("\nВведите число дюймов для перевода в сантиметры"); 
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов – это %.2f см", dym, result);
	return 0;
}


int task3() {
	int num3, num4, a, b, d;
	puts("Введите число"); 
	scanf("%d", &num3);
	puts("Введите число");
	scanf("%d", &num4);
	printf("___________________________________________");
	printf("\n|%9s    |%9s    |%9s    |", "a * b", "a + b", "a - b");
	printf("\n___________________________________________");
	printf("\n|%5d * %-5d|%5d + %-5d|%5d - %-5d|", num3, num4, num3, num4, num3, num4);
	printf("\n___________________________________________");
	printf("\n|%8d     |%8d     |%8d     |", num3*num4, num3+num4, num3-num4 );
	return 0;
}



int main() {
	SetConsoleOutputCP(65001);
	task3();
	task1();
	task2();
	return 0;
}
