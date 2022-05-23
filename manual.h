#ifndef MANUAL_H_INCLUDED
#define MANUAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define MAX_CARACTERES 1000
#define NUM_PALAVRAS 5

char tipos[NUM_PALAVRAS][MAX_CARACTERES]={{"Bartender"},{"Coureiro"},{"Alquimista"},
                                              {"Ferreiro"},{"Ourives"},{"Curador"}};

char Nomes_M[NUM_PALAVRAS][MAX_CARACTERES]={{"Ammon"},{"Orgrin"},{"Sir Ebonheart"},
                                                {"Zhakir"},{"Balthazar"},{"Dragomir"}};

char Nomes_F[NUM_PALAVRAS][MAX_CARACTERES]={{"Winnie"},{"Hannah"},{"Aradia"},
                                                {"Sylvi"},{"Julia"},{"Lidia"},
                                                {"Gaska"},{"Mailena"},{"Aryn"},
                                                {"Eora"},{"Adale"},{"Hitta"}};


char antecedente[12][MAX_CARACTERES]={{"Ac�lito"},{"Artes�o da Guilda"},{"Artista"},
                                          {"Charlat�o"},{"Criminoso"},{"Eremita"},
                                          {"Forasteiro"},{"Her�i do Povo"},{"Marinheiro"},
                                          {"Nobre"},{"�rf�o"},{"S�bio"},
                                          {"Soldado"}};

/*
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};
*/



#endif // MANUAL_H_INCLUDED
