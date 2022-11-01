//René Roberto Castañeda Mancia 00360422
#include <stdio.h>
int main(){
    //a es una variable agregada por el usuario
    int a;
    printf("Ingrese un numero entero:");
    scanf("%d", &a);

    // for iniciara con el numero que se le denomine a el caracter a
    //y el maximo termino que llegara el loop sera los 10 primeros multiplos y esta
    //irá aumentando su numero sumando "a" veces
    for(int i=a; i<=a*10 ; i+=a){
        printf("%d\n", i);
    }

    return 0;
}