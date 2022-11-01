// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>

// Funcion para saber el resultado de la potencia
int potenciado(int a, int b)
{
    int resultado = 1;
    for (int i = 1; i <= b; i++)
    {
        resultado = resultado * a;
        printf("%d^%d es igual a %d\n", a, i, resultado);
    }
    return resultado;
}
// Codigo principal
int main()
{
    // Variables las cuales el usuario les dara valor
    int A, B;

    // Punteros que guiaran a la funcion para saber los valores
    int *pntrA, *pntrB;
    pntrA = &A;
    pntrB = &B;

    printf("Escriba el numero base: ");
    scanf("%d", &A);
    printf("Escriba el exponente de la base: ");
    scanf("%d", &B);

    // LLamando a la funcion para que haga lo programado
    // con los valores guardados en los punteros
    potenciado(*pntrA, *pntrB);

    return 0;
}