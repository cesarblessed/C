#include <stdio.h>

int main() {
    int velPermitida, velPassada, contador;
    velPermitida = 80;
    
    printf("Digite a velocidade passada: ");
    scanf("%d", &velPassada);

    while(velPassada > velPermitida){
        contador = contador+1;
        velPassada--;
    }
    printf("Multa R$%d", contador*5);

}
