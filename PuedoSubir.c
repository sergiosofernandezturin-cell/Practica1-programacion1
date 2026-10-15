// Sergio Fernandez Turin ¿puedo subir?
#include <stdio.h>

int main(){
    int edad = 0;
    int altura = 0;
    int acompañado = 0;
    int espalda = 0;

    // Pedimos los datos
    printf("Introduce tu edad:\n");
    scanf("%d", &edad);

    printf("Introduce tu altura en cm:\n");
    scanf("%d", &altura);

    printf("Vas acompañado de un adulto (1/0):\n");
    scanf("%d", &acompañado);

    printf("Tienes problemas de espalda (1/0):\n");
    scanf("%d", &espalda);

    // 1. Montaña rusa
    // Altura >= 140, sin problemas de espalda
    // Si es menor de 14 años, necesita acompañante
    if(altura >= 140 && espalda == 0){
		if(edad >= 14 || acompañado == 1){
			printf("Montaña rusa: Si\n");
		}
	}
    }else{
        printf("Montaña rusa: No\n");
    }

    // 2. Casa del terror
    // Tener 12 años o mas, o ir acompañado
    if(edad >= 12 || acompañado == 1){
        printf("Casa del terror: Si\n");
    }else{
        printf("Casa del terror: No\n");
    }

    // 3. Tazas giratorias
    // Altura entre 90 y 190 cm incluidos
    if(altura >= 90 && altura <= 190){
        printf("Tazas giratorias: Si\n");
    }else{
        printf("Tazas giratorias: No\n");
    }

    // 4. Entrada gratis
    // Menor de 4 años o 65 años o mas
    if(edad < 4 || edad >= 65){
        printf("Entrada gratis: Si\n");
    }else{
        printf("Entrada gratis: No\n");
    }

    return 0;
}
