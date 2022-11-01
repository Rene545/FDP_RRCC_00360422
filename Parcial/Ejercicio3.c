#include <stdio.h>
// Codigo Principal
int main()
{
    // Variable n que le dara valor el usuario y variable que cambiara de valor segun
    // vaya avanzando la linea de codigo
    int N, bandera;
    printf("Rene Roberto Castaneda Mancia-00360422-24/10/2022\n");
    // Usuario le dara el valor a n
    printf("Solicite un anio");
    scanf("%d", &N);
    // Funcion if que la condicion es que el año sea divisible entre 4
    if (N % 4 == 0)
    {
        // Funcion if que la condicion es que el año tambien sea divisible entre 100
        if (N % 100 == 0)
        {
            // Funcion if que la condicion sea que el año no sea divisible entre 400
            if (N % 400 == 1)
            {
                // Variable que se le da el valor de 0 si el año no es divisible entre 400
                bandera = 0;
            }
            // Funcion else por si no cumple el if de N%400==1
            else
            {
                // Variable que se le da el valor de 1 si el año es divisible entre 400
                bandera = 1;
            }
        }
        // Funcion else por si no cumple el if de N%100==0
        else
        {
            // Variable que se le da el valor de 1 si el año no es divisible entre 100
            bandera = 1;
        }
    }
    // Funcion else por si no cumple el if de N%4==0
    else
    {
        // Variable que se le dara el valor de 0 si el año no es divisible entre 4
        bandera = 0;
    }
    // Funcion if que comprobara si el año es bisiesto o no es bisiesto segun
    // el valor que le quedo a la variable bandera
    if (bandera == 1)
    {
        printf("Anio es bisiesto\n");
    }
    else
    {
        printf("Anio no es bisiesto\n");
    }

    printf("Rene Roberto Castaneda Mancia-00360422-24/10/2022");

    return 0;
}