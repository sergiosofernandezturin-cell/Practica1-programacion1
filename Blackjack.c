//Sergio Fernandez Turin Blackjack
#include <stdio.h>

int main(){
    char valor;
    char palo;
    int puntos = 0;
    int True = 0;
    int True2 = 0;
	//pedimos el palo y el valor
    printf("Escribe el valor y el palo de la carta en mayusculas:\n");
    scanf(" %c %c", &valor, &palo);
	//comprobamos si es un valor valido
    if((valor >= '2' && valor <= '9') || valor == 'A' || valor == 'T' || valor == 'J' || valor == 'K' || valor == 'Q'){
        True = 1;
    }
	// comprobamos si es un palo valido
    if(palo == 'D' || palo == 'P' || palo == 'C' || palo == 'T'){
        True2 = 1;
    }
	//si es correcto estra en el el if
    if(True == 1 && True2 == 1){
		//comprobamos el color
        if(palo == 'C' || palo == 'D'){
            printf("Tu carta es roja\n");
        }else{
            printf("Tu carta es negra\n");
        }
		// observamos si es una figura o no 

        if(valor == 'J' || valor == 'Q' || valor == 'K'){
            printf("Es figura\n");
        }else{
            printf("No es figura\n");
        }
		//asignamos los valores de las cartas

        if(valor == 'A'){
            puntos = 11;
        }else if(valor == 'T' || valor == 'J' || valor == 'Q' || valor == 'K'){
            puntos = 10;
        }else{
			//combertimos el char en un in con el '0' si no es una figura
            puntos = valor - '0';
        }
		//imprimimos los puntos 
        printf("Los puntos que tienes son %d\n", puntos);

    }else{
        printf("Carta inventada, trampa!\n");
    }

    return 0;
}
