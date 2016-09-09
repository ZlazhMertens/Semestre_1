#include<stdio.h>
#include<conio.h>
main(){ //Metodo de la burbuja
       int temp,i,j,n=8, A[10]={10,8,4,7,5,2,20,9};
       for(i=0;i<n-1;i++){
           for(j=0;j<n-1;j++){
               if(A[j]>A[j+1]){
                   temp=A[j+1];
                   A[j+1]=A[j];
                   A[j]=temp;
               }
           }
       }
       for(i=0;i<10;i++)
           printf("%d ",A[i]);
       getch();
}
