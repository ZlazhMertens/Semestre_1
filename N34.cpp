#include<stdio.h>
#include<conio.h>
main(){
    int A[4][4]={
                 {1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}
                };
    int i,j;
    printf("\n\n");
    for(i=0;i<4;i++){
        printf("       ");
        for(j=0;j<4;j++)
            printf("%5d ", A[i][j]);
        printf("\n\n");}
    getch();
}
