#include <stdio.h>
int main(){
    char letra;
    printf("Escriba una letra:");
    scanf("%c", &letra);

    switch(letra){
        case 'a':
        printf("%c es una vocal", letra);
        break;

        case 'e':
        printf("%c es una vocal", letra);
        break;

        case 'i':
        printf("%c es una vocal", letra);
        break;

        case 'o':
        printf("%c es una vocal", letra);
        break;

        case 'u':
        printf("%c es una vocal", letra);
        break;

        case 'A':
        printf("%c es una vocal", letra);
        break;

        case 'E':
        printf("%c es una vocal", letra);
        break;

        case 'I':
        printf("%c es una vocal", letra);
        break;

        case 'O':
        printf("%c es una vocal", letra);
        break;

        case 'U':
        printf("%c es una vocal", letra);
        break;

        default:        
        printf("%c es una consonante", letra);
    }

    return 0;
}