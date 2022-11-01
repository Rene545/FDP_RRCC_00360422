#include <stdio.h>

int main()
{
    int n, n10 = 0, n2040 = 0, n60 = 0;
    int arrayenteros[10];
    
    for(int i=0; i<10; i++){
	printf("Escriba un numero entero:");
	scanf("%d", &n);
    arrayenteros[i]= n;
}
for(int i=0; i<10; i++){
    if (arrayenteros[i] < 10)
    {
        n10++;
    }
    if (arrayenteros[i] > 20 && arrayenteros[i] < 40)
    {
        n2040++;
    }
    if (arrayenteros[i] > 60)
    {
        n60++;
}
    
    }
    printf("%d numeros son menores a 10, %d numeros estan entre 20 y 40 y %d numeros son mayores de 60", n10, n2040, n60);

    return 0;
}