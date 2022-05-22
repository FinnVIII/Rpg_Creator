#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Manual.h"

int main(void){
    setlocale(LC_ALL,"portuguese");

    for(int i=0;i<NUM_PALAVRAS;i++){
       printf("%s, ",tipos[i]);
    }
    printf("\n");
    for(int i=0;i<NUM_PALAVRAS;i++){
       printf("%s, ",Nomes_M[i]);
    }
    printf("\n");
    for(int i=0;i<NUM_PALAVRAS;i++){
       printf("%s, ",Nomes_F[i]);
    }
}
