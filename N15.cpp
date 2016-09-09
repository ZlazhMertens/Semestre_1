#include<stdio.h>
#include<conio.h>
main()
{
      int i=0, x=0;
      printf("Dame un numero: ");
      scanf("%d",&x);
      while(i<11)
      {
             printf("\n%2d * %d = %d", x,i,i*x);
             i++;
      }
      getch();
}
