// Rene Roberto Castañeda Mancia 00360422
#include<stdio.h>
#include<stdlib.h>
//Codigo principal
int main(){
    //Archivo que tendra las notas
    FILE* notas;
    notas = fopen("Notas", "w");
    
    float resultado, n, a, suma=0;
    //Funcion que demuestra si el archivo se abrio correctamente
    if(notas==NULL){
        printf("ERROR");
        return 1;
    }

    printf("Cantidad de notas:");
    scanf("%f", &a);
    //Funcion for que escribira las notas en loop 
    //la cantida de notas que el usuario puso y sacara el promedio de estas
    for(int i=0; i<a; i++){
        printf("Escriba las notas para su promedio: ");
        scanf("%f", &n);
        fprintf(notas, "%f", n);
        fprintf(notas, "\n");
        suma=suma+n;
        resultado= suma/a;
    }
    //Funcion para que lea el archivo y se sepan los numeros dentro de el
    char ch;
    ch = fgetc(notas);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(notas);
        
    }
    printf("El promedio de las notas es: %f", resultado);
    
    //Funcion para cerrar el archivo utilizado
    fclose(notas);
	return 0;
}