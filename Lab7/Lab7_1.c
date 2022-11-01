// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <string.h>
//Codigo principal
int main()
{
    //Archivos los cuales se les guardara los datos
    FILE *positivos;
    FILE *negativos;
    //Funcion para abrir el arhivo de los numeros positivos
    positivos = fopen("Positivos", "w");
    //Funcion que demuestra si el archivo se abrio correctamente
    if (positivos == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    //Funcion para abrir el arhivo de los numeros negativos
    negativos = fopen("Negativos", "w");    
    //Funcion que demuestra si el archivo se abrio correctamente
    if (negativos == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    //Variables que les dara valor el usuario
    int neg, pos;
    printf("Escriba numeros enteros positivos:");
    //Funcion do que hara loop para que llene el archivo con la cantidad de numeros
    //que el usuario ponga
    do
    {
        scanf("%d", &pos);
        fprintf(positivos, "%d", pos);
        fprintf(positivos, "\n");
        printf("Escriba un 0 cuando ya no quiera agregar numeros.\n");
    } while (pos > 0);

    //Funcion para que lea el archivo con los datos positivos
    char a;
    a = fgetc(positivos);
    while (a != EOF)
    {
        printf("%c", a);
        a = fgetc(positivos);
    }

    printf("Escriba numeros enteros negativos:");
    //Funcion do que hara loop para que llene el archivo con la cantidad de numeros
    //que el usuario ponga
    do
    {
        scanf("%d", &neg);
        fprintf(negativos, "%d", neg);
        fprintf(negativos, "\n");
        printf("Escriba un 0 cuando ya no quiera agregar numeros.\n");
    } while (neg < 0);

    //Funcion para que lea el archivo con los datos negativos
    char b;
    b = fgetc(negativos);
    while (b != EOF)
    {
        printf("%c", b);
        b = fgetc(negativos);
    }

    //Funciones para cerrar los archivos utilizados
    fclose(positivos);

    fclose(negativos);

    return 0;
}