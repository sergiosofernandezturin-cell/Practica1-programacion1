//Sergio Fernandez Turin Calculadora de daño
#include <stdio.h>

int main(){

    // Declaramos las variables necesarias para calcular el daño
    float ataque = 0, armadura = 0, vida = 0, daño = 0, dañoFinal = 0;
    int nivel = 0;
    char critico;

    // Pedimos el ataque base del personaje
    printf("Introduce el daño del ataque personaje:\n");
    scanf("%f", &ataque);

    // Pedimos el nivel del personaje
    printf("Introduce el nivel del personaje:\n");
    scanf("%d", &nivel);

    // Pedimos la armadura y la vida del enemigo
    printf("Introduce la armadura y la vida del enemigo:\n");
    scanf("%f %f", &armadura, &vida);

    // Preguntamos si el golpe ha sido crítico
    printf("El ataque ha sido critico (s/n): ");
    scanf(" %c", &critico);

    // Calculamos el daño aplicando el bonus del 5% por nivel
    daño = ataque * (1 + nivel * 0.05);

    // Si el ataque es crítico, duplicamos el daño
    if(critico == 's'){
        daño = daño * 2;
    }

    // Calculamos el daño final teniendo en cuenta la armadura
    dañoFinal = daño * 100 / (100 + armadura);

    // Mostramos el daño final con dos decimales
    printf("Daño final: %.2f\n", dañoFinal);

    // Clasificamos el golpe según el daño final
    if(dañoFinal < 10){
        printf("Rasguño\n");
    }
    else if(dañoFinal >= 10 && dañoFinal < 50){
        printf("Golpe sólido\n");
    }else{
        printf("¡Devastador!\n");
    }

    // Comprobamos si el daño es suficiente para derrotar al enemigo
    if(dañoFinal >= vida){

        // Si el daño es mayor o igual que la vida, el enemigo muere
        printf("Enemigo derrotado\n");

    }else{

        // Si sobrevive, calculamos y mostramos su vida restante
        printf("Vida restante: %.2f\n", vida - dañoFinal);
    }

    return 0;
}
