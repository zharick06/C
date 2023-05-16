#include <stdio.h>
#include <stdlib.h>

void segundoP(void);

int main()
{
  int option;
  printf("Ejercicios\n");
  printf("2.Segundo ejecicio\n3.Tercer ejercicio\n4.Cuarto punto\n");
  scanf("%d",&option);

  switch(option){
   case 1:

       break;
   case 2:
       segundoP();
    break;
  }
}
void segundoP(){
    double resis1, resis2,serie,paralelas;
    printf("programa que dado dos valores de resistencia diga cuál es el valor de la resistencia en serie y en paralelo.\n");
    printf("Ingrese la primera resistencia\n");
    scanf("%lf",&resis1);
    printf("Ingrese la segunda resistencia\n");
    scanf("%lf",&resis2);

    serie=resis1+resis2;
    paralelas=1/((1/resis1)+(1/resis2));

    printf("la suma de las resistencias en paralelo es: %lf y en serie es: %lf", paralelas, serie);
}
