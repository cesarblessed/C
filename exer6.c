#include <stdio.h>

void main() {
    int num1, num2;
    char operador;

    printf("Digite o operador: ");
    scanf("%c", &operador);

    printf("Digite o número 1: ");
    scanf("%d", &num1);

    printf("Digite o número 2: ");
    scanf("%d", &num2);

    switch(operador){
    case '+':
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case '*':
        printf("%d x %d = %d",num1,num2,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;
    }
}

