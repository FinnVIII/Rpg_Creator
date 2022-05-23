#ifndef MANUAL_H_INCLUDED
#define MANUAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

    #define MAX_CARACTERES 100
    #define QTD_TIPOS 8
    #define QTD_NOMES_M 6
    #define QTD_NOMES_F 7
    #define QTD_ANTECEDENTE 13
   



    char tipos[QTD_TIPOS][MAX_CARACTERES]={{"Bartender"},{"Coureiro"},{"Alquimista"},
                                              {"Ferreiro"},{"Ourives"},{"Curador"}, {"Aventureiro"}, {"Mercenário"}};

    char Nomes_M[QTD_NOMES_M][MAX_CARACTERES]={{"Ammon"},{"Orgrin"},{"Sir Ebonheart"},
                                                {"Zhakir"},{"Balthazar"},{"Dragomir"}};

    char Nomes_F[QTD_NOMES_F][MAX_CARACTERES]={{"Winnie"},{"Hannah"},{"Aradia"},
                                                {"Sylvi"},{"Julia"},{"Lidia"}, {"Anna"}};
    
    char antecedente[QTD_ANTECEDENTE][MAX_CARACTERES]={{"Acólito"},{"Artesão da Guilda"},{"Artista"},
                                          {"Charlatão"},{"Criminoso"},{"Eremita"},
                                          {"Forasteiro"},{"Herói do Povo"},{"Marinheiro"},
                                          {"Nobre"},{"Órfão"},{"Sábio"},
                                          {"Soldado"}};

#endif // MANUAL_H_INCLUDED