#include <stdio.h>
#include <locale.h> //biblioteca para formatar padrão do país

void main() {
    setlocale(LC_ALL, "Portuguese"); //No meu caso sou brasileiro(português)
    float x, y, z;

    printf("Digite o valor x: ");
    scanf("%f", &x);

    printf("Digite o valor y: ");
    scanf("%f", &y);

    printf("Digite o valor z: ");
    scanf("%f", &z);

    if(x == y && y == z){
        printf("Equilátero");
    }else if(x!=y && x!=z && y!=z){
        printf("Escaleno");
    }else{
        printf("isósceles");
    }
}
