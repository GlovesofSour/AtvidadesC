/*6. Escreva um algoritmo para ler o salário mensal atual de um 
funcionário e o percentual de reajuste.Calcular e escrever o
valor do novo salário.*/

#include <stdio.h>

int main(){

    float salario;
    float percentual;
    float reajuste;
    float total;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);

    reajuste = salario * percentual / 100;
    total = salario + reajuste;

    printf("O novo salario com reajuste de %.2f por cento, sera de %.2f", percentual, total);

    return 0;
}