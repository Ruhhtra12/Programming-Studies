#include <stdio.h>
#define VALOR 10.5; //Define a constante VALOR
int main(){ //Inicializa o programa
float salario,horas; // Define um valor com casas decimais
printf("Quantas horas trabalhadas?");
scanf("%f", &horas);
salario = horas * VALOR;
printf("Seu salário será de : %0.2f\n", salario);
return 0;

}
