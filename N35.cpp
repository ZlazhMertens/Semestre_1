#include<stdio.h>
#include<conio.h>
main(){
    int A[10][10];
    int i,j,n,m;
    printf("Ingrese las filas de la matriz: ");
    scanf("%d",&n);
    printf("Ingrese las columnas de la matriz: ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("X[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        printf("       ");
        for(j=0;j<m;j++)
            printf("%5d ", A[i][j]);
        printf("\n\n");}
    getch();
}
