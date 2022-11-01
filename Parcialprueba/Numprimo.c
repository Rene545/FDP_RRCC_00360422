#include <stdio.h>

int main()
{

    int n, bandera, k, residuo;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        bandera = 1;
        if (n > 3)
        {
            k = 2;
            for (int i = k; i < n; i++)
            {
                residuo = n % k;
                if (k < n && bandera == 1)
                {
                    if (residuo == 0)
                    {
                        bandera = 0;
                    }
                    else
                    {
                        k = k + 1;
                    }
                }
            }
        }

        if (bandera == 1)
        {
            printf("%d es un numero primo", n);
        }
        else
        {
            printf("%d no es un numero primo", n);
        }
    }
    else
    {
        printf("Ingrese un valor mayor que 0");
    }

    return 0;
}