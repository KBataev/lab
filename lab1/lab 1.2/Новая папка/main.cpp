#include <math.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <locale.h> 


int main() { 
setlocale(LC_ALL,"Russian"); 
float x,y,z,a,b,c,d,s; 
x=-4.5; 
y=0.75*powf(10,-4); 
z=-0.845*powf(10, 2); 
a=powf(9+powf(x-y,2),(float)1/3); 
b=x*x+y*y+2; 
c=a/b; 
d=expf(fabs(x-y))*powf(tanf(z),3); 
s=(c-d); 
printf("результат выражения = %.5f",s); 
return 0; 
}
