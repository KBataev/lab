#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int K;
	printf("Enter size of array: ");
	scanf("%d", &K);
	int *arr = (int*)malloc(K * sizeof(int));
	int i;
	printf("Array: ");
	for(i = 0; i < K; ++i){
		arr[i] = rand() % 10;
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	int comp;
	for(i = 0; i < K; ++i){
		if(arr[i] % 2 == 0)
		comp *= arr[i];
	}
	printf("Composition: %d\n", comp);
	
	int f, l, sum;
	for(f = 0; f < 10; ++f)
	if(arr[f] < 0) break;
	for(l = 9; l > f; --l)
	if(arr[l] < 0) break;
	for(i = f + 1; i < l; ++i)
	sum += arr[i];
	printf("Sum: %d\n", sum);
}
