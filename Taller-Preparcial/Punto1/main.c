#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
   printf("Que punto desea realizar\n");
   printf("1.Primer punto\n");
   printf("2.Segundo punto\n");
   printf("3.Tercer punto\n");
   printf("4.Cuarto punto\n");
   printf("5.Quinto punto\n");
   printf("6.Sexto punto\n");
   scanf("%d",&opcion);
   switch (opcion){
   case 1:
    printf("La diferencia entre el haga-mientras y el haga es:\n");
    printf("Que el primero realiza el sentencia de codigo y despues evalua la condicion\n");
    printf("y el segundo primero evalua la condicion y despeues realiza la sentencia de codigo\n");
    break;
   case 2:
    segundoPunto();
    break;
   case 3:
       tercerPunto();
    break;
   case 4:
    cuartoPunto();
   case 5:
    quintoPunto();
   case 6:
    sextoPunto();
   }
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
        printf("El numero es impar");
    }

}

void tercerPunto(){
    int opcion;
    float num1, num2, suma,resta,multiplicacion,division;
    printf("programa que ingrese dos numeros, y escoger la operación a realizar\n");
    printf("1.Suma\n");
    printf("2.Resta\n");
    printf("3.Multiplicacion\n");
    printf("4.Division\n");

    do{

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
    }

    }while(opcion<=1 | opcion>5);
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
        printf("Distintos");
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
    printf("El salario por haber trabajado es de: %f",horas);

    }
    else{
        horas=4.833*horasTr;
        printf("El salario por haber trabajado es de: %f",horas);
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
         printf("%d",residuo);
        }
    printf("%d",num2);



}
