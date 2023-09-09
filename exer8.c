#include <stdio.h>

int main() {
    int velPermitida = 80, velPassada, contador;

    printf("Digite a velocidade passada: ");
    scanf("%d", &velPassada);

    while(velPassada > velPermitida){
        contador = contador+1;
        velPassada--;
    }
    printf("Multa R$%d", contador*5);

}
