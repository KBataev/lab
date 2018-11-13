#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
void main(void){
  int i, j, nom_str, *a, k=0;
setlocale (LC_ALL, "russian");  
for (i=0; i<3; i++)
        for (j=0; j<4; j++)
        {
            printf("Введите элемент матрицы [%d,%d] \n", i+1, j+1);
            scanf("%d", a+i*4+j);
        }
 
for (i=0; i<3; i++)
{
        for (j=0; j<4; j++)
        {
            printf("%d\t ", *(a+i*4+j));
        }
            printf("\n");
 
}
 
    
    for (i=0;i<3;i++)
        {for (j=0;j<4;j++)
    {
        if(*(a+i*4+j)<0)
        {
            if(j==0) k=1; 
            else k++;
            if(k==4) {nom_str=i; printf("Номер строки с отрицательными элементами %d\n", nom_str+1);break;}}
        
    }}
int t=0;
t=*(a+nom_str*4+0);
    for (i=0; i<3; i++)
{
        for (j=0; j<4; j++)
            *(a+i*4+j)*=t;}
    for (i=0; i<3; i++)
{
        for (j=0; j<4; j++)
        {
            printf("%d\t ", *(a+i*4+j));
        }
            printf("\n");
            
    }
    free(a);
    getch();
}
