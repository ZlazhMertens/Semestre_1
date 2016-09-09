#include<stdio.h>
#include<conio.h>

main()
{
     int clv=0; //clv = clave del empleado
     float sue1=0,sue2=0,sue3=0,sue4=0,sue5=0,sue6=0; //sueldo
     float  ingsemes=0, inganual=0;
     printf("escribe la clave de tu empleado:  ");
     scanf("%d", &clv);
     puts("Ingrese los sueldos del empleado");
     scanf("%.2f %.2f %.2f %.2f %.2f %.2f",&sue1,&sue2,&sue3,&sue4,&sue5,&sue6);
     inganual= sue1+sue2+sue3+sue4+sue5+sue6;
     ingsemes= inganual/6;
     printf("El sueldo anual del empleado con clave %d es: %.2f", clv, inganual);
     printf("\nEl sueldo semestral del empleado con clave %d es: %.2f", clv, ingsemes);
     getch();
}
