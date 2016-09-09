#include<stdio.h>
#include<conio.h>
main(){
       int n, i, voto[6]={0}; //2 5 5 4 3 4 4 5 1 2 4 3 1 2 4 5 0
       for(i=1;i<=5;i++)
           printf("Candidato %d: \n",i);
       printf("Vote por el candidato 0 para terminar\n");
       while(voto[0]==0)
       {
           printf("Voto para el candidato numero: ");
           scanf("%d",&n);
           if(n<0 || n>5)
               printf("Candidato no encontrado\n");
           else
               voto[n]++;
       }
       for(i=1;i<=5;i++)
       {
           printf("\nEl candidato %d tuvo %d votos",i,voto[i]);
       }
       getch();
}
