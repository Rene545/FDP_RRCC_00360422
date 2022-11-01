// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>

// Funcion la cual permitira saber si el numero ingresado
// sera par o imar
void par(int num)
{

    if (num % 2 == 0)
    {
        printf("%d es un numero par", num);
    }
    else
    {
        printf("%d es un numero impar", num);
    }
}
// Nuestro codigo principal iniciara desde aca
int main()
{

    // Variable la cual le dara valor el usuario
    int numero;

    printf("Escriba un numero entero:");
    scanf("%d", &numero);

    // Funcion siendo llamada para que sea ejecutada
    // con el valor que le ha puesto el usuario
    par(numero);

    return 0;
}