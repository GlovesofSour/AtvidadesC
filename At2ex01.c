}/*1. Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>

int main(){

    int n1, n2;

    printf("-----------------------------\n");
    printf("Vericador de maior numero\n");
    printf("-----------------------------\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("-----------------------------\n");

    if(n1 > n2){
        printf("O numero %d eh o maior numero\n", n1);
    }else{
        printf("O numero %d eh o maior numero\n", n2);
    }
    printf("-----------------------------\n");

    return 0;
}
