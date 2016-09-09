#include<stdio.h>
#include<conio.h>
main(){
    int x=3,y=7,z[5]={2,4,6,8,10};
    int *ix; //Apuntador entero
    *ix=x; //apunta a x
    y=*ix; //y toma el valor del apuntador ix
    *ix=1; // Se modifica x, ahora vale 1
    printf("%d\n",&ix); //Direccion de memoria
    printf("%d\n",y);
    printf("%d\n",x);
    ix=&z[2];
    y=*ix;
    *ix=15;
    printf("%d\n",&ix); //Direccion de memoria
    printf("%d\n",y);
    printf("%d\n",x);
    getch();
}
