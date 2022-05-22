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

   rand_tipo = rand() % qtd_tipos;
   rand_nomes_m = rand() % qtd_nomes_m;
   rand_nomes_f = rand() % qtd_nomes_f;
   //r = rand() % 6;
 
   for(int i=0;i<1;i++){
      printf("%s, ",tipos[rand_tipo]);
      printf("%s, ",Nomes_M[rand_nomes_m]);
      printf("%s \n\n",Nomes_F[rand_nomes_f]);
      
   }
}
