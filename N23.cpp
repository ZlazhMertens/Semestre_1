#include<stdio.h>
#include<conio.h>

main()
{
      int i, fact=1;
      printf("Dame un numero: ");
      scanf("%d",&i);
      for(i;i>0;i--)
      {
        fact*=i;
        if(i!=1)
        printf("%d * ",i);
        else
        printf("%d = ",i);
      }
      printf("%d",fact);
      getch();
}
