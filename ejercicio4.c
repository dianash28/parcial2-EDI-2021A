/*. Escribir un programa que lea una arreglo bidimensional de M x N en una función y en otra función encuentre el 
elemento mayor de la matriz indicando en que posición (renglon - columna) lo encontró.
*/
#include <stdio.h>
#define R 2
#define C 2

int main ()
{ int matriz[R][C];
  int i,j ;
  int nummayor=0;
  int posicion;
   for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
         printf("matriz[%d][%d]", i,j);
         scanf("%d",&matriz [i][j]);
     }
   }
     nummayor=matriz[0][0];
   for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
        if(nummayor<matriz[i][j])
        {
           nummayor=matriz[i][j];
        }
     }
        printf("el mayor es %d en la posicion %d ",nummayor,matriz[i][j]);
        scanf("%d %d",nummayor,&matriz[i][j]);    
   }
   fflush(stdin);
 getchar();
  return 0;
}
//aqui solo me compara los dos primeros terminos.
//y la posicion me la pone mal.