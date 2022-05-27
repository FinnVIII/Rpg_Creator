#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include "manual.h"
#include "Antecedente.h"

int main(void){
    setlocale(LC_ALL,"portuguese");

    int rand_tipo, rand_nomes_m, rand_nomes_f, rand_antecedente;
    int antec_pers=0, antec_ideal=0, antec_vinc=0, antec_defe=0, antec_tabe=0;
    int escolha_antec = 0, escolha_sexo = 0, escolha_nome = 0;
    char escolha_sex_tipo[100];
    time_t t;

    char antecedente[QTD_ANTECEDENTE][MAX_CARACTERES]={{"Acólito"},{"Artesão da Guilda"},{"Artista"},
                                          {"Charlatão"},{"Criminoso"},{"Eremita"},
                                          {"Forasteiro"},{"Herói do Povo"},{"Marinheiro"},
                                          {"Nobre"},{"Órfão"},{"Sábio"},
                                          {"Soldado"}};


    rand_tipo = rand() % (QTD_TIPOS -1);
    rand_nomes_m = rand() % (QTD_NOMES_M -1);
    rand_nomes_f = rand() % (QTD_NOMES_F -1);
    rand_antecedente = rand() % (QTD_ANTECEDENTE -1);

    srand((unsigned) time(&t));
    antecedentes_lista();

    antec_pers = rand() % 8;
    antec_ideal = rand() % 6;
    antec_vinc = rand() % 6;
    antec_defe = rand() % 6;
    antec_tabe = rand() % 20;
    escolha_nome = rand() % 5;
    escolha_antec = rand() % 2;
    escolha_sexo = rand() % 2;

    if(antec_pers<1){
        antec_pers++;
    }

    if(antec_ideal<1){
        antec_ideal++;
    }

    if(antec_vinc<1){
        antec_vinc++;
    }

    if(antec_defe<1){
        antec_defe++;
    }

    if(antec_tabe<1){
        antec_tabe++;
    }

    printf("%d \n",escolha_sexo);
    if(escolha_sexo == 0){
            printf("Nome: %s \n",Nomes_M[escolha_nome]);
        }
    else if(escolha_sexo == 1){
            printf("Nome: %s \n",Nomes_F[escolha_nome]);
        }

    if(antecedente[escolha_antec] == antecedente[0]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", acolito.personalidade[antec_pers]);
            printf("ideal: %s \n", acolito.ideal[antec_ideal]);
            printf("vinculo: %s \n", acolito.vinculo[antec_vinc]);
            printf("defeito: %s \n", acolito.defeito[antec_defe]);
            printf("tabela_extra: %s \n", acolito.tabela_extra[antec_ideal]);
        }
    if(antecedente[escolha_antec] == antecedente[1]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", artesao.personalidade[antec_pers]);
            printf("ideal: %s \n", artesao.ideal[antec_ideal]);
            printf("vinculo: %s \n", artesao.vinculo[antec_vinc]);
            printf("defeito: %s \n", artesao.defeito[antec_defe]);
            printf("tabela_extra: %s \n", artesao.tabela_extra[antec_ideal]);
        }
    if(antecedente[escolha_antec] == antecedente[2]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", artista.personalidade[antec_pers]);
            printf("ideal: %s \n", artista.ideal[antec_ideal]);
            printf("vinculo: %s \n", artista.vinculo[antec_vinc]);
            printf("defeito: %s \n", artista.defeito[antec_defe]);
            printf("tabela_extra: %s \n", artista.tabela_extra[antec_ideal]);
        }

}
