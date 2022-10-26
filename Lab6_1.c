// René Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <string.h>
// Codigo principal
int main()
{
    // Variables que se les da un limite ya predeterminado y un puntero
    char texto[250];
    char palabra[200];
    char *cadena;
    // El usuario le dara valor a los arreglos del texto y de la combinacion de palabras
    printf("Escriba un texto:");
    fgets(texto, sizeof(texto), stdin);
    puts(texto);
    printf("Escriba una combinacion de letras:");
    scanf("%s", palabra);
    puts(palabra);
    // Darle un valor al puntero que seria la funcion para ver si
    // la combinacion de letras esta en el arreglo del texto
    cadena = strstr(texto, palabra);
    // Funcion if que imprime una cosa si el arreglo de la combinacion de letras
    // esta adentro del texto o imprime otra si no lo esta
    if (cadena)
    {
        printf("La combinacion de letras esta dentro del texto");
    }
    else
    {
        printf("La combinacion de letras no esta dentro del texto");
    }

    return 0;
}