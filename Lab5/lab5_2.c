// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Funcion principal
int main()
{
    // Variables que le dara el valor el usuario, y
    // Variable con valor ya determinado
    int n, a, b = 0;

    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &n);
    printf("Ingrese un numero entero: ");
    scanf("%d", &a);
    // Arreglo con la cantidad de valores que el usuario le dio
    int arrayn[n];
    // Programa para sacar numeros aleatorios para el arreglo
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        arrayn[i] = rand() % 10 + 1;
        printf("%d\n", arrayn[i]);
    }
    // Bucle para que cuente cuantas veces se repite el numero
    // que el usuario a elegido
    for (int i = 0; i < n; i++)
    {
        if (arrayn[i] == a)
        {
            b++;
        }
    }
    printf("El numero %d se repite %d de veces", a, b);

    return 0;
}