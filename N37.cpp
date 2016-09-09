#include<stdio.h>
#include<conio.h>
main(){
       int x=17,y;
       int *p;
       p=&x;
       printf("el valor es %d \n", *p); //Imprime 17
       y=*p+3;
       printf("el valor es %d", y);
       getch();
}
