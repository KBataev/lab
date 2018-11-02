#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int t,i,k,N;
    int X[6]={2,4,3,6,5,8};
	
	for (i=0; i < 6/2; i++)
	{ t = X[i];X[i]= X[6-i-1]; X[6-i-1]= t;}
	
	for (k=0;k<6;k++)
	printf("%d ",X[k]);
	printf("\n");
	
}
