#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "manual.h"

int main(void){
    setlocale(LC_ALL,"portuguese");

    struct Antecedentes Antec;

    int r;
    srand(time(NULL));
    r = rand() % 5;

    for(int i=0;i<1;i++){
        printf("Profissão: %s \n",tipos[r]);
        printf("Personalidade %s \n",Antec.Acolito_per[r]);
        printf("Nome M: %s \n",Nomes_M[r]);
        printf("Nome F: %s \n",Nomes_F[r]);
    }
}

struct Antecedentes{
/// - Antecedente de Acólito -
char Acolito_per[7][MAX_CARACTERES]={{"Eu idolatro um herói particular da minha fé, e constantemente me refiro a seus feitos e exemplos."},
                                         {"Eu consigo encontrar semelhanças mesmo entre o inimigos mais violentos, com empatia e sempre trabalhando pela paz."},
                                         {"Eu vejo presságios em cada evento e ação. Os deuses estão falando conosco, nós apenas temos de ouvi-los."},
                                         {"Nada pode abalar minha atitude otimista."},
                                         {"Eu cito (corretamente ou não) textos sagrados e provérbios em quase qualquer situação."},
                                         {"Eu sou tolerante (ou intolerante) a qualquer outra fé, e respeito (ou condeno) a adoração a outros deuses."},
                                         {"Eu aprecio comida requintada, bebidas e a elite entre o alto escalão de meu templo. Uma vida dura me irrita."},
                                         {"Eu passei tanto tempo no templo que possuo pouca prática em lidar com as pessoas mundo a fora."}};

char Acolito_ide[5][MAX_CARACTERES]={{"As tradições ancestrais de adoração e sacrifício devem ser preservadas e perpetradas. (Leal)"},
                                         {"Eu sempre tento ajudar aqueles em necessidade, não importando o custo pessoal. (Bom)"},
                                         {"Nós devemos ajudar a conduzir as mudanças que os deuses estão constantemente trabalhando para o mundo. (Caótico)"},
                                         {"Eu espero que um dia eu consiga chegar ao topo na hierarquia da minha religião. (Leal)"},
                                         {"Eu acredito que minha divindade guia minhas ações. Eu tenho fé que, se eu trabalhar duro, coisas boas acontecerão. (Leal)"},
                                         {"Aspiração. Eu busco ser digno da graça do meu deus ao corresponder minhas ações aos seus ensinamentos. (Qualquer)"}};

char Acolito_vin[5][MAX_CARACTERES]={{"Eu morreria para recuperar uma relíquia ancestral de minha fé, perdida há muito tempo."},
                                            {"Eu ainda terei minha vingança contra o templo corrupto que me acusou de heresia."},
                                            {"Eu devo minha vida ao sacerdote que me acolheu quando meus pais morreram."},
                                            {"Tudo o que faço, faço pelo povo."},
                                            {"Eu farei qualquer coisa para proteger o templo que sirvo."},
                                            {"Eu busco guardar um texto sagrado que meus inimigos dizem ser herético e tentam destruí-lo."}};

char Acolito_def[5][MAX_CARACTERES]={{"Eu julgo os outros severamente, e a mim mesmo mais ainda."},
                                             {"Eu deposito muita confiança naqueles que detêm o poder na hierarquia de meu templo."},
                                             {"Minha devoção é muitas vezes me cega perante aqueles que professam a fé do meu deus."},
                                             {"Meu pensamento é inflexível."},
                                             {"Eu suspeito de estranhos e sempre espero o pior deles."},
                                             {"Depois de escolher um objetivo, eu fico obcecado em cumpri-lo, até mesmo em detrimento de qualquer outra coisa em minha vida."}};

/// - Antecedente de Artesão da Guilda -
char Artesao_per[7][MAX_CARACTERES]={{"Eu acredito que tudo que valha a pena fazer, vale a pena ser feito direito. Eu não posso evitar – Eu sou perfeccionista."},
                                    {"Eu sou um esnobe que olha de cima a baixo aqueles que não sabem apreciar artes requintadas."},
                                    {"Eu sempre quero aprender como as coisas funcionam e o que deixa as pessoas motivadas."},
                                    {"Eu sou cheio de aforismos espirituosos e tenho um proverbio para cada ocasião."},
                                    {"Eu sou grosso com as pessoas que não tem o mesmo comprometimento que eu com o trabalho duro e honesto."},
                                    {"Eu gosto de falar longamente sobre minha profissão."},
                                    {"Eu não gasto meu dinheiro facilmente e vou barganhar incansavelmente para conseguir o melhor acordo possível."},
                                    {"Eu sou bem conhecido pelo meu trabalho e quero ter certeza que todos o apreciam. Eu sempre fico surpreso quando conheço pessoas que não ouviram falar de mim."}};

char Artesao_ide[5][MAX_CARACTERES]={{"É dever de todo cidadão civilizado fortalecer os elos da comunidade e a segurança da civilização. (Leal)"},
                                        {"Meus talentos me foram dados para que eu pudesse usá-los para beneficiar o mundo. (Bom)"},
                                        {"Todos deveriam ser livres para perseguir seus próprios meios de vida. (Caótico)"},
                                        {"Eu só estou aqui pelo dinheiro. (Mau)"},
                                        {"Eu sou cometido com o povo com quem me importo, não com ideias. (Neutro)"},
                                        {"Eu trabalho duro para ser o melhor no meu ofício. (Qualquer)"}};

char Artesao_vin[5][MAX_CARACTERES]={{"A oficina onde aprendi meu negócio é o local mais importante do mundo pra mim."},
                                    {"Eu criei um trabalho incrível para alguém, mas descobri que ele não era merecedor de recebê-lo. Ainda estou à procura de alguém que seja merecedor."},
                                    {"Eu tenho uma grande dívida para com minha guilda por fazer de mim a pessoa que sou hoje."},
                                    {"Eu busco riqueza para conseguir o amor de alguém."},
                                    {"Um dia eu voltarei para a minha guilda e provarei que sou o maior artesão dentre eles."},
                                    {"Eu irem me vingar das forças malignas que destruíram meu local de negócios e arruinaram meu estilo de vida."}};

char Artesao_def[5][MAX_CARACTERES]={{"Eu farei de tudo para pôr minha mãos em algo raro ou inestimável."},
                                    {"Eu rapidamente presumo que alguém está tentando me trapacear."},
                                    {"Ninguém nunca poderá saber que eu, certa vez, roubei dinheiro dos cofres da guilda."},
                                    {"Eu nunca estou satisfeito com o que tenho – eu sempre quero mais."},
                                    {"Eu mataria para adquirir um título de nobreza."},
                                    {"Eu sou terrivelmente invejoso com qualquer um que possa ofuscar meu ofício. Todo lugar que eu vou, estou cercado de rivais."}};

char Artesao_neg[19][MAX_CARACTERES]={{"Alquimistas e boticários"},{"Armeiros, chaveiros e ferreiros finos"},{"Cervejeiros, destiladores e viticultores"},
                                        {"Calígrafos, escribas e escrivães"},{"Carpinteiros, construtores de telhado e estucadores"},{"Cartógrafos, agrimensores e desenhistas"},
                                        {"Remendões e sapateiros"},{"Cozinheiros e padeiros"},{"Vidraceiros e escultores"},
                                        {"Joalheiros e lapidários"},{"Coureiros, peleiros e curtidores"},{"Pedreiros e marceneiros"},
                                        {"Pintores, iluminadores e construtores de placas"},{"Oleiros e telheiros"},{"Armadores e veleiros"},
                                        {"Ferreiros e forjadores"},{"Funileiros, latoeiros e galheteiros"},{"Fabricantes de carroças e fabricantes de rodas"},
                                        {"Tecelões e tintureiros"},{"Entalhadores, tanoeiros e construtores de arcos"}};

/// - Antecedente de Artista -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Charlatão -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Criminoso -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Eremita -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Forasteiro -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Herói do Povo -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Marinheiro -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Nobre -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Órfão -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Sábio -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

/// - Antecedente de Soldado -
char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};

char SEI_LA[7][MAX_CARACTERES]={{""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""},
                                {""}};


};
