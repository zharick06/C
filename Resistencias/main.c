#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resistencia,r2,d;
    int i,j,pf,sf,tf;
    printf("Calculadora de resistencias de 4 bandas a colores\n");
    printf("Ingrese el valor de la resistencia\n");
    scanf("%f",&resistencia);
    i=10;
    do
    {
    r2=pow(10,i);
    d=resistencia/r2;
    i--;
    }
    while(d<1.0);
    d=d*10;
    j=floor(d);
    pf=j/10;
    sf=j%10;
    tf=i;
    printf("\nPrimer franja\n");
    switch (pf)
    {
    case 0:
    printf("Negro");
    break;
    case 1:
    printf("Cafe");
    break;
    case 2:
    printf("Rojo");
    break;
    case 3:
    printf("Naranja");
    break;
    case 4:
    printf("Amarillo");
    break;
    case 5:
    printf("Verde");
    break;
    case 6:
    printf("Azul");
    break;
    case 7:
    printf("Violeta");
    break;
    case 8:
    printf("Gris");
    break;
    case 9:
    printf("Blanco");
    break;
    }
    printf("\nSegunda franja\n");
    switch (sf)
    {
    case 0:
    printf("Negro");
    break;

    case 1:
    printf("Cafe");
    break;
    case 2:
    printf("Rojo");
    break;
    case 3:
    printf("Naranja");
    break;
    case 4:
    printf("Amarillo");
    break;
    case 5:
    printf("Verde");
    break;
    case 6:
    printf("Azul");
    break;
    case 7:
    printf("Violeta");
    break;
    case 8:
    printf("Gris");
    break;
    case 9:
    printf("Blanco");
    break;
    }
    printf("\nTercer franja\n");
    switch (tf)
    {
    case 0:
    printf("Negro");
    break;
    case 1:
    printf("Cafe");
    break;
    case 2:
    printf("Rojo");
    break;
    case 3:
    printf("Naranja");
    break;
    case 4:
    printf("Amarillo");
    break;
    case 5:
    printf("Verde");
    break;
    case 6:
    printf("Azul");
    break;
    case 7:
    printf("Violeta");
    break;
    case 8:
    printf("Gris");
    break;
    case 9:
    printf("Blanco");
    break;
    }
    getch();
}
