#include <stdio.h>
int main(){

char nome;
float salariob , preco_vendas , bonus , salario;
printf("digite seu nome: ");
scanf("%s", &nome);
printf("qual o seu salario? ");
scanf("%f", &salariob);
printf("quantas foram as suas vendas? ");
scanf("%f", &preco_vendas);
bonus= (preco_vendas*0.15);
salario= salariob+bonus;
printf("TOTAL= R$ %.2f\n ", salario);

return 0;
}
// nome: gustavo Araujo Azevedo Bonatto, Ra: 22506599