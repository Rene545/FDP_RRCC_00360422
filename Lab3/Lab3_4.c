//René Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    //Variables las cuales seran asignadas por lo que indique el usuario
    int num1, aleatorio;
    printf("Adivina un numero entre el 1-10:");
    scanf("%d", &num1);

    // Programa para que la computadora genere un numero aleatorio
    // especificamente entre 1 a 10
    srand(time(NULL));
    aleatorio = rand() % 10 + 1;

    //Loop en el cual el juego se repetira hasta que el usuario adivine
    do{
        printf("El numero aleatorio es %d\n", aleatorio);
        printf ("Adivina un numero entre el 1-10: ");
        scanf ("%d", &num1);

        srand (time(NULL));
        aleatorio = rand() %10 + 1;

    }while(num1 != aleatorio);

    //Programa if para cuando el usuario adivine el numero imprima el mensaje
    if(num1=aleatorio){
        printf("Adivinastes el numero!!");
}
    return 0;
}