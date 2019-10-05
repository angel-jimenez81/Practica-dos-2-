#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
char repeticion;
float a, b, c;
int opt;
do {
printf ("Elige una operacion:\n 1.-Suma \n 2.-Resta \n 3.-Multuplicacion \n 4.-Division \n");
scanf ("%d", &opt);
printf ("Introduce el primer valor \n");
scanf ("%f", &a);
printf ("Intoduce el segundo valor \n");
scanf("%f",&b);
switch (opt) {
case 1:
c=a+b;
break;

case 2:
c=a-b;
break;

case 3:
c=a*b;
break;

case 4:
while (b==0){
printf ("Elige un valor diferente a 0\n");
scanf ("%f", &b);
}
c=a/b;
break;

default:

printf ("Opcion invalida");
}
printf ("El resultado es: %f \n" , c);
printf ("¿Quieres hacer otra operacion?\n");
printf ("S N");
scanf ("%d",&b);
repeticion =getch();
}
while (repeticion=='S' || repeticion=='s');
return 0;
}
