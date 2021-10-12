/*
Ejercicio 3. Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.
*/
#include <stdio.h>
#define R 2
#define C 2
void capturamatriz(int m[R][C]);
void imprimeTranspuesta(int m[R][C]);
int main ()

{
     int matriz[R][C];
     int i,j ;
    
     
   capturamatriz(matriz);
   imprimeTranspuesta(matriz);
   

 /* printf("matriz transpuesta");
  for(i=0; i<R; i++ )
    {
      for (j=0; j<C; j++ )
      {
       printf("%d",matriz[j][i],"");
      }
      printf("\n");
   
    }
    */
  fflush(stdin);
 getchar();
 return 0;

}
void capturamatriz(int m[R][C])
{
  int i,j;
  for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
         printf("matriz[%d][%d]", i,j);
         scanf("%d",&m[i][j]);

     }
   }
}

void imprimeTranspuesta(int m[R][C])
{
  int i,j;
   for(i=0; i<R; i++ )
    {
      for (j=0; j<C; j++ )
      {
       printf("%d ",m[j][i],"");
      }
      printf("\n");
   
    }

}