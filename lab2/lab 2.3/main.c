#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) {
	int a;
	setlocale(LC_ALL,"Russian");
	printf("������� ����� ������: ");
	for(;;){
	scanf("%d", &a);
	switch(a){
		case 1: case 2: case 12: printf("���� ����: ����\n������� ����� ������: ");
		break;
		case 3: case 4: case 5: printf("���� ����: �����\n������� ����� ������: ");
		break;
		case 6: case 7: case 8: printf("���� ����: ����\n������� ����� ������: ");
		break;
		case 9: case 10: case 11: printf("���� ����: �����\n������� ����� ������: ");
		break;
		default: printf("������)) ������ ����. �������� ���!\n������� ����� ������: ");
	}
}
	return 0;
}
