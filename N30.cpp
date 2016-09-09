#include<stdio.h>
#include<conio.h>
main(){
    int A[10]={1,5,8,6,9,7,5,9,7,10};
    int i,suma=0;
    for(i=0;i<10;i++)
        suma+=A[i];
    printf("El promedio del arreglo es: %d", suma/10);
    getch();
}
