#include <stdio.h>

int main(){

int km;
float cg , cm;

scanf("%d" , &km );
scanf("%f" , &cg);

cm = km/cg;

printf( "%.3f km/l", cm);

return 0;

}