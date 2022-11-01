#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return (factorial);
}

int main()
{
    int n = 0;
    float K, X, resultado;
    printf("Rene Roberto Castaneda Mancia-00360422-24/10/2022\n");

    printf("Programa para calcular el seno\n");
    printf("Escriba el valor de n:");
    scanf("%d", &n);
    printf("Escriba el valor de X:");
    scanf("%f", &X);
    printf("Escriba su aproximacion:");
    scanf("%f", &K);

    while (n <= K)
    {
        resultado += (pow(-1, n) / factorial(n)) * pow(X, 2 * n + 1);
        n++;
    }
    printf("sen(%f)=%d\n", X, resultado);

    printf("Rene Roberto Castaneda Mancia-00360422-24/10/2022");
    return 0;
}