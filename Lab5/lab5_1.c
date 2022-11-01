// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
//Funcion principal 
int main()
{
    //Variable que le dara valor el usuario
    int a ;

    printf("Escriba un numero entero:");
    scanf("%d", &a);
    //Arreglo que sera de 20 valores
    int arraymultiplos[20];
    //Bucle que dara los multiplos del numero que el usuario ingreso
    for(int i=a; i<=a*20 ; i+=a){
        arraymultiplos[a] =i;
        printf("%d\n", i);
    }

    return 0;
}