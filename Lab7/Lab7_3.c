#include <stdio.h>

int main(){
    FILE* vocales;
    int a;
    char palabra[250], a[50], e[50], i[50], o[50], u[50];
    char *cadena;

    printf("Cantidad de palabras que va a escribir:");
    scanf("%d", &a);

    for(int i=0; i<a; i++){

    printf("Escriba su palabra:");
    fgets(palabra, sizeof(palabra), stdin);

    }
    char ch;
    ch = fgetc(a);
    while (ch != EOF){
        printf("%c", ch);
        ch = fgetc(a);
    }

    fclose(vocales);
    return 0;
}