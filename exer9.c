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
    }

    switch(mes){

    }


}
