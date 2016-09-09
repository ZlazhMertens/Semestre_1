#include<stdio.h>
#include<conio.h>
main()
{
      float Nom=0, SAL;
      int i;
      for(i=1;i<=15;i++)
      {
           printf("Dame el salario %d: ",i);
           scanf("%f",&SAL);
           Nom+=SAL;
      }
      printf("Su nomina es: %.2f", Nom);
      getch();
}
