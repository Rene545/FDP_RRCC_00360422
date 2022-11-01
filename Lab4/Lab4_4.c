// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>

// Funcion la cual nos permite sumar el conjunto de numeros
int sumatoria(int a, int b)
{
    int suma = 0;
    for (int i = a; i <= b; i++)
    {
        suma = suma + i;
    }
    printf("La suma del conjunto de %d a %d es %d\n", a, b, suma);
}
// Codigo principal
int main()
{
    // Variables que les dara valor el usuario
    int min, max;

    printf("Escriba su numero min:");
    scanf("%d", &min);

    printf("Escriba su numero max:");
    scanf("%d", &max);

    // Funcion siendo llamada para que se ejecute con los nuevos valores
    sumatoria(min, max);

    return 0;
}