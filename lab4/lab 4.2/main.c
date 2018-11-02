#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[]={1,25,64,51,7,25,32,4,9,2};
	int j=0,i;
	for(i=0; i<10; i++){
		if(a[i]>a[i+1]){
	
			j++;
		}

	
	}
	
printf ("%d",j);	
	return 0;
}
