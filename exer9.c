#include <stdio.h>

void main(){

char tipoAno[20];


    int mes;



    printf("Digite um m�s: ");
    scanf("%d", &mes);

     printf("Digite tipo de ano: ");
    scanf("%s", tipoAno);

    if(mes == "2" && tipoAno == "b"){
        printf("Fevereiro - 29 dias");
    }



}
