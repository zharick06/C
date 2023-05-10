#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592
int main()
{
    int opcion;
    printf("Ejemplos del profesor \n");
    printf("Ejemplo 1\n");
    printf("Ejemplo 2\n");
    printf("Ejemplo 3\n");
    scanf("%d",&opcion);

    switch (opcion){
      case 1:
       ejemplo1();
       break;
       case 2:
       ejemplo2();
       break;
       case 3:
       ejemplo3();
       break;
       default:
        printf("Opcion erronea");
        break;
       }
       }

void ejemplo1(){
    float area, radio;
    printf( "\n Introduzca radio: " );
    scanf( "%f", &radio );
    area = 3.141592 * radio *
    radio;
    printf( "\n El area de la circunferencia es: %.2f", area );
    printf( "\n\n Pulse una tecla para salir..." );
    getch(); /* Pausa */
}


void ejemplo2(){
    float area, radio;
    printf( "\n Introduzca radio: " );
    scanf( "%f", &radio );
    area = PI * pow( radio, 2 );
    printf( "\n El area de la circunferencia es: %.2f", area );
    printf( "\n\n Pulse una tecla para salir..." );
    getch(); /* Pausa */
}

void ejemplo3(){
    float radio;
    printf( "\n Introduzca radio: " );
    scanf( "%f", &radio );
    printf( "\n El area de la circunferencia es: %.2f", PI *
    pow( radio, 2 ) );
    printf( "\n\n Pulse una tecla para salir..." );
    getch(); /* Pausa */

}
