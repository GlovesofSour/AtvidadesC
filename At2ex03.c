/*3. Faça um programa que leia um número inteiro e verifique se esse 
número é par ou ímpar.*/

#include <stdio.h>

int main(){

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("O numero %d eh  par", n);
    }else{
        printf("O numero %d eh impar", n);
    }

    return 0;
}