/*4. Faça um programa que leia o salário de um trabalhador e o valor da
prestação de um empréstimo. Se a prestação, for maior que 20% do salário,
imprima: “Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>

int main(){

    float salario, prestacao, porcentagem;
    
    printf("--------------------------------\n");
    printf("    SIMULADOR DE EMPRESTIMOS\n");
    printf("--------------------------------\n");
    
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);
    printf("Valor do salario: %d, valor da prestacao: %d\n");
    printf("--------------------------------\n");
    porcentagem = salario * 20 / 100;

    if(prestacao > porcentagem){
        printf("Valor acima do limite, emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }
    
     printf("--------------------------------\n");
    
    return 0;
}
