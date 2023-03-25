/*3. Faça um programa que calcule a quantidade necessária de latas de
tinta para pintar uma parede. O programa pergunta as medidas de largura
e altura da parede em metros e escreve quantas latas de tinta serão 
necessárias para pintá-la. Considere que o consumo de tinta é de 300 ml 
por metro quadrado e a quantidade de tinta por lata é de 2 litros.*/

#include <stdio.h>

int main(){

    float largura;
    float altura;
    float area;
    float tinta;

    printf("Digite a largura da parede em metros: ");
    scanf("%f", &largura);
    printf("Digite a altura da parede em metros: ");
    scanf("%f", &altura);

    area = largura * altura;

    tinta = (area * 0.3) / 2;

    printf("Serao necessarias %.0f latas de tinta para pintar uma parede de %.2f metros quadrados.", tinta, area);

    return 0;
}