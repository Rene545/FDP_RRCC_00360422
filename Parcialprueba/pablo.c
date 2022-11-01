#include <stdio.h>

int main()
{
    int b, con10 = 0, con60 = 0, con2040 = 0; // declaramos los contadores

    int numeros[10];             // declaramos el array
    for (int i = 0; i < 10; i++) // creamos el bucle que pedirá al usuario los 10 numeros para el array
    {

        printf("Ingrese un numero: ");
        scanf("%d", &b); // guardamos el numero en una variable
        numeros[i] = b;  // y esa variable va a ser equivalente a cada posición del array, es decir el primer numero que ingresen sera equivalente a la posición 0 y así sucesivamente hasta llenar el array
    }
    printf("El arreglo es: ");
    for (int i = 0; i < 10; i++) // creamos un bucle que recorra el arreglo para evaluar cada posición y así incrementar cada contador
    {
        printf("%d ", numeros[i]); // imprimimos el arreglo

        if (numeros[i] < 10)
        {
            con10++; // incrementamos contador
        }
        if (numeros[i] > 60)
        {
            con60++; // incrementamos contador
        }
        if (numeros[i] > 20 && numeros[i] < 40)
        {
            con2040++; // incrementamos contador
        }
    }
    printf("\nHay %d numeros menores a 10, %d numeros mayores a 60 y %d numeros entre 20 y 40", con10, con60, con2040); // imprimimos en otra linea los contadores

    return 0;
}