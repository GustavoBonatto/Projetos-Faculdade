#include <stdio.h>
#include <math.h>

//Gustavo Araujo Azevedo Bonatto, RA: 22506599

int main(){

float a , b, c , delta , r1 , r2;

scanf("%f" , &a);
scanf("%f" , &b);
scanf("%f" , &c);
delta = b*b-(4*a*c);

if (delta>0){

    r1 = (-b+sqrt(delta))/(2*a);
    r2 = (-b-sqrt(delta))/(2*a);

    printf("R1 = %.5f\n" , r1);
    printf("R2 = %.5f\n" , r2);
} else if(delta==0){

    r1 = -b/(2*a);
    r2 = r1;
    printf("R1 e R2 = %.5f\n", r1);

} else{

    printf("Impossivel calcular");

}

return 0;

}