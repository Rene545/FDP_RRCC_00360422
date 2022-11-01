#include <stdio.h> 
    int main() {
    float numero1;

    printf("Escriba un numero:");
    scanf("%f", &numero1);
    
    if (numero1 > 0){
        printf("%f es un numero positivo", numero1);
    }
    else if (numero1 < 0) {
        printf("%f es un numero negativo", numero1);
    
    }
    else {
        printf("%f es 0", numero1);
    }
    
    return 0;
}