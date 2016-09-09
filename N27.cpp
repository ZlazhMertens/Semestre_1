#include<stdio.h>
#include<conio.h>
main(){
    int n, i, c=0, A[10]={5,8,3,8,10,2,1,7,8,2};
    printf("Dame un numero: ");
    scanf("%d", &n);
    for(i=0;i<10;i++){
       if(A[i]==n)
           c++;
    }
    printf("El numero %d se repitio %d veces", n, c);
    getch();
}
