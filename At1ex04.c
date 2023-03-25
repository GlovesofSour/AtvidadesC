/*4. Escreva um algoritmo para ler as dimensões de um retângulo 
(base e altura), calcular e escrever a área do retângulo.*/

#include <stdio.h>

int main(){

    float base;
    float altura;
    float area;

    printf("Digite a base do retangulo em centimetros: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo em centimetros: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("a area do retangulo eh de %.2f centimetros", area);

    return 0;
}