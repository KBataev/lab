#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#include <locale.h> 

int main() 
{ 
srand(time(NULL)); 
const int R = 4, C = 4; 
int matrix[R][C]; 
int i, j; 
printf("Matrix\n"); 
int sum[C]; 
for(i = 0; i < R; ++i){ 
for(j = 0; j < C; ++j){ 
matrix[i][j] = rand() % R + C; 
printf("%d ", matrix[i][j]); 
if(matrix[i][j] > 0) 
sum[i] += matrix[i][j]; 
} 
printf("Sum: %d\n", sum[i]); 
} 

for(i = 0; i < C - 1; ++i){ 
for(j = i + 1; j < C; ++j){ 
if(sum[i] > sum[j]){ 
int buf = sum[i]; 
sum[i] = sum[j]; 
sum[j]= buf; 
int m; 
for(m = 0; m < C; ++m){ 
buf = matrix[i][m]; 
matrix[i][m] = matrix[j][m]; 
matrix[j][m] = buf; 
} 
} 
} 
} 
printf("\n"); 

for(i = 0; i < R; ++i){ 
for(j = 0; j < C; ++j) 
printf("%d ", matrix[i][j]); 
printf("Sum: %d\n", sum[i]); 
} 

}

