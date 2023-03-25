/*7. O custo de um carro novo ao consumidor é a soma do custo de fábrica
com a porcentagem do distribuidor e dos impostos (aplicados ao custo de
fábrica). Supondo que o percentual do distribuidor seja de 28% e os 
impostos de 45%, escrever um algoritmo para ler o custo de fábrica de 
um carro, calcular e escrever o custo final ao consumidor.*/

#include <stdio.h>

int main(){

    float fabrica;
    float distrib;
    float imposto;
    float total;

    printf("Digite o custo de de fábrica do carro: ");
    scanf("%f", &fabrica);

    distrib = fabrica * 28 / 100;
    imposto = fabrica * 45 / 100;
    total = fabrica + distrib + imposto;

    printf("O custo final do consumidor será de %.2f reais.", total);

    return 0;
}