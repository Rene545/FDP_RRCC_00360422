//Rene Roberto Castañeda Mancia 00360422
#include <stdio.h>
int main(){
    // a es una variable agregada por el usuario
    int a;
    printf("Ingrese un numero entero: ");
    scanf("%d", &a);

//for comenzara desde 0 ya que i es igual a 0
//la condicion sera que si i es menor o igual a "a" entonces i sumara 1
//hasta que la condición sea falsa    
for(int i = 0; i <= a; i++){
   if(i %2==0){
        printf("%d es un numero par\n", i);
    }
    else{ 
        printf("%d es un numero impar\n", i);
    }
}


    return 0;
}