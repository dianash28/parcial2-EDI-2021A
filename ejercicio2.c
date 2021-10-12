#include <stdio.h>
/* Escribir un programa en C que genere una matriz de N x N y la llene con 0 
excepto la diagonal principal que deberá tener 1.
*/
#define R 10
#define C 10
int main ()
{  

     int i,j ;
    
     int  matriz[R][C];
    
       
 
 
   for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     {
        if (i==j)
         matriz[i][j]=1;
        else
          matriz[i][j]=0; 
     }   
   }
   
   for (i=0; i<R; i++ )
   {
     for (j=0; j<C; j++ )
     { 
        printf("%d  ",matriz [i] [j]);
        //scanf("%d",&matriz [i][j]);
     }
     printf("\n");
   }
 
 
 

 fflush(stdin);
 getchar();
 return 0;
}