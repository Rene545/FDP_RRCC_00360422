//René Roberto Castañeda Mancia 00360422
#include <stdio.h>
int main(){
    int a, elevacion=1;
    //El usuario declarara que numero tendra la variable a
    printf("Escriba el numero potencia:");
    scanf("%d", &a);
    //En for hacemos que la base se multiplique por si misma el numero de
    //veces que el usuario nos indique, ya que mientras la base sea
    //menor o igual que el exponente esta ira aumentando
    for(int i=1; i<=a ; i++)
    {
        elevacion= elevacion*2;
        printf("%d\n", elevacion);
    }

    return 0;
}