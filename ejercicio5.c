/* Escribir un programa que lea una matriz de N x N, e indique si la matriz es simétrica o no.
 Una matriz es simétrica si matriz[i][j] es igual a matriz[j][i], para todo i, j < N.
 */
#include <stdio.h>
#define R 2
#define C 2

int main ()
{ int matriz[R][C];
  int i,j ;
  for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
         printf("matriz[%d][%d]", i,j);
         scanf("%d",&matriz [i][j]);
     }
   }
   /*for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
         scanf("%d",&matriz [i][j]);
     }
         printf("\n");
   }
   */
    
        for (i=0; i<R; i++ )
       {
           for (j=0; j<C; j++ )
            {
              if(matriz[i][j]==matriz[j][i])
              {
                 printf("si es una matriz simetrica");
              }
              else 
                 printf("no es una matriz simetrica ");

            }
       
              
       }
    

fflush(stdin);
 getchar();
   return 0;
}   
//maestra aqui se repiten, no salen del condicional.