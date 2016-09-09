#include<stdio.h>
#include<conio.h>
main()
{
      int x;
      printf("Dame un numero: ");
      scanf("%d",&x);
      if(x>0){
        if(x%2!=0)
          printf("El numero es positivo e impar");}
      else
        printf("El numero es negativo");
      getch();
}
