#include<stdio.h>
#include<conio.h>
main()
{
      int pais;
      puts("1: Francia");
      puts("2: España");
      puts("3: Mexico");
      printf("Ingrese país a consultar: ");
      scanf("%d",&pais);
      switch(pais)
      {
        case 1: printf("Usted ha elegido el valor de Francia"); break;
        case 2: printf("Usted ha elegido el valor de España"); break;
        case 3: printf("Usted ha elegido el valor de Mexico"); break;
        default: printf("Usted no ha elegido alguna opcion"); break;
      }
      getch();
}
