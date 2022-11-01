// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>

// Funcion para la suma
void suma(float a, float b)
{
    float resultado = a + b;
    printf("%f", resultado);
}
// Funcion para la resta
void resta(float a, float b)
{
    float resultado = a - b;
    printf("%f", resultado);
}
// Funcion para la multiplicacion
void multiplicacion(float a, float b)
{
    float resultado = a * b;
    printf("%f", resultado);
}
// Funcion para la divsion
void division(float a, float b)
{
    float resultado = a / b;
    printf("%f", resultado);
}
// Codigo principal
int main()
{
    // Variables los cuales el usuario les dara valor
    float a, b, resultado;
    int operacion;
    printf("Escriba un numero entero:");
    scanf("%f", &a);

    printf("Escriba el numero de la siguiente lista para saber la operacion que desea hacer:\n 1. suma\n 2. resta\n 3. multiplicacion\n 4. division\n");
    scanf("%d", &operacion);

    printf("Escriba el segundo numero que operara:");
    scanf("%f", &b);
    // Programa switch para que el codigo sepa cual
    // funcion mandara a llamar
    switch (operacion)
    {
    case 1:
        suma(a, b);
        break;
    case 2:
        resta(a, b);
        break;
    case 3:
        multiplicacion(a, b);
        break;
    case 4:
        division(a, b);
        break;

        return 0;
    }
}