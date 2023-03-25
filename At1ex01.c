/*1. Faça um programa em que o usuário digite o custo de uma determinada
mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas
eventuais (também solicitadas pelo teclado). Para concluir, o programa 
pergunta qual o valor de venda e indica a percentagem de lucro da 
mercadoria*/

#include <stdio.h>

int main(){

    float custo;
    float frete;
    float despesas;
    float valor;
    float total;
    float lucro;
    float porcentagem;

    printf("Digite o custo do produto: ");
    scanf("%f", &custo);
    printf("Digite o valor do frete para esse produto: ");
    scanf("%f", &frete);
    printf("Digite o valor das despesas para este produto: ");
    scanf("%f", &despesas);
    printf("Digite o valor de venda deste produto: ");
    scanf("%f", &valor);

    total = valor + frete + despesas;
    lucro = total - custo;
    porcentagem = lucro / total * 100;

    printf("A porcentagem de lucro foi de %.2f por cento. ", porcentagem);

    return 0;
}