#include <stdio.h>
#include <math.h>
// nome: Gustavo Araujo Azevedo Bonatto, Ra: 22506599
int main(){

float s, ns, reajuste , v; 
scanf("%f", &s);


if(s>=0 ){
    reajuste = 0.15;
    v= s* reajuste;
    ns = s+v;

    printf("Novo salario: %.2f\n", ns);
    printf("Reajuste ganho: %.2f\n", v);
    printf("Em percentual: %.2f\n", reajuste);
}else if(s>400.00){
        reajuste = 0.12;
        v= s* reajuste;
        ns = s+v;
    
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", v);
        printf("Em percentual: %.2f %\n", reajuste);
    }else if(s>800.00){
        reajuste = 0.10;
        v= s* reajuste;
        ns = s+v;
    
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", v);
        printf("Em percentual: %.2f %\n", reajuste);
        
    }else if(s>1200){
        reajuste = 0.07;
        v= s* reajuste;
        ns = s+v;
    
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", v);
        printf("Em percentual: %.2f %\n", reajuste);
    }else if(s>2000){
        reajuste = 0.04;
        v= s* reajuste;
        ns = s+v;
    
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", v);
        printf("Em percentual: %.2f %\n", reajuste);

    }



}