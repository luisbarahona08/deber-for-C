#include <stdio.h>
int main() { 
    int inicio, incremento, final;
    printf("Ingrese el numero de inicio:");
    scanf("%d", &inicio);
    printf("Ingrese el numero final:");
    scanf("%d", &final);
    printf("Ingrese el numero con el q quiere incrementar o disminuir:");
    scanf("%d", &incremento);

    if (incremento == 0){
        printf("El incremento no puede ser 0");
    }
    else if (inicio <= final && incremento > 0){
        for (int i=inicio; i<= final; i+=incremento){
            printf("%d\n", i );
        }
    }
    else if (inicio >= final && incremento < 0){
        for (int i= inicio ; i>= final ; i+=incremento){
            printf("%d\n", i);
        }
    }
    else {
        printf("El incremento puesto no es valido para aumentar o disminuir");
    }
}