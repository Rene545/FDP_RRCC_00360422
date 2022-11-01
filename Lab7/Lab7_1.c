// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *positivos;
    FILE *negativos;

    positivos = fopen("Positivos", "w");
    if (positivos == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    negativos = fopen("Negativos", "w");
    if (negativos == NULL)
    {
        printf("ERROR!");
        return 1;
    }

    int neg, pos;
    printf("Escriba numeros enteros positivos:");
    do
    {
        scanf("%d", &pos);
        fprintf(positivos, "%d", pos);
        fprintf(positivos, "\n");
        printf("Escriba un 0 cuando ya no quiera agregar numeros.\n");
    } while (pos > 0);

    char a;
    a = fgetc(positivos);
    while (a != EOF)
    {
        printf("%c", a);
        a = fgetc(positivos);
    }

    printf("Escriba numeros enteros negativos:");
    do
    {
        scanf("%d", &neg);
        fprintf(negativos, "%d", neg);
        fprintf(negativos, "\n");
        printf("Escriba un 0 cuando ya no quiera agregar numeros.\n");
    } while (neg < 0);

    char b;
    b = fgetc(negativos);
    while (b != EOF)
    {
        printf("%c", b);
        b = fgetc(negativos);
    }

    fclose(positivos);

    fclose(negativos);

    return 0;
}