/*4. Faça um programa que leia o salário de um trabalhador e o valor da
prestação de um empréstimo. Se a prestação, for maior que 20% do salário,
imprima: “Empréstimo não concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>

int main(){

    float salario, emprestimo, limite;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo que voce quer receber: ");
    scanf("%f", &emprestimo);

    limite = salario * 20 / 100;
    limite = salario + limite;

    if(emprestimo > limite){
        printf("Valor acima do limite, emprestimo nao concedido");
    }else{
        printf("Emprestimo concedido");
    }

    return 0;
}