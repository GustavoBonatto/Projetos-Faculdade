#include <stdio.h>
#include <math.h>
// Gustavo Araujo Azevedo Bonatto, Ra: 22506599
int main(){

float n1, n2 ,n3 ,n4, n5 , media, m2;
scanf("%f", &n1);
scanf("%f", &n2);
scanf("%f", &n3);
scanf("%f", &n4);

n1=n1*2;
n2=n2*3;
n3=n3*4;

media = (n1+n2+n3+n4)/10;
printf("Media: %.1f\n", media);

if(media>=7){
    printf("Aluno aprovado");
}else if(media<=4.9){
    printf("aluno reprovado");
}else if (media>=5){
    printf("aluno em exame\n");
    printf("nota do exame:");
    scanf("%f", &n5);
    m2=(n5+media)/2;
    if(m2>=5){
        printf("aluno aprovado\n");
        printf("Final de media: %.1f\n",m2);
    }else{
        printf("Aluno reprovado");
    }   
}
return 0;
}