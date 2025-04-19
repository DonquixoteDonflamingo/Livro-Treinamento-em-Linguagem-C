/* Natal.c
   Imprime uma árvore de Natal */
   #include <stdio.h>
   #include <stdlib.h>
   #include <conio.h>
   
   int main() {
       char sd, se;
       int i, k, j, m, n;
   
       system("cls");
       printf("\nSinal interno direito:\t");
       sd = getche();
       printf("\nSinal interno esquerdo:\t");
       se = getche();
   
       printf("\n\n");
   
       for (i = 0; i < 4; i++) {
           for (k = 1; k < 5; k++) {
               // Imprime espaços iniciais
               for (j = 1; j <= 40 - (2 * i + k); j++) {
                   printf(" ");
               }
               // Imprime a parte esquerda da árvore
               printf("/");
               // Imprime caracteres internos esquerdos
               for (m = 1; m < (2 * i + k); m++) {
                   printf("%c", se);
               }
               // Imprime caracteres internos direitos
               for (n = 1; n < (2 * i + k); n++) {
                   printf("%c", sd);
               }
               // Imprime a parte direita da árvore e nova linha
               printf("\\\n");
           }
       }
   
       // Imprime o tronco da árvore
       for (i = 0; i < 2; i++) {
           for (j = 0; j < 38; j++) {
               printf(" ");
           }
           printf("| |\n");
       }
       printf("\n");
   
       // Mensagem de Natal
       for (j = 0; j < 35; j++) printf(" ");
       printf("FELIZ NATAL\n");
       for (j = 0; j < 31; j++) printf(" ");
       printf("E UM PROSPERO 2026!\n");
   
       system("PAUSE");
       return 0;
   }