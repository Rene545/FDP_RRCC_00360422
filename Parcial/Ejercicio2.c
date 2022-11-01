#include <stdio.h>
// Codigo principal
int main()
{
    printf("Rene Roberto Castaneda Mancia-00360422-24/10/2022\n");
    // Variables con valores ya establecidos y una variable que le dara valor el usuario
    int n, mayor = 0, menor = 0;
    // Arreglo que le dara los valores el usuario
    int arrayenteros[10];
    // Loop que su proposito es que el usuario repita las veces necesarias para llenar el arreglo
    for (int i = 0; i < 10; i++)
    {
        printf("Escriba un numero entero:");
        scanf("%d", &n);
        arrayenteros[i] = n;
    }
    // Loop que revisa todo el arreglo y dentro del loop hay 2 funciones if
    // que permitiran conocer cuales de los numeros dentro del arreglo son mayores o menores a 0
    for (int i = 0; i < 10; i++)
    {
        // Funcion if que si se cumple le sumara 1 a la variable menor
        // Si no se cumple el programa no hara nada
        if (arrayenteros[i] < 0)
        {
            menor++;
        }
        // Funcion if que si se cumple le sumara 1 a la variable mayor
        // Si no se cumple el programa no hara nada
        if (arrayenteros[i] > 0)
        {
            mayor++;
        }
    }
    // Mostrarle al usuario cuantos numeros son mayores o menores a 0
    printf("%d numeros son menores a 0 y %d numeros son mayores a 0\n", menor, mayor);

    printf("Rene Roberto Castaneda Mancia-00360422-24/10/2022");

    return 0;
}