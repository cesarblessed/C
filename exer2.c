#include <stdio.h>
#include <stdlib.h>

void main() {
    float num1, num2, num3, media;

    printf("Digite o n�mero 1: ");
    scanf("%f", &num1);

    printf("Digite o n�mero 2: ");
    scanf("%f", &num2);

    printf("Digite o n�mero 3: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("%f", media);
}
