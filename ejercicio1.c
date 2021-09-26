/*Ejercicio 1. Escriba un programa en C que dada una matriz de flotantes de M renglones x N columnas,
 calcule los promedios de los valores de cada columna de la matriz.
Capture los datos por renglón.
Imprima los promedios de cada columna. Ejemplo: Promedio Columna 1: 16.7
*/

#include <stdio.h>
#define R 2
#define C 2

int main ()

{
     float matriz[R][C];
     int i,j ;
     float suma=0;
     float promedio;

 for (i=0; i<R; i++ )
 {
     for (j=0; j<C; j++ )
     {
         printf("matriz[%d][%d]", i,j);
         scanf("%f",&matriz [i][j]);

     }

 }
 for (i=0; i<C; i++ )
 {
     suma=0;
     

     for (j=0; j<R; j++ )
     {
       suma=suma+matriz[j][i];
       promedio=suma/R; 
       
     }
     printf("suma de la columna: %d:\n %f \npromedio \n:%f", i, suma, promedio);
     printf("\n");
       
 }

  fflush(stdin);
    getchar();
 return 0;
}

