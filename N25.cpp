#include<stdio.h>
#include<conio.h>
#include<math.h>
int cubo(int);
main(){
   int valor;
   printf("Igrese un numero ");
   scanf("%d",&valor);
   printf("El cubo de %d es: %d",valor,cubo(valor));
   getch();
}

int cubo(int num)
{
   return pow(num,3); //directiva para elevar un numero contenida en la libreria math.h
}
