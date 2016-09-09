#include<stdio.h>
#include<conio.h>
main(){
       int i, A[10]={1,-2,3,-4,5,6,7,-8,9,-10};
       int B[10],cont=0;
       for(i=0;i<10;i++){
           if(A[i]>0){
               B[cont]=A[i];
               cont++;
           }
       }
       for(i=0;i<cont;i++)
           printf("%d ",B[i]);
       getch();
}
