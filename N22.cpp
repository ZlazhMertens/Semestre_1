#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
      long int i,j=1,k=0,n;
      printf("Dame las veces a realizar la suceción de Fibonacci:  ");
      scanf("%d",&n);
      printf("%20d\n",k);
      printf("%20d\n",j);
      for(i=0;i<=n;i++){
        printf("%20d\n",k+j);
          if(i%2==0)
          {
            k+=j;
          }
          else
          {
            j+=k;
          }
        Sleep(500);
      }
      getch();
}
