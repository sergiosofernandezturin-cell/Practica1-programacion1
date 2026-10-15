// Sergio Fernandez Turin Maquina espendedora
#include <stdio.h>

int main(){
    int precio = 0;
    int dinero = 0;
    int cambio = 0;
    int monedas = 0;

    // Pedimos el precio y el dinero introducido
    printf("Introduce el precio en centimos:\n");
    scanf("%d", &precio);

    printf("Introduce el dinero en centimos:\n");
    scanf("%d", &dinero);

    // Comprobamos si el dinero es suficiente
    if(dinero < precio){
        printf("Dinero insuficiente, faltan %d centimos\n", precio - dinero);
    }else{

        // Calculamos el cambio
        cambio = dinero - precio;

        printf("Cambio total: %d centimos\n", cambio);

        // Monedas de 200 centimos
        monedas = cambio / 200;
        cambio = cambio % 200;
        if(monedas > 0){
            printf("Monedas de 200: %d\n", monedas);
        }

        // Monedas de 100 centimos
        monedas = cambio / 100;
        cambio = cambio % 100;
        if(monedas > 0){
            printf("Monedas de 100: %d\n", monedas);
        }

        // Monedas de 50 centimos
        monedas = cambio / 50;
        cambio = cambio % 50;
        if(monedas > 0){
            printf("Monedas de 50: %d\n", monedas);
        }

        // Monedas de 20 centimos
        monedas = cambio / 20;
        cambio = cambio % 20;
        if(monedas > 0){
            printf("Monedas de 20: %d\n", monedas);
        }

        // Monedas de 10 centimos
        monedas = cambio / 10;
        cambio = cambio % 10;
        if(monedas > 0){
            printf("Monedas de 10: %d\n", monedas);
        }

        // Monedas de 5 centimos
        monedas = cambio / 5;
        cambio = cambio % 5;
        if(monedas > 0){
            printf("Monedas de 5: %d\n", monedas);
        }

        // Monedas de 2 centimos
        monedas = cambio / 2;
        cambio = cambio % 2;
        if(monedas > 0){
            printf("Monedas de 2: %d\n", monedas);
        }

        // Monedas de 1 centimo
        monedas = cambio / 1;
        if(monedas > 0){
            printf("Monedas de 1: %d\n", monedas);
        }
    }

    return 0;
}
