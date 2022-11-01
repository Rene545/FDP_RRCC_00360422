// Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Funcion del arreglo
void funcion(int arr[], int N);
//Funcion principal
int main(){
    int a,bAleatorio;
    //Programa para numero aleatorio
    srand(time(NULL));

    printf("Cual es el tamanio del arreglo: ");
    scanf("%d", &a);
    //Arreglo original
    int arreglo[a];

    printf("Arreglo 1 es: \n");
    // Bucle para crear todo el arreglo seguno los datos del usuario
    for(int i=0; i<a; i++){
        bAleatorio=rand()%10+1;
        arreglo[i]=bAleatorio;
        printf("%d\n", arreglo[i]);
    }

    printf("Arreglo invertido es: \n");
    funcion(arreglo, a);

    return 0;
}
//Funcion que demustra el arreglo invertido
void funcion(int arr[], int N)
{
    for(int i= N-1; i>0; i--)
    {
        printf("%d\n",arr[i]);
    }

}
