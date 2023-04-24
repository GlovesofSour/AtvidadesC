#include <stdio.h>
#define TAM 25

void cabecalho();
void rodape();
float le_valida_media();
float calcular_media(float soma);
int i;

int main() {
    float media[TAM], soma, maiorMedia= 0, menorMedia = 10;
    int aprovados=0, reprovados=0;
    
    cabecalho();

    for (i = 1; i <= TAM; i++) {
        
        printf("Digite a media do aluno %d: ",i);
        media[i] = le_valida_media();
        
        if ( media[i] >= 6.9) {
            aprovados++;
        } else{
            reprovados++;
        }
        
        if ( media[i] > maiorMedia) {
            maiorMedia =  media[i];
        }
        
        if ( media[i] < menorMedia) {
            menorMedia =  media[i];
        }

        soma += media[i];
    }
    printf("--------------------------\n");
    float mediaTurma = calcular_media(soma);
    printf("Media da turma: %.1f\n", mediaTurma);
    printf("Maior nota: %.2f\n", maiorMedia);
    printf("Menor nota: %.2f\n", menorMedia);
    printf("Reprovados: %d\n", reprovados);
    printf("Aprovados: %d\n", aprovados);
   
    rodape();

    return 0;
}

void cabecalho(){

    printf("--------------------------\n");
    printf("    RELATORIO DE TURMA\n");
    printf("--------------------------\n");
}

float le_valida_media() {

    float media[i];
    do {
        scanf("%f", &media[i]);
        if (media[i] < 0 || media[i] > 10) {
            printf("Valor invalido. Tente novamente.\n");
        }
    } while (media[i] < 0 || media[i] > 10);
    return media[i];
}

float calcular_media(float soma) {

    return soma / TAM;
}

void rodape(){

    printf("--------------------------\n");
    printf("    BSB - 2023");
}