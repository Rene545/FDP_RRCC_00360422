//Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <string.h>
// Funcion que permitira conocer si la palabra es un palindromo
int palindromo(char *cadena)
{
    // Variable que contara los caracteres del arreglo
    int longitud = strlen(cadena);
    // Variables que tienen el inicio y el final del arreglo
    int inicio = 0, ultimo = longitud - 1;
    // Funcion while que mientras el inicio del arreglo y el ultimo caracter del arreglo
    // sean los mismo ira aumentado el valor del inicio e ira disminuyendo
    // el valor del ultimo para que vaya contando cada caracter.
    while (cadena[inicio] == cadena[ultimo])
    {

        if (inicio >= ultimo)
            return 1;

        inicio++;
        ultimo--;
    }
    return 0;
}
// Codigo principal
int main()
{
    // Variable que guardara la palabra que le de el usuario
    char cadena[50];
    printf("Escribe una palabra y te dire si es palindromo:");
    scanf("%s", cadena);
    // Variable que manda a llamar a la funcion que descubre si la palabra
    //  es un palindromo
    int resultado = palindromo(cadena);
    // Funcion if que segun lo que nos diga nuestra funcion nos dira si
    //  es un palindromo o no lo es
    if (resultado)
    {
        printf("%s es palindromo\n", cadena);
    }
    else
    {
        printf("%s no es palindromo\n", cadena);
    }
    return 0;
}