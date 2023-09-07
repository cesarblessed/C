#include <stdio.h>
#include <stdlib.h>

void main() {
    int numero, hora, minuto, segundo, resto;

    printf("Digite um número: ");
    scanf("%d", &numero);

    hora = numero / 3600;
    resto = numero % 3600;
    minuto = resto / 60;
    segundo = resto % 60;

    printf("%d:%d:%d", hora, minuto, segundo);
}
