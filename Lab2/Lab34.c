#include<stdio.h>
int main(){

    int numero1, num2, num3;

    printf("Edad del usuario:");
    scanf("%d", &numero1);

    if(numero1 >= 18){
        printf("1. Precalculo\n" "2. Mate Discreta\n" "3. FDP\n" "4. EECT\n""Elija su materia favorita por el numero que aparece:");
        scanf("%d", &num2);
    }
    switch(num2){
        case 1:
        printf("Precalculo es tu materia favorita");
        break;
        case 2:
        printf("Mate Discreta es tu materia favorita");
        break;
        case 3:
        printf("FDP es tu materia favorita");
        break;
        case 4:
        printf("EECT es tu materia favorita");
        break;
    }
    if(numero1<18){
        printf("1. Matematicas\n" "2. Lenguaje\n" "3. Ciencias\n" "4. Sociales\n" "Elija su materia favorita segun el numero que lo indica:");
        scanf("%d", &num3);
    }
    switch(num3){
        case 1:
        printf("Matematicas es tu materia favorita");
        break;
        case 2:
        printf("Lenguaje es tu materia favorita");
        break;
        case 3:
        printf("Ciencias es tu materia favorita");
        break;
        case 4:
        printf("Sociales es tu materia favorita");
        break;
    }
    return 0;
}