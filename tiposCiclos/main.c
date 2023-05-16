#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option, number, cont,resulta;
    printf("Programa que muestra los primeros 10 numeros\n");
    printf("Ingrese de la manera en como quiere realizar la opcion\n");
    printf("1.literal.\n2.cliclo while\n3.ciclo do while\n4.ciclo For\n");
    scanf("%d",&option);



    switch(option){
      case 1:
          printf("Ingrese numero que desea saber la multiplicacion\n");
          scanf("%d",&number);
          printf("%d * 1 = %d \n",number,number*1);
          printf("%d * 2 = %d \n",number,number*2);
          printf("%d * 3 = %d \n",number,number*3);
          printf("%d * 4 = %d \n",number,number*4);
          printf("%d * 5 = %d \n",number,number*5);
          printf("%d * 6 = %d \n",number,number*6);
          printf("%d * 7 = %d \n",number,number*7);
          printf("%d * 8 = %d \n",number,number*8);
          printf("%d * 9 = %d \n",number,number*9);
          printf("%d * 10 = %d \n",number,number*10);
          break;
      case 2:
           printf("Ingrese numero que desea saber la multiplicacion\n");
          scanf("%d",&number);
          cont=1;
          while(cont<=10){

            printf("%d * %d = %d \n",number,cont,number*cont);
            cont++;
          }
          break;

      case 3:
          printf("Ingrese numero que desea saber la multiplicacion\n");
          scanf("%d",&number);
          cont=1;
        do{
            printf("%d * %d = %d \n",number,cont,number*cont);
            cont++;
        }while(cont<=10);
        break;

      case 4:
          printf("Ingrese numero que desea saber la multiplicacion\n");
          scanf("%d",&number);
        for(int i=1; i<=10; i++){
            printf("%d * %d = %d \n",number,i,number*i);

        }
        break;
      default:
        printf("papi opcion erronea!!!!!!\n");

        }


    return 0;
}
