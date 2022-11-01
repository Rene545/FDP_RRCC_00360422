#include<stdio.h>
int main() {
    float zapato;
    printf("Cantidad de zapatos que se compraran:");
    scanf("%f", &zapato);

    if (zapato > 10 && zapato <20){
        printf("%.f dolares se le descontara", zapato * 80 * 0.1);
    }
    else if (zapato > 20 && zapato < 30){
        printf("%.f dolares se le descontara", zapato * 80 * 0.2);
    }
    if (zapato >= 30){
        printf("%.f dolares se le descontara", zapato * 80 * 0.4);
    }


    return 0;
}