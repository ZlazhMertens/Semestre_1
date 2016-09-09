#include<stdio.h>
#include<conio.h>
main()
{
      int i=0;
      
      ciclo:
          i++;
          printf("%d ", i);
          if(i<10)
          goto ciclo;
      getch();
}
