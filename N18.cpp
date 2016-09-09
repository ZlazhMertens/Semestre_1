#include<stdio.h>
#include<conio.h>
main()
{
      int rep=0, apr=0, cal=0, i=0, n=0;
      printf("Dame el numero de calificaciones a ingresar: ");
      scanf("%d",&n);
      for (i=0;i<n;i++)
      {
        do{
          if(cal<0 || cal>10)
            printf("Valor incorrecto\n");
          printf("Dame la calificacion: ");
          scanf("%d",&cal);
        } while(cal<0 || cal>10);
        if(cal>5)
          apr++;
        else
          rep++;
      }
      printf("\n%d personas estan aprobadas", apr);
      printf("\n%d personas estan reprobadas", rep);
      getch();
}
