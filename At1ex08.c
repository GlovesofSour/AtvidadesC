/*8. Uma revendedora de carros usados paga a seus funcionários 
vendedores um salário fixo por mês, mais uma comissão também fixa
para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
Escrever um algoritmo que leia o número de carros por ele vendidos, o 
valor total de suas vendas, o salário fixo e o valor que ele recebe por
carro vendido. Calcule e escreva o salário final do vendedor.*/

#include <stdio.h>

int main(){

    float carros;
    float vendas;
    float salario;
    float valor_venda;
    float salario_final;

    printf("Digite o numero de carros que foram vendidos: ");
    scanf("%f", &carros);
    printf("Digite o valor total de suas vendas: ");
    scanf("%f", &vendas);
    printf("Digite o seu salario fixo: ");
    scanf("%f", &salario);
    printf("Digite o valor por carros vendidos: ");
    scanf("%f", &valor_venda);

    vendas = vendas * 5 / 100;
    valor_venda = carros * valor_venda;
    salario_final = salario + vendas + valor_venda;

    printf("O seu salario final sera %.2f reais.", salario_final);

    return 0;
}