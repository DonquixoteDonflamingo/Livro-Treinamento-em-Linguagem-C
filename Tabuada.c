/* Tabuada_comentada.c
 * Imprime as tabuadas do 2 ao 9 em duas seções de quatro colunas cada,
 * reutilizando laços e fórmulas para evitar duplicação de código.
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
     int i, j, k;
 
     // Limpa a tela (funciona em Windows). Se preferir portabilidade, pode remover.
     system("cls");
 
     /* Laço externo: percorre duas "páginas" (k = 0 e k = 1)
      * - k = 0: imprime tabuadas de 2, 3, 4 e 5
      * - k = 1: imprime tabuadas de 6, 7, 8 e 9
      * A cada iteração, deslocamos o intervalo base em 4 unidades: 4*k.
      */
     for (k = 0; k <= 1; k++) {
         printf("\n");  // Espaço antes do cabeçalho
 
         /* Cabeçalho das colunas de tabuadas:
          * i varia de 1 a 4, gerando quatro títulos de coluna.
          * A expressão (i + 4*k + 1) ajusta:
          * - para k=0: valores 2,3,4,5
          * - para k=1: valores 6,7,8,9
          */
         for (i = 1; i <= 4; i++) {
             int base = i + 4 * k + 1;
             printf("TABUADA DO %3d\t", base);
         }
         printf("\n\n");  // Duas quebras de linha antes dos resultados
 
         /* Linhas de resultados: multiplica cada base pelo multiplicador i (1 a 9)
          * - i: linha atual (1 a 9)
          * - j: base da tabuada (2+4*k a 5+4*k)
          */
         for (i = 1; i <= 9; i++) {
             for (j = 2 + 4 * k; j <= 5 + 4 * k; j++) {
                 // Exibe: base x multiplicador = produto, com formatação alinhada
                 printf("%2d x%3d = %3d\t", j, i, j * i);
             }
             printf("\n");  // Fim de cada linha de resultados
         }
     }
 
     // Pausa para o usuário ver o resultado (Windows)
     system("PAUSE");
     return 0;
 } 