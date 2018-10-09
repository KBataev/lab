#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Russian");
	int i,a,b,c; 
printf("Введите a, b, c\n");
i=0; 
scanf("%d%d%d", &a,&b,&c); 
if(a > 0) ++i; 
if(b > 0) ++i; 
if(c > 0) ++i; 
printf("Количество положительных чисел: %d", i); 
}
