#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Russian");
	int x,y;
	printf("������� ����� ����������\n x=");
	scanf("%d",&x);
	y=(int)16*pow(x,2);
	printf("��� x=%d �������� ��������� ����� y=%d",x,y);
	
	return 0;
}
