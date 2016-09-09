#include<stdio.h>
#include<conio.h>
main()
{
      int s=0, sum=0;
      printf("Ingrese el sueldo: ");
      scanf("%d",&s);
      while(s != 0)
      {
        sum+=s;
        printf("Ingrese el sueldo: ");
        scanf("%d",&s);
      }
      
      printf("la suma del sueldo es: %d", sum);
      getch();
}
