#include<stdio.h>
#include<conio.h>
main()
{
      int OP, T=0;
      float RES;
      puts(" 1: t//5 \n 2: t^2 \n 3 y 4: (6*t)/2");
      printf("Dame un numero");
      scanf("%d",&T);
      printf("Dime la opcion");
      scanf("%d",&OP);
      switch(OP)
      {
        case 1: RES=T/5; break;
        case 2: RES= T*T; break;
        case 3:
        case 4: RES=6*T/2; break;
        default: RES=1; break;
      }
      printf("El resultado es: %.2f", RES);
      getch();
}
