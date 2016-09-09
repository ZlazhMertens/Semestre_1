#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      for(i=0;i<=20;i++){
        if(i%2!=0)
          continue;
          printf("%d ",i);
      }
      getch();
}
