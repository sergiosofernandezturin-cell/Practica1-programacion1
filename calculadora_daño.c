//Sergio Fernandez Turin Calculadora de dano
#include <stdio.h>

int main(){

    // Declaramos las variables necesarias para calcular el dano
    float ataque = 0, armadura = 0, vida = 0, dano = 0, danoFinal = 0;
    int nivel = 0;
    char critico;

    // Pedimos el ataque base del personaje
    printf("Introduce el dano del ataque personaje:\n");
    scanf("%f", &ataque);

    // Pedimos el nivel del personaje
    printf("Introduce el nivel del personaje:\n");
    scanf("%d", &nivel);

    // Pedimos la armadura y la vida del enemigo
    printf("Introduce la armadura y la vida del enemigo:\n");
    scanf("%f %f", &armadura, &vida);

    // Preguntamos si el golpe ha sido critico
    printf("El ataque ha sido critico (s/n): ");
    scanf(" %c", &critico);

    // Calculamos el dano aplicando el bonus del 5% por nivel
    dano = ataque * (1 + nivel * 0.05);

    // Si el ataque es critico, duplicamos el dano
    if(critico == 's'){
        dano = dano * 2;
    }

    // Calculamos el dano final teniendo en cuenta la armadura
    danoFinal = dano * 100 / (100 + armadura);

    // Mostramos el dano final con dos decimales
    printf("Dano final: %.2f\n", danoFinal);

    // Clasificamos el golpe segun el dano final
    if(danoFinal < 10){
        printf("Rasguno\n");
    }
    else if(danoFinal >= 10 && danoFinal < 50){
        printf("Golpe sólido\n");
    }else{
        printf("¡Devastador!\n");
    }

    // Comprobamos si el dano es suficiente para derrotar al enemigo
    if(danoFinal >= vida){

        // Si el dano es mayor o igual que la vida, el enemigo muere
        printf("Enemigo derrotado\n");

    }else{

        // Si sobrevive, calculamos y mostramos su vida restante
        printf("Vida restante: %.2f\n", vida - danoFinal);
    }

    return 0;
}
