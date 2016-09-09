#include<stdio.h>
#include<conio.h>
main(){
    unsigned char A[10]={'H','O','L','A',' ','M','U','N','D','O'};
    int i,n;
    printf("Ingrese la cantidad de valores del arreglo B: ");
    scanf("%d",&n);
    unsigned char B[n];
    fflush(stdin); //Limpieza
    for(i=0;i<n;i++)
    {
        printf("Ingrese el primer valor para B[%d]",i);
        scanf("%c",&B[i]);
        fflush(stdin); //Limpieza
    }
    printf("\n\n");
    for(i=0;i<10;i++)
    {
        printf("%c ",A[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%c ",B[i]);
    }
    getch();
}
