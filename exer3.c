#include <stdio.h>

void main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("par");
    }else{
        printf("impar");
    }
}

