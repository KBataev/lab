#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int i,j,k,n;
	int a[5][5];
	
	for(i=0;i<5;i++){
		for (j=0;j<5;j++)
			{
			a[i][j]=-5+rand()%20;
		}
		
	}
	printf("Matrix\n");
	
	for(i=0;i<5;i++){
		printf("\n");
		
		for(j=0;j<5;j++){
			
			printf("%d ",a[i][j]);//матрица
		}
	}  
}
