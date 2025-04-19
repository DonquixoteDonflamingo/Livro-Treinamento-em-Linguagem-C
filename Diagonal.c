/* Diagonal.c
   Desenha uma linha diagonal na tela */
#include <stdio.h>
#include <stdlib.h>

int main(){
int lin, col;

for (lin = 1; lin < 25; lin++){
    for (col = 1; col < 25; col++){
        if (lin == col){
            printf("\xDB");
        }
        else{
            printf("\xB0");
        }
    }
    printf("\n");
}
    system("PAUSE");
return 0;
}