#include <stdio.h>

void main() {
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("par");
    }else{
        printf("impar");
    }
}

