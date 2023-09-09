#include <stdio.h>

void main() {
    float v1, v2, v3;

    printf("Digite o valor 1: ");
    scanf("%f", &v1);

    printf("Digite o valor 2: ");
    scanf("%f", &v2);

    printf("Digite o valor 3: ");
    scanf("%f", &v3);

    if((v1 > v2) && (v2 > v3)){
        printf("maior:%.2f\nmeio:%.2f\nmenor:%.2f", v1, v2, v3);
    }else if((v2 > v3) && (v3 > v1)){
        printf("maior:%.2f\nmeio:%.2f\nmenor:%.2f", v2, v3, v1);
    }else if((v3 > v2) && (v2 > v1)){
        printf("maior:%.2f\nmeio:%.2f\nmenor:%.2f", v3, v2, v1);
    }else if (v3 > v1 && v1 > v2){
        printf("maior:%.2f\nmeio:%.2f\nmenor:%.2f", v3, v1, v2);
    }else if (v1 > v3 && v3 > v2){
        printf("maior:%.2f\nmeio:%.2f\nmenor:%.2f", v1, v3, v2);
    }else if(v2 > v1 && v1 > v3){
        printf("maior:%.2f\nmeio:%.2f\nmenor:%.2f", v2, v1, v3);
    }
}
