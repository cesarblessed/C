#include <stdio.h>

void main() {
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    if(media >= 7){
        printf("aprovado com sucesso");
    }else if(media >= 4 && media < 7){
        printf("recuperacao");
    }else{
        printf("reprovado");
    }
}

