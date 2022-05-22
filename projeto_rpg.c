#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "manual.h"


int main(void){
   setlocale(LC_ALL,"portuguese");
   int r;
   srand(time(NULL));
   
   int rand_tipo; 
   int rand_nomes_m;
   int rand_nomes_f;

   rand_tipo = rand() % QTD_TIPOS;
   rand_nomes_m = rand() % QTD_NOMES_M;
   rand_nomes_f = rand() % QTD_NOMES_F;
   
   //r = rand() % 6;
 
   for(int i=0;i<1;i++){
      printf("%s, ",tipos[rand_tipo]);
      printf("%s, ",Nomes_M[rand_nomes_m]);
      printf("%s \n\n",Nomes_F[rand_nomes_f]);
      
   }
}
