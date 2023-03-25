/*5. Faça um programa que leia um número e, caso ele seja positivo, 
calcule e mostre: o número digitado ao quadrado e raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>

int main(){

    float n, potencia, raiz;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if(n <= 0){
        printf("este numero e invalido");
    }else{

        potencia = n * n;
        raiz = sqrt(n);

        printf("O numero %.2f ao quadrado eh: %.2f ",n, potencia); 
        printf("\nA raiz do numero %.2f eh: %.2f", n, raiz);
    }

    return 0;
}