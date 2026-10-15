// Sergio fernandez turin Domótica con bits
#include <stdio.h>

void imprimirBinario(unsigned char numero) {
    int i;

    for (i = 7; i >= 0; i--) {
        printf("%d", (numero >> i) & 1);
    }
}

int main(){

    unsigned char estado = 0;
    unsigned char resultado = 0;
    int inicial = 0;
    int encender = 0;
    int apagar = 0;
    int invertir = 0;

    // Pedimos el estado inicial
    printf("Estado inicial (0-255): ");
    scanf("%d", &inicial);

    // Comprobamos que sea valido
    if(inicial < 0 || inicial > 255){
        printf("Estado inicial no valido\n");
        return 0;
    }

    estado = inicial;

    // Mostramos el estado inicial en decimal y binario
    printf("\nEstado inicial: %d\n", estado);
    printf("Binario: ");
	imprimirBinario(estado);
	printf("\n");

    // Pedimos las tres luces
    printf("\nLuz a encender (0-7): ");
    scanf("%d", &encender);

    printf("Luz a apagar (0-7): ");
    scanf("%d", &apagar);

    printf("Luz a invertir (0-7): ");
    scanf("%d", &invertir);

    // Validamos las tres luces antes de modificarlas
    if(encender < 0 || encender > 7 ||
       apagar < 0 || apagar > 7 ||
       invertir < 0 || invertir > 7){

        printf("Error: numero de luz no valido\n");
        return 0;
    }

    // Encendemos la luz usando OR
    resultado = estado | (1 << encender);
    estado = resultado;

    printf("\nLuz %d encendida\n", encender);
    printf("Decimal: %d\n", estado);
    printf("Binario: ");
	imprimirBinario(estado);
	printf("\n");

    // Apagamos la luz usando AND y NOT
    resultado = estado & ~(1 << apagar);
    estado = resultado;

    printf("\nLuz %d apagada\n", apagar);
    printf("Decimal: %d\n", estado);
    printf("Binario: ");
	imprimirBinario(estado);
	printf("\n");
    // Invertimos la luz usando XOR
    resultado = estado ^ (1 << invertir);
    estado = resultado;

    printf("\nLuz %d invertida\n", invertir);
    printf("Decimal: %d\n", estado);
    printf("Binario: ");
	imprimirBinario(estado);
	printf("\n");

    // Comprobamos si la luz 3 del salon esta encendida
    if(estado & (1 << 3)){
        printf("\nLa luz del salon esta encendida\n");
    }else{
        printf("\nLa luz del salon esta apagada\n");
    }

    return 0;
}

