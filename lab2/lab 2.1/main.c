#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int r,b,a,d;
	printf("������� ������ �����\nr=");
	scanf("%d",&r);
	printf("������� ������� ��������\nb=");
	scanf("%d",&b);
	d=(float)b*sqrt(2);
	a=2*r;
	if(a>=d) printf("�� ����� �������� r=%d, ����� �������� ������� �������� b=%d",r,b);
	 else if(a<=d) printf("�� ����� �������� r=%d, ������ �������� ������� �������� b=%d",r,b);

	
	return 0;
}
