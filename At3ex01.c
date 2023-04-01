/*1. Programa que calcule a média de 5 notas de um aluno.*/

#include <stdio.h>

int main(){

    float n1,n2,n3,n4,n5, resultado;

    printf("-------------------\n");
    printf("Media de Notas\n");
    printf("-------------------\n");

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);
    printf("Digite a nota 5: ");
    scanf("%f", &n5);

    resultado = (n1+n2+n3+n4+n5)/5;
    printf("A media eh: %.2f\n", resultado);
    printf("-------------------\n");

    return 0;
}