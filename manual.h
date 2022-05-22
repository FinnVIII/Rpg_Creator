#ifndef MANUAL_H_INCLUDED
#define MANUAL_H_INCLUDED

    #define MAX_CARACTERES 100
    //#define NUM_PALAVRAS 6

    int qtd_tipos = 7;
    int qtd_nomes_m = 5;
    int qtd_nomes_f = 6;


    char tipos[qtd_tipos][MAX_CARACTERES]={{"Bartender"},{"Coureiro"},{"Alquimista"},
                                              {"Ferreiro"},{"Ourives"},{"Curador"}, {"Aventureiro"}, {"Mercenário"}};

    char Nomes_M[qtd_nomes_m][MAX_CARACTERES]={{"Ammon"},{"Orgrin"},{"Sir Ebonheart"},
                                                {"Zhakir"},{"Balthazar"},{"Dragomir"}};

    char Nomes_F[qtd_nomes_f][MAX_CARACTERES]={{"Winnie"},{"Hannah"},{"Aradia"},
                                                {"Sylvi"},{"Julia"},{"Lidia"}, {"Anna"}};


#endif // MANUAL_H_INCLUDED