/*9. Faça um algoritmo que leia três notas de um aluno, calcule e 
escreva a média final deste aluno. Considerar que a média é ponderada
e que o peso das notas é 2, 3 e 5.*/

#include <stdio.h>

int main(){

    float n1;
    float n2;
    float n3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = ((n1*2)+(n2*3)+(n3*5)) / (2+3+5);

    printf("A media final eh %.2f ", media);

    return 0;
}