#include<stdio.h>
#include<conio.h>

main()
{
      float Prom=0;
      printf("Asigna el promedio del alumno");
      scanf("%f", &Prom);
      if (Prom>=6)
      puts("Aprobado");
      else
      puts("Reprobado");
      getch();
}
