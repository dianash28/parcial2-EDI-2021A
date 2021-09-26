#include <stdio.h>
/* Escribir un programa en C que genere una matriz de N x N y la llene con 0 
excepto la diagonal principal que deberá tener 1.
*/
#define RENGLO 2
#define COLUMNA 2
int main ()
{    
     int i,j ;
     int renglo, columna;
     int  matriz[RENGLO][COLUMNA];
    
       
 
 if (RENGLO==COLUMNA)
 {
   for (i=0; i<RENGLO; i++ )
   {
     for (j=0; j<COLUMNA; j++ )
     {
        if (i==j)
        matriz[i][j]=1;
        else matriz[i][j]=0;
        
     }   
   }
  printf("matriz[%d][%d]", i,j);
         scanf("%d",&matriz [i][j]);
 }
 else printf("esta no es una matriz cuadrada");

        
   

   fflush(stdin);
   getchar();
return 0;
}