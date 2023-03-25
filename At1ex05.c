/*5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
meses e dias e escreva a idade dessa pessoa expressa apenas em dias.
Considerar ano com 365 dias e mês com 30 dias.*/

#include <stdio.h>

int main(){

    int anos;
    int meses;
    int dias;
    int idade;

    printf("escreva a sua idade em anos/meses/dias\n");
    printf("anos: ");
    scanf("%d", &anos);
    printf("meses: ");
    scanf("%d", &meses);
    printf("dias: ");
    scanf("%d", &dias);

    anos = anos * 365;
    meses = meses * 30;
    idade = anos + meses + dias;

    printf("Voce tem %d dias de vida", idade);

    return 0;
}