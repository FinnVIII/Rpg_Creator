#include <conio.h>
#include <locale.h>
#include <windows.h>
#include <stdio.h>

void gotoxy(int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void main(){
    HANDLE colors=GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "portuguese");
	//Declara��es

	//J� atribui o valor x e y de onde a seta ir� come�ar
    int x=42, y=15, tecla=0;

	//Instru��es

	gotoxy(44,15);SetConsoleTextAttribute(colors,3);printf("Criar ficha");SetConsoleTextAttribute(colors,15);
	gotoxy(44,17);printf("Criar itens");
	gotoxy(44,19);printf("Mercado");
	gotoxy(44,21);printf("Fechar");

	selecao(x, y, tecla);
}

void selecao(int x, int y, int tecla){
    HANDLE colors=GetStdHandle(STD_OUTPUT_HANDLE);
	while(tecla!=13){	//Enquanto o usuario n�o pressionar ENTER(ASCII: 13) ele vai permanecer nas instru��es abaixo

		SetConsoleTextAttribute(colors,3);gotoxy(x,y);printf("�");
		 //Essa seta ir� se movimentar, pois em gotoxy est� definido x e y que ir�o receber os valores quando as teclas forem pressionadas. Fun��o textcolor pertence a biblioteca conio2.h
		tecla=getch();	//variavel tecla ir� receber a tecla pressionada.

		if(tecla==72){	//Se a tecla for a seta para cima (ASCII: 72)
			gotoxy(x,y);printf(" ");	//Aqui ir� limpar a seta da op��o anterior
			y=y-2;	//A seta ir� pular duas linhas, pois coloquei as op��es de 2 em 2
		}

		if(tecla==80){	//Se a tecla for a seta para baixo (ASCII: 80)
			gotoxy(x,y);printf(" ");	//Aqui ir� limpar a seta da op��o anterior
			y=y+2;	//A seta ir� pular duas linhas, pois coloquei as op��es de 2 em 2
		}

		//Aqui far� com que a seta n�o saia do menu, indo de Criar ficha para Fechar e de Fechar para Criar ficha
		if(y==13 && tecla==72){
			y=21;
		}
		if(y==23 && tecla==80){
			y=15;
		}

		//Agora vamos tornar isso melhor, vamos fazer com que quando a seta estiver na op��o, a mesma mude de cor
		if(y==15){
			SetConsoleTextAttribute(colors,3);gotoxy(44,15);printf("Criar ficha");
		}else{
			SetConsoleTextAttribute(colors,15);gotoxy(44,15);printf("Criar ficha");
		}

		if(y==17){
			SetConsoleTextAttribute(colors,3);gotoxy(44,17);printf("Criar itens");
		}else{
			SetConsoleTextAttribute(colors,15);gotoxy(44,17);printf("Criar itens");
		}
		if(y==19){
			SetConsoleTextAttribute(colors,3);gotoxy(44,19);printf("Mercado");
		}else{
			SetConsoleTextAttribute(colors,15);gotoxy(44,19);printf("Mercado");
		}
		if(y==21){
			SetConsoleTextAttribute(colors,3);gotoxy(44,21);printf("Fechar");SetConsoleTextAttribute(colors,15);
		}else{
			SetConsoleTextAttribute(colors,15);gotoxy(44,21);printf("Fechar");
		}

	}
    if(y==21 && tecla==13){
            printf("a");
            return(0);
		}
}
