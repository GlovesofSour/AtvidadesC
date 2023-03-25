/*2. Escreva um programa que pergunte qual o raio de um círculo e
imprima a sua área. */

#include <stdio.h>

int main(){

    float raio;
    float circulo;

    printf("digite o raio do circulo em centimetros: ");
    scanf("%f", &raio);

    circulo = raio* raio * 3.14;

    printf("A area do circulo eh de aproximadamente %.2f centimetros.", circulo);

    return 0;
}

