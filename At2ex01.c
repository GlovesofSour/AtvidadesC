/*1. Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("O numero %d eh o maior numero", n1);
    }
    if(n2 > n1){
        printf("O numero %d eh o maior numero", n2);
    }

    return 0;
}