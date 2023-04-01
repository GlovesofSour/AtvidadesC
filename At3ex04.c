/*4. Elabore um programa para verificação de situação eleitoral, onde será informada somente a idade do eleitor,
considere as situações abaixo:

Menor que 0 não nasceu
0-15 não vota
16-17 opcional
18-65 obrigatório
exatamente 41- somente ganha prêmio e não vota!!!
> 65 opcional
exatamente 88 - somente ganha prêmio e não vota!!!

- Não utilizar os operadores lógicos || ou &&
- Utilizar somente estrutura if/else conforme apresentada abaixo
- Não utilizar switch/case
- Não utilizar a estrutura "else if"*/

#include <stdio.h>

int main(){

    int idade;

    printf("---------------------\n");
    printf("Situacao de voto\n");
    printf("---------------------\n");

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade == 88){
        printf("Somente ganha premio e nao vota!!\n");
    }else{
        if(idade > 65){
            printf("Opicional\n");
        }else{
            if(idade == 41){
                printf("Somente ganha premio e nao vota!!\n");
            }else{
                if(idade <= 65){
                    printf("obrigatorio\n");
                }else{
                    if(idade < 18){
                        printf("opcional\n");
                    }else{
                        if(idade < 16){
                            printf("nao vota\n");
                        }else{
                            if(idade < 0){
                                printf("nao nasceu\n");
                            }
                        }
                    }
                }
            }
        }
    }
    
    printf("---------------------\n");

    return 0;
}