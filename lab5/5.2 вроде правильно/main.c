#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	const int R = 10, C = 12;
	int matrix[R][C];
	int i, j;
	printf("Matrix:\n");
	
	for(i = 0; i < R; ++i){
		int maxR = 0;
		for(j = 0; j < C; ++j){
			matrix[i][j] = rand() % 10;
			printf("%d ", matrix[i][j]);
			if(matrix[i][j] > maxR)
			maxR = matrix[i][j];
		}
		printf("MaxR: %d\n", maxR);
	}
	printf("MinC:\n");
	for(i = 0; i < R; ++i){
		int minC = 10;
		for(j = 0; j < C; ++j){
			if((matrix[j][i]<matrix[j+1][i])&&(matrix[j][i]<minC))
			minC = matrix[j][i];
		}
		printf("%d ", minC);
	}
	if(matrix[i][j]=maxR || matrix[i][j]=minC)
	printf("%d",matrix[i][j]);
}
