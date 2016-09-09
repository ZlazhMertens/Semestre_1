#include<stdio.h>
#include<conio.h>

main()
{
      float A=0,B=0,C=0;   //A=15, B=3, C=8
      printf("Dame el primer numero: ");
      scanf("%f", &A);
      printf("Dame el segundo numero: ");
      scanf("%f", &B);
      printf("Dame el tercer numero: ");
      scanf("%f", &C);
      if(A==B)
        if(B==C)
          printf("Los tres numeros son iguales");
        else
          if(B>C)
            printf("%.2f es el mayor de los numeros",B);
          else
            printf("%.2f es el mayor de los numeros",C);
      else
        if(B==C)
          if(A>B)
            printf("%.2f es el mayor de los numeros",A);
          else
            printf("%.2f es el mayor de los numeros",B);
        else
          if(A>B)
            if(A>C)
              printf("%.2f es el mayor de los numeros",A);
            else
              printf("%.2f es el mayor de los numeros",C);
          else
            if(B>C)
              printf("%.2f es el mayor de los numeros",B);
            else
              printf("%.2f es el mayor de los numeros",C);
        getch();
}
