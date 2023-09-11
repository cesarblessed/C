#include <stdio.h>
#include <string.h>

void main(){

char tipoAno[20];

    int mes;

    printf("Digite um mês: ");
    scanf("%d", &mes);

    printf("Digite tipo de ano: ");
    scanf("%s", tipoAno);


    if (mes == 2 && (strcmp(tipoAno, "b") == 0)) {
        printf("Fevereiro - 29 dias\n");
    }else{
        switch(mes){
        case 1:
            printf("Janeiro - 31 dias");
            break;
        case 2:
            printf("Fevereiro - 28 dias");
            break;
        case 3:
            printf("Março - 31 dias");
            break;
        case 4:
            printf("Abril - 30 dias");
            break;
        case 5:
            printf("Maio - 31 dias");
            break;

    }
}

