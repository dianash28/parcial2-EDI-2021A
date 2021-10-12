/*. Escribir un programa que lea una arreglo bidimensional de M x N en una función y en otra función encuentre el 
elemento mayor de la matriz indicando en que posición (renglon - columna) lo encontró.
*/
#include <stdio.h>
#define R 2
#define C 2
void capturaMatriz(int m[R][C]);
int buscarMayor(int m[R][C],int *i,int *j);
int main ()
{ 
  int matriz[R][C];
  int i,j ;
  int nummayor=0;
  int posicion;

   capturaMatriz(matriz);
   nummayor=buscarMayor(matriz,&i,&j);

     
   printf("el mayor es %d en la posicion [%d][%d] ",nummayor,i,j);
   scanf("%d %d",nummayor,&matriz[i][j]);  
   fflush(stdin);
 getchar();
  return 0;
}
int buscarMayor(int m[R][C],int *i,int *j)
{
  int nummayor=m[0][0];
  int ren,col;
  for (ren=0; ren<R; ren++ )
   {
     for (col=0; col<C; col++ )
     {
        if(nummayor<m[ren][col])
        {
           nummayor=m[ren][col];
           *i=ren;
           *j=col;
        }
      }  
   }
   return nummayor;    
}
void capturaMatriz(int m[R][C])
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
