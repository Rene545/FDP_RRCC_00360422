#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* notas;
    notas = fopen("Notas", "w");
    
    float resultado, n, a, suma=0;


    if(notas==NULL){
        printf("ERROR");
        return 1;
    }

    printf("Cantidad de notas:");
    scanf("%f", &a);

    for(int i=0; i<a; i++){
        printf("Escriba las notas para su promedio: ");
        scanf("%f", &n);
        fprintf(notas, "%f", n);
        fprintf(notas, "\n");
        suma=suma+n;
        resultado= suma/a;
    }
    char ch;
    ch = fgetc(notas);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(notas);
        
    }
    printf("El promedio de las notas es: %f", resultado);

    fclose(notas);
	return 0;
}