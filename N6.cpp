#include<stdio.h>
#include<conio.h>
main()
{
      int pais;
      puts("1: Francia");
      puts("2: Espa�a");
      puts("3: Mexico");
      printf("Ingrese pa�s a consultar: ");
      scanf("%d",&pais);
      if(pais==1)
        printf("Usted ha elegido el valor de Francia");
      else
        if(pais==2)
          printf("Usted ha elegido el valor de Espa�a");
        else
          if(pais==3)
            printf("Usted ha elegido el valor de Mexico");
          else
            printf("Usted no ha elegido alguna opcion");
      getch();
}
