/*
Ejercicio 3. Escribir un programa que lea una arreglo bidimensional de M x N, e imprima su transpuesta.
*/
#include <stdio.h>
#define R 2
#define C 2

int main ()

{
     int matriz[R][C];
     int i,j ;
    
     
   for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
         printf("matriz[%d][%d]", i,j);
         scanf("%d",&matriz [i][j]);

     }
   }
   

  printf("matriz transpuesta");
  for(i=0; i<R; i++ )
    {
      for (j=0; j<C; j++ )
      {
       printf("%d",matriz[j][i],"");
      }
      printf("\n");
   
    }
  fflush(stdin);
 getchar();
 return 0;

}