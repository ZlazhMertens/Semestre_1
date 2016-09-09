#include<stdio.h>
#include<conio.h>
main()
{
      int x,i, bandera=1;
      printf("Dame un numero ");
      scanf("%d",&x);
      for(i=2;i<x;i++){
         if(x%i==0)
         {  bandera=0; break;}
      }
      if(bandera==1)
        printf("%d es primo",x);
      else
        printf("%d no es primo",x);
      getch();
}
