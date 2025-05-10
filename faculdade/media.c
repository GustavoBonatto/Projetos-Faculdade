#include <stdio.h> 
int main(){

    float A , B ,C , medA, medB , medC , media;
    printf("nota 1: ");
    scanf("%f", &A);
    medA = A*2;
    printf("nota 2: ");
    scanf("%f", &B);
    medB= B*3;
    printf("nota 3: ");
    scanf("%f" , &C);
    medC= C*5;
    media = (medA + medB + medC)/10;
    printf( "MEDIA= %.1f\n" , media);

    return 0;
    

}