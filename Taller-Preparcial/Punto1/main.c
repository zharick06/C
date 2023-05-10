#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifdef _WIN32
  #include<windows.h>
#endif

int main(){
   int opcion;
   do{
    printf("Que punto desea realizar\n");
   printf("1.Primer punto\n");
   printf("2.Segundo punto\n");
   printf("3.Tercer punto\n");
   printf("4.Cuarto punto\n");
   printf("5.Quinto punto\n");
   printf("6.Sexto punto\n");
   printf("7.Septimo punto\n");
   printf("8.Octavo punto\n");
   printf("9.Noveno punt0\n");
   printf("10.Decimo punto\n");
   printf("11. Salir\n");

   scanf("%d",&opcion);

   switch (opcion){
   case 1:
    printf("La diferencia entre el haga-mientras y el haga es:\n");
    printf("Que el primero realiza el sentencia de codigo y despues evalua la condicion\n");
    printf("y el segundo primero evalua la condicion y despeues realiza la sentencia de codigo\n");
    break;
   case 2:
       consoleClean();
    segundoPunto();
    break;
   case 3:
       consoleClean();
       tercerPunto();
    break;
   case 4:
       consoleClean();
    cuartoPunto();
    break;
   case 5:
       consoleClean();
    quintoPunto();
    break;
   case 6:
       consoleClean();
    sextoPunto();
    break;
   case 7:
       consoleClean();
    septimoPunto();
    break;
   case 8:
       consoleClean();
    octavoPunto();
    break;
   case 9:
       consoleClean();
    novenoPunto();
    break;
   case 10:
       consoleClean();
    decimoPunto();
    break;
   case 11:
       consoleClean();
    printf("Bay baby\n");
    break;
   default:
    consoleClean();
    printf("!!!!!!Pana esa no es una opcion\n");
    break;
   }
   }while(opcion!=11);


   return 0;
}

void segundoPunto(){
    int numeroI, par;
    printf("programa que al ingresar un numero se muestra si es numero par o impar\n");
    scanf("%d",&numeroI);
    par=numeroI%2;
    if(par==0){
        printf("El numero es par\n");

    }
    else{
        printf("El numero es impar\n");
    }

}

void tercerPunto(){
    int opcion;
    float num1, num2, suma,resta,multiplicacion,division;
    printf("programa que ingrese dos numeros, y escoger la operación a realizar\n");

    do{
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");

      scanf("%d", &opcion);
      switch (opcion){
    case 1:
        printf("Ingrese el primer numero\n");
        scanf("%f",&num1);
        printf("Ingrese el segundo numero\n");
        scanf("%f",&num2);
        suma=num1+num2;
        printf("La suma de los 2 numeros es: %f \n", suma);
        break;
    case 2:
        printf("Ingrese el primer numero\n");
        scanf("%f",&num1);
        printf("Ingrese el segundo numero\n");
        scanf("%f",&num2);
        resta=num1-num2;
        printf("La suma de los 2 numeros es: %f \n", resta);
        break;
    case 3:
        printf("Ingrese el primer numero\n");
        scanf("%f",&num1);
        printf("Ingrese el segundo numero\n");
        scanf("%f",&num2);
        multiplicacion=num1*num2;
        printf("La suma de los 2 numeros es: %f \n", multiplicacion);
        break;
    case 4:
        printf("Ingrese el primer numero\n");
        scanf("%f",&num1);
        printf("Ingrese el segundo numero\n");
        scanf("%f",&num2);
        division=num1/num2;
        printf("La suma de los 2 numeros es: %f \n", division);
        break;
    default:
        printf("¡Opcion equivocada pa!, vuelve a ingresar una opcion:\n");
        printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        break;
    }

    }while(opcion>=1 | opcion<5);
}

void cuartoPunto(){
    int num1, num2,num3,sum1,sum2,sum3;
    printf("Dados tres números enteros, determinar si la suma de cualquier pareja de ellos es igual al tercer número. Si se cumpleesta condición, escribir “Iguales” y, en caso contrario, escribir “Distintos”.\n");
    printf("Ingrese el primer numero\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&num2);
    printf("Ingrese el tercer numero\n");
    scanf("%d",&num3);

    if(num1+num2==num3 | num1+num3==num3 | num2+num3==num3){
        printf("Iguales\n");
    }
    else{
        printf("Distintos\n");
    }
}

void quintoPunto(){
    float horas, horasTr, horasE;
    printf("Calcular el salario mensual de un empleado, sabiendo que éste se calcula en base a las horas semanales trabajadas y\n");
    printf("de acuerdo a un precio especificado por hora.\n");

    printf("Cuantas horas en toda la semana trabajo?\n");
    scanf("%f", &horasTr);

    if(horasTr>40){
    horasE=horasTr-40;
    horas=((horasE*4.833)*1.5)+(40*4.833);
    printf("El salario por haber trabajado es de: %f \n",horas);

    }
    else{
        horas=4.833*horasTr;
        printf("El salario por haber trabajado es de: %f \n",horas);
    }

}

void sextoPunto(){
    int numero,residuo, num2;
    printf("programa que al ingresar un número decimal, este calcule el equivalente binario.\n");
    printf("Ingrese el numero decimal que desea volver a binario\n");
    scanf("%d",&numero);
    num2=numero;
    while (num2>1){
         residuo=num2%2;
         num2=num2/2;

         printf("%d ",residuo);
        }
    printf("%d \n",num2);



}

void septimoPunto(){
    int ano;
    printf("programa que al ingresar un año e indicar si es o no un año bisiesto.\n");
    printf("ingrese el año\n");
    scanf("%d",&ano);

    if (ano%400==0){
        printf("El año es bisiesto\n");
    }
    else if(ano%4==0 & ano%100 !=0){
        printf("El año es bisiesto\n");
    }
    else {
        printf("El año no es bisiesto\n");
    }

}

void octavoPunto(){
    int minutos, hora, minutosT;
    printf("Programa que al ingresar la hora y los minutos te diga si es tarde, noche o mañana\n");
    do {
    printf("Ingrese la hora\n");
    scanf("%d", &hora);
    printf("Ingrese los minutos\n");
    scanf("%d",&minutos);
    minutosT=(hora*60)+minutos;
    }while(hora>=0 & hora<=23 & minutos>=0 & minutos<=59);


    if(minutosT<=840 & minutosT>=450){
        printf("Buenos dias\n");
    }
    else if( minutosT>=841 & minutosT<=1230){
        printf("Buenas tardes\n");
    }
    else if(minutosT>=1231 & minutosT<=1439){
        printf("Buenas noches\n");
    }
    else if(minutosT>=0 & minutosT<=449){
        printf("Buenas noches\n");
    }
    else{
        printf("hora mala\n");
    }


}

void novenoPunto(){
    double notas[3],sumt,promedio, notafal;
    printf("programa que le calcule cual es la mínima nota aprobatoria.\n" );

    for(int i=0; i<=3; i++ ){
       do{
                printf("Ingrese la nota %d \n",i);
                scanf("%lf", &notas[i]);

                if(notas[i]>=0 | notas[i]<=5)
                    {
                        sumt=notas[i]+sumt;
                    }
                else{
                        printf("Nota erronea\n");
                    }
         } while(notas[i]<=0 | notas[i]>=6);
    }
     notafal=15-sumt;
     promedio=(sumt+notafal)/5;

     if(notafal>5){
            printf("Su nota minima para poder pasar la materia es: %lf \n",notafal);
        printf("!!!!Estas frito en programación1. Debes repetirla!\n");
     }

     else{
        printf("Su nota minima para poder pasar la materia es: %lf \n",notafal);
     }
     }

void decimoPunto(){
    int numero;
    double multiplo;
    printf("Programa para conocer el factorial de un numero entero\n");

    printf("Ingrese el numero que desa el factorial\n");
    scanf("%d",&numero);

    multiplo=1;

    for(int i=1; i<=numero; i++){
        multiplo=multiplo*i;
    }
    printf("El factorial: %d!= %lf \n",numero, multiplo);
}

void consoleClean(){
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}
