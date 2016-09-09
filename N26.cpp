#include<stdio.h>
#include<conio.h>
int suma(int,int);
int resta(int,int);
int multiplicacion(int,int);
float division(int,int);
main(){
    int n1, n2,op;
    printf("Ingrese el valor de N1: ");
    scanf("%d",&n1);
    printf("Ingrese el valor de N2: ");
    scanf("%d",&n2);
    printf("1: Suma\n2: Resta\n3: Multiplicacion\n4: Division");
    printf("\nElija una opcion: ");
    scanf("%d",&op);
    printf("El resultado es: ");
    switch(op)
    {
        case 1: printf("%d",suma(n1,n2)); break;
        case 2: printf("%d",resta(n1,n2)); break;
        case 3: printf("%d",multiplicacion(n1,n2)); break;
        case 4: printf("%.2f",division(n1,n2)); break;
        default: printf("Valor no valido"); break;
    }
    getch();
}

int suma(int n1, int n2){
    return n1+n2;
}

int resta(int n1, int n2){
    return n1-n2;
}

int multiplicacion(int n1, int n2){
    return n1*n2;
}

float division(int n1, int n2){
    return float(n1)/float(n2);
}
