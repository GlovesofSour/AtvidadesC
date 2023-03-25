/*2. Faça um programa que leia dois números e mostre o maior deles.Se, 
por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.*/

#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O numero %d eh  maior do que o numero %d", n1, n2);
    }
    if(n2 > n1){
        printf("O numero %d eh maior do que o numero %d", n2, n1);
    }
    if(n1 = n2){
        printf("Numeros iguais");
    }

    return 0;
}