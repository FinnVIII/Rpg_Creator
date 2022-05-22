#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Manual.h"

int main(void){
    setlocale(LC_ALL,"portuguese");
    int r;
    srand(time(NULL));
    r = rand() % 7;
    if(r<1){
        r++;
    }

    for(int i=0;i<1;i++){
       printf("%s, ",tipos[r]);
       printf("%s, ",Nomes_M[r]);
       printf("%s \n\n",Nomes_F[r]);
    }
}
