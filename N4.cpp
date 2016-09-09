#include<stdio.h>
#include<conio.h>

main()
{
      float A=0, B=0;
      printf("Dame un numero: ");
      scanf("%f", &A);
      printf("Dame otro numero: ");
      scanf("%f", &B);
      if(A==B)
      printf("%.2f es igual a %.2f", A,B);
      else
      {
      if(A>B)
      printf("%.2f es mayor a %.2f", A,B);
      else
      printf("%.2f es mayor a %.2f", B,A);
      }
      getch();
}
