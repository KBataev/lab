#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Russian");
	int r,b,a,d;
	printf("¬ведите радиус круга\nr=");
	scanf("%d",&r);
	printf("¬ведите сторону квадрата\nb=");
	scanf("%d",&b);
	d=(float)b*sqrt(2);
	a=2*r;
	if(a>=d) printf("»з круга радиусом r=%d, ћќ∆Ќќ вырезать квадрат стороной b=%d",r,b);
	 else if(a<=d) printf("»з круга радиусом r=%d, Ќ≈Ћ№«я вырезать квадрат стороной b=%d",r,b);

	
	return 0;
}
