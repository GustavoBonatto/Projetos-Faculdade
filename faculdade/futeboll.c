#include <stdio.h>
#include <math.h>

int main(){

int h1 , h2 , m1 , m2 , mf, hf;
scanf("%d%d%d%d", &h1, &m1,&h2,&m2);

hf= h2-h1;
mf=m2-m1;

if(mf>=0 && hf>0){
    printf(" O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hf, mf);
}
else if(mf>0 && hf>=0) {
    printf(" O JOGO DUROU %d HORA(S) E %d MINUTOS", hf, mf);
} else {
    printf("  O JOGO DUROU 24 HORA(S) E 00 MINUTOS");
}
}