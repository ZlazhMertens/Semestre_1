#include<stdio.h>
#include<conio.h>
main(){ //Apuntadores
    int x=15, y=87;
    int *xp, *yp; //Apuntadores para x y y
    *xp=x;
    *yp=y;
    printf("Direccion de memoria x: %d\n", &xp);
    printf("Valor de apuntador a x: %d\n", *xp);
    printf("Direccion de memoria y: %d\n", &yp);
    printf("Valor de apuntador a y: %d", *yp);
    getch();
}
