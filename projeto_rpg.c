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
   int rand_antecedente;
   struct Antecedentes antec;

   rand_tipo = rand() % (QTD_TIPOS -1);
   rand_nomes_m = rand() % (QTD_NOMES_M -1);
   rand_nomes_f = rand() % (QTD_NOMES_F -1);
   rand_antecedente = rand() % (QTD_ANTECEDENTE -1);
   
 
   for(int i=0;i<1;i++){
      printf("Profissão: %s \n",tipos[rand_tipo]);
      printf("Nome M: %s \n",Nomes_M[rand_nomes_m]);
      printf("Nome F: %s \n",Nomes_F[rand_nomes_f]);
   }
   
}

struct Antecedentes{
/// - Antecedente de Ac�lito -
char Acolito_per[7][MAX_CARACTERES]={{"Eu idolatro um her�i particular da minha f�, e constantemente me refiro a seus feitos e exemplos."},
                                         {"Eu consigo encontrar semelhan�as mesmo entre o inimigos mais violentos, com empatia e sempre trabalhando pela paz."},
                                         {"Eu vejo press�gios em cada evento e a��o. Os deuses est�o falando conosco, n�s apenas temos de ouvi-los."},
                                         {"Nada pode abalar minha atitude otimista."},
                                         {"Eu cito (corretamente ou n�o) textos sagrados e prov�rbios em quase qualquer situa��o."},
                                         {"Eu sou tolerante (ou intolerante) a qualquer outra f�, e respeito (ou condeno) a adora��o a outros deuses."},
                                         {"Eu aprecio comida requintada, bebidas e a elite entre o alto escal�o de meu templo. Uma vida dura me irrita."},
                                         {"Eu passei tanto tempo no templo que possuo pouca pr�tica em lidar com as pessoas mundo a fora."}};

char Acolito_ide[5][MAX_CARACTERES]={{"As tradi��es ancestrais de adora��o e sacrif�cio devem ser preservadas e perpetradas. (Leal)"},
                                         {"Eu sempre tento ajudar aqueles em necessidade, n�o importando o custo pessoal. (Bom)"},
                                         {"N�s devemos ajudar a conduzir as mudan�as que os deuses est�o constantemente trabalhando para o mundo. (Ca�tico)"},
                                         {"Eu espero que um dia eu consiga chegar ao topo na hierarquia da minha religi�o. (Leal)"},
                                         {"Eu acredito que minha divindade guia minhas a��es. Eu tenho f� que, se eu trabalhar duro, coisas boas acontecer�o. (Leal)"},
                                         {"Aspira��o. Eu busco ser digno da gra�a do meu deus ao corresponder minhas a��es aos seus ensinamentos. (Qualquer)"}};

char Acolito_vin[5][MAX_CARACTERES]={{"Eu morreria para recuperar uma rel�quia ancestral de minha f�, perdida h� muito tempo."},
                                            {"Eu ainda terei minha vingan�a contra o templo corrupto que me acusou de heresia."},
                                            {"Eu devo minha vida ao sacerdote que me acolheu quando meus pais morreram."},
                                            {"Tudo o que fa�o, fa�o pelo povo."},
                                            {"Eu farei qualquer coisa para proteger o templo que sirvo."},
                                            {"Eu busco guardar um texto sagrado que meus inimigos dizem ser her�tico e tentam destru�-lo."}};

char Acolito_def[5][MAX_CARACTERES]={{"Eu julgo os outros severamente, e a mim mesmo mais ainda."},
                                             {"Eu deposito muita confian�a naqueles que det�m o poder na hierarquia de meu templo."},
                                             {"Minha devo��o � muitas vezes me cega perante aqueles que professam a f� do meu deus."},
                                             {"Meu pensamento � inflex�vel."},
                                             {"Eu suspeito de estranhos e sempre espero o pior deles."},
                                             {"Depois de escolher um objetivo, eu fico obcecado em cumpri-lo, at� mesmo em detrimento de qualquer outra coisa em minha vida."}};

/// - Antecedente de Artes�o da Guilda -
char Artesao_per[7][MAX_CARACTERES]={{"Eu acredito que tudo que valha a pena fazer, vale a pena ser feito direito. Eu n�o posso evitar � Eu sou perfeccionista."},
                                    {"Eu sou um esnobe que olha de cima a baixo aqueles que n�o sabem apreciar artes requintadas."},
                                    {"Eu sempre quero aprender como as coisas funcionam e o que deixa as pessoas motivadas."},
                                    {"Eu sou cheio de aforismos espirituosos e tenho um proverbio para cada ocasi�o."},
                                    {"Eu sou grosso com as pessoas que n�o tem o mesmo comprometimento que eu com o trabalho duro e honesto."},
                                    {"Eu gosto de falar longamente sobre minha profiss�o."},
                                    {"Eu n�o gasto meu dinheiro facilmente e vou barganhar incansavelmente para conseguir o melhor acordo poss�vel."},
                                    {"Eu sou bem conhecido pelo meu trabalho e quero ter certeza que todos o apreciam. Eu sempre fico surpreso quando conhe�o pessoas que n�o ouviram falar de mim."}};

char Artesao_ide[5][MAX_CARACTERES]={{"� dever de todo cidad�o civilizado fortalecer os elos da comunidade e a seguran�a da civiliza��o. (Leal)"},
                                        {"Meus talentos me foram dados para que eu pudesse us�-los para beneficiar o mundo. (Bom)"},
                                        {"Todos deveriam ser livres para perseguir seus pr�prios meios de vida. (Ca�tico)"},
                                        {"Eu s� estou aqui pelo dinheiro. (Mau)"},
                                        {"Eu sou cometido com o povo com quem me importo, n�o com ideias. (Neutro)"},
                                        {"Eu trabalho duro para ser o melhor no meu of�cio. (Qualquer)"}};

char Artesao_vin[5][MAX_CARACTERES]={{"A oficina onde aprendi meu neg�cio � o local mais importante do mundo pra mim."},
                                    {"Eu criei um trabalho incr�vel para algu�m, mas descobri que ele n�o era merecedor de receb�-lo. Ainda estou � procura de algu�m que seja merecedor."},
                                    {"Eu tenho uma grande d�vida para com minha guilda por fazer de mim a pessoa que sou hoje."},
                                    {"Eu busco riqueza para conseguir o amor de algu�m."},
                                    {"Um dia eu voltarei para a minha guilda e provarei que sou o maior artes�o dentre eles."},
                                    {"Eu irem me vingar das for�as malignas que destru�ram meu local de neg�cios e arruinaram meu estilo de vida."}};

char Artesao_def[5][MAX_CARACTERES]={{"Eu farei de tudo para p�r minha m�os em algo raro ou inestim�vel."},
                                    {"Eu rapidamente presumo que algu�m est� tentando me trapacear."},
                                    {"Ningu�m nunca poder� saber que eu, certa vez, roubei dinheiro dos cofres da guilda."},
                                    {"Eu nunca estou satisfeito com o que tenho � eu sempre quero mais."},
                                    {"Eu mataria para adquirir um t�tulo de nobreza."},
                                    {"Eu sou terrivelmente invejoso com qualquer um que possa ofuscar meu of�cio. Todo lugar que eu vou, estou cercado de rivais."}};

char Artesao_neg[19][MAX_CARACTERES]={{"Alquimistas e botic�rios"},{"Armeiros, chaveiros e ferreiros finos"},{"Cervejeiros, destiladores e viticultores"},
                                        {"Cal�grafos, escribas e escriv�es"},{"Carpinteiros, construtores de telhado e estucadores"},{"Cart�grafos, agrimensores e desenhistas"},
                                        {"Remend�es e sapateiros"},{"Cozinheiros e padeiros"},{"Vidraceiros e escultores"},
                                        {"Joalheiros e lapid�rios"},{"Coureiros, peleiros e curtidores"},{"Pedreiros e marceneiros"},
                                        {"Pintores, iluminadores e construtores de placas"},{"Oleiros e telheiros"},{"Armadores e veleiros"},
                                        {"Ferreiros e forjadores"},{"Funileiros, latoeiros e galheteiros"},{"Fabricantes de carro�as e fabricantes de rodas"},
                                        {"Tecel�es e tintureiros"},{"Entalhadores, tanoeiros e construtores de arcos"}};


};
