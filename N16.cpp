#include<stdio.h>
#include<conio.h>
main()
{
      int s=0, sum=0;
      do
      {
        sum+=s;
        printf("Ingrese el sueldo: ");
        scanf("%d",&s);
      }
      while(s != 0);
      printf("la suma del sueldo es: %d", sum);
      getch();
}
