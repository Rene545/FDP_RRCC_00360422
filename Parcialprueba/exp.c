#include <stdio.h>
#include <math.h>

int factorialF(int n);

int main()
{
    int n = 1, k = 0;
    int Factorizar = 1;
    float x;
    float resultado = 0;

    printf("Programa que calcula e^x... escriba el valor de x: ");
    scanf("%f", &x);

    printf("Ingrese su aproximacion: ");
    scanf("%d", &n);

    

    while (k <= n)
    {
        resultado += pow(x, k) / (factorialF(k));
        k++;
    }
    printf("e^%f = %f", x, resultado);

    return 0;
}


int factorialF(int n)
{
    int factorial=1;
    for(int i=1 ; i<=n ; i++)
    {
        factorial= factorial*i;
    }
    
    return (factorial);
}