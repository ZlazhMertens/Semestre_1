#include<stdio.h>
#include<conio.h>
int valor;
int cubo(void);
int valor_cubo=10; //Declaracion de variable gloobal
main(){
  for(valor=1;valor<=10;valor++){
    int valor_cubo=5; //Declaracion de variable local
    printf("%d | ",valor_cubo);
    printf("%d | ",::valor_cubo); // los :: hacen referencia a la variable global
    valor_cubo=cubo();
    printf("El cubo de %d es: %d\n",valor,valor_cubo);
  }
  getch();     
}

int cubo(){
  return valor*valor*valor;
}
