#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
	int a;
	setlocale(LC_ALL,"Russian");
	printf("Введите число месяца: ");
	for(;;){
	scanf("%d", &a);
	switch(a){
		case 1: case 2: case 12: printf("Пора года: Зима\nВведите число месяца: ");
		break;
		case 3: case 4: case 5: printf("Пора года: Весна\nВведите число месяца: ");
		break;
		case 6: case 7: case 8: printf("Пора года: Лето\nВведите число месяца: ");
		break;
		case 9: case 10: case 11: printf("Пора года: Осень\nВведите число месяца: ");
		break;
		default: printf("Хитрец)) Такого нету. Попробуй ещё!\nВведите число месяца: ");
	}
}
	return 0;
}
