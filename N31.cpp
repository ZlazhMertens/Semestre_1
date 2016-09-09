#include<stdio.h>
#include<conio.h>
main(){
       int i, A[10]={1,2,3,4,5,6,7,8,9,10};
       for(i=9;i>=0;i--)
           printf("%d ", A[i]); //Impresion inversa de un vector
       getch();
}
