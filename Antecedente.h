#ifndef ANTECEDENTE_H_INCLUDED
#define ANTECEDENTE_H_INCLUDED
#include "manual.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Antecedentes {

    char *nome;
    char personalidade[9][255];
    char ideal[7][255];
    char vinculo[7][255];
    char defeito[7][255];
    char tabela_extra[21][255];

}acolito, artesao, artista, charlatao, criminoso, eremita, forasteiro, heroi, marinheiro, nobre, orfao, sabio, soldado;

void antecedentes_lista(){

    acolito.nome = "Ac�lito";
    strcpy(acolito.personalidade[0],"Eu idolatro um herói particular da minha fé, e constantemente me refiro a seus feitos e exemplos.");
    strcpy(acolito.personalidade[1],"Eu consigo encontrar semelhan�as mesmo entre o inimigos mais violentos, com empatia e sempre trabalhando pela paz.");
    strcpy(acolito.personalidade[2],"Eu vejo press�gios em cada evento e a��o. Os deuses est�o falando conosco, n�s apenas temos de ouvi-los.");
    strcpy(acolito.personalidade[3],"Nada pode abalar minha atitude otimista.");
    strcpy(acolito.personalidade[4],"Eu cito (corretamente ou n�o) textos sagrados e prov�rbios em quase qualquer situa��o.");
    strcpy(acolito.personalidade[5],"Eu sou tolerante (ou intolerante) a qualquer outra f�, e respeito (ou condeno) a adora��o a outros deuses.");
    strcpy(acolito.personalidade[6],"Eu aprecio comida requintada, bebidas e a elite entre o alto escal�o de meu templo. Uma vida dura me irrita.");
    strcpy(acolito.personalidade[7],"Eu passei tanto tempo no templo que possuo pouca pr�tica em lidar com as pessoas mundo a fora.");

    strcpy(acolito.ideal[0],"As tradi��es ancestrais de adora��o e sacrif�cio devem ser preservadas e perpetradas. (Leal)");
    strcpy(acolito.ideal[1],"Eu sempre tento ajudar aqueles em necessidade, n�o importando o custo pessoal. (Bom)");
    strcpy(acolito.ideal[2],"N�s devemos ajudar a conduzir as mudan�as que os deuses est�o constantemente trabalhando para o mundo. (Ca�tico)");
    strcpy(acolito.ideal[3],"Eu espero que um dia eu consiga chegar ao topo na hierarquia da minha religi�o. (Leal)");
    strcpy(acolito.ideal[4],"Eu acredito que minha divindade guia minhas a��es. Eu tenho f� que, se eu trabalhar duro, coisas boas acontecer�o. (Leal)");
    strcpy(acolito.ideal[5],"Aspira��o. Eu busco ser digno da gra�a do meu deus ao corresponder minhas a��es aos seus ensinamentos. (Qualquer)");

    strcpy(acolito.vinculo[0],"Eu morreria para recuperar uma rel�quia ancestral de minha f�, perdida h� muito tempo.");
    strcpy(acolito.vinculo[1],"Eu ainda terei minha vingan�a contra o templo corrupto que me acusou de heresia.");
    strcpy(acolito.vinculo[2],"Eu devo minha vida ao sacerdote que me acolheu quando meus pais morreram.");
    strcpy(acolito.vinculo[3],"Tudo o que fa�o, fa�o pelo povo.");
    strcpy(acolito.vinculo[4],"Eu farei qualquer coisa para proteger o templo que sirvo.");
    strcpy(acolito.vinculo[5],"Eu busco guardar um texto sagrado que meus inimigos dizem ser her�tico e tentam destru�-lo.");

    strcpy(acolito.defeito[0],"Eu julgo os outros severamente, e a mim mesmo mais ainda.");
    strcpy(acolito.defeito[1],"Eu deposito muita confian�a naqueles que det�m o poder na hierarquia de meu templo.");
    strcpy(acolito.defeito[2],"Minha devo��o � muitas vezes me cega perante aqueles que professam a f� do meu deus.");
    strcpy(acolito.defeito[3],"Meu pensamento � inflex�vel.");
    strcpy(acolito.defeito[4],"Eu suspeito de estranhos e sempre espero o pior deles.");
    strcpy(acolito.defeito[5],"Depois de escolher um objetivo, eu fico obcecado em cumpri-lo, at� mesmo em detrimento de qualquer outra coisa em minha vida.");


    artesao.nome = "Artes�o da Guilda";
    strcpy(artesao.personalidade[0],"Eu acredito que tudo que valha a pena fazer, vale a pena ser feito direito. Eu n�o posso evitar � Eu sou perfeccionista.");
    strcpy(artesao.personalidade[1],"Eu sou um esnobe que olha de cima a baixo aqueles que n�o sabem apreciar artes requintadas.");
    strcpy(artesao.personalidade[2],"Eu sempre quero aprender como as coisas funcionam e o que deixa as pessoas motivadas.");
    strcpy(artesao.personalidade[3],"Eu sou cheio de aforismos espirituosos e tenho um proverbio para cada ocasi�o.");
    strcpy(artesao.personalidade[4],"Eu sou grosso com as pessoas que n�o tem o mesmo comprometimento que eu com o trabalho duro e honesto.");
    strcpy(artesao.personalidade[5],"Eu gosto de falar longamente sobre minha profiss�o.");
    strcpy(artesao.personalidade[6],"Eu n�o gasto meu dinheiro facilmente e vou barganhar incansavelmente para conseguir o melhor acordo poss�vel.");
    strcpy(artesao.personalidade[7],"Eu sou bem conhecido pelo meu trabalho e quero ter certeza que todos o apreciam. Eu sempre fico surpreso quando conhe�o pessoas que n�o ouviram falar de mim.");

    strcpy(artesao.ideal[0],"� dever de todo cidad�o civilizado fortalecer os elos da comunidade e a seguran�a da civiliza��o. (Leal)");
    strcpy(artesao.ideal[1],"Meus talentos me foram dados para que eu pudesse us�-los para beneficiar o mundo. (Bom)");
    strcpy(artesao.ideal[2],"Todos deveriam ser livres para perseguir seus pr�prios meios de vida. (Ca�tico)");
    strcpy(artesao.ideal[3],"Eu s� estou aqui pelo dinheiro. (Mau)");
    strcpy(artesao.ideal[4],"Eu sou cometido com o povo com quem me importo, n�o com ideias. (Neutro)");
    strcpy(artesao.ideal[5],"Eu trabalho duro para ser o melhor no meu of�cio. (Qualquer)");

    strcpy(artesao.vinculo[0],"A oficina onde aprendi meu neg�cio � o local mais importante do mundo pra mim.");
    strcpy(artesao.vinculo[1],"Eu criei um trabalho incr�vel para algu�m, mas descobri que ele n�o era merecedor de receb�-lo. Ainda estou � procura de algu�m que seja merecedor.");
    strcpy(artesao.vinculo[2],"Eu tenho uma grande d�vida para com minha guilda por fazer de mim a pessoa que sou hoje.");
    strcpy(artesao.vinculo[3],"Eu busco riqueza para conseguir o amor de algu�m.");
    strcpy(artesao.vinculo[4],"Um dia eu voltarei para a minha guilda e provarei que sou o maior artes�o dentre eles.");
    strcpy(artesao.vinculo[5],"Eu irem me vingar das for�as malignas que destru�ram meu local de neg�cios e arruinaram meu estilo de vida.");

    strcpy(artesao.defeito[0],"Eu farei de tudo para p�r minha m�os em algo raro ou inestim�vel.");
    strcpy(artesao.defeito[1],"Eu rapidamente presumo que algu�m est� tentando me trapacear.");
    strcpy(artesao.defeito[2],"Ningu�m nunca poder� saber que eu, certa vez, roubei dinheiro dos cofres da guilda.");
    strcpy(artesao.defeito[3],"Eu nunca estou satisfeito com o que tenho � eu sempre quero mais.");
    strcpy(artesao.defeito[4],"Eu mataria para adquirir um t�tulo de nobreza.");
    strcpy(artesao.defeito[5],"Eu sou terrivelmente invejoso com qualquer um que possa ofuscar meu of�cio. Todo lugar que eu vou, estou cercado de rivais.");

    strcpy(artesao.tabela_extra[0],"Alquimistas e botic�rios");
    strcpy(artesao.tabela_extra[1],"Armeiros, chaveiros e ferreiros finos");
    strcpy(artesao.tabela_extra[2],"Cervejeiros, destiladores e viticultores");
    strcpy(artesao.tabela_extra[3],"Cal�grafos, escribas e escriv�es");
    strcpy(artesao.tabela_extra[4],"Carpinteiros, construtores de telhado e estucadores");
    strcpy(artesao.tabela_extra[5],"Cart�grafos, agrimensores e desenhistas");
    strcpy(artesao.tabela_extra[6],"Remend�es e sapateiros");
    strcpy(artesao.tabela_extra[7],"Cozinheiros e padeiros");
    strcpy(artesao.tabela_extra[8],"Vidraceiros e escultores");
    strcpy(artesao.tabela_extra[9],"Joalheiros e lapid�rios");
    strcpy(artesao.tabela_extra[10],"Coureiros, peleiros e curtidores");
    strcpy(artesao.tabela_extra[11],"Pedreiros e marceneiros");
    strcpy(artesao.tabela_extra[12],"Pintores, iluminadores e construtores de placas");
    strcpy(artesao.tabela_extra[13],"Oleiros e telheiros");
    strcpy(artesao.tabela_extra[14],"Armadores e veleiros");
    strcpy(artesao.tabela_extra[15],"Ferreiros e forjadores");
    strcpy(artesao.tabela_extra[16],"Funileiros, latoeiros e galheteiros");
    strcpy(artesao.tabela_extra[17],"Fabricantes de carro�as e fabricantes de rodas");
    strcpy(artesao.tabela_extra[18],"Tecel�es e tintureiros");
    strcpy(artesao.tabela_extra[19],"Entalhadores, tanoeiros e construtores de arcos");

    artista.nome = "Artista";
    strcpy(artista.personalidade[0],"Eu conhe�o uma hist�ria relevante de praticamente todas as situa��es.");
    strcpy(artista.personalidade[1],"Sempre que eu chego em um lugar novo, eu coleto os rumores locais e espalho fofocas.");
    strcpy(artista.personalidade[2],"Eu sou um rom�ntico incorrig�vel, sempre em busca daquele �algu�m especial.�");
    strcpy(artista.personalidade[3],"Ningu�m fica com raiva de mim ou perto de mim por muito tempo, j� que eu posso acabar com qualquer tipo de tens�o.");
    strcpy(artista.personalidade[4],"Eu amo um bom insulto, at� os direcionados a mim.");
    strcpy(artista.personalidade[5],"Eu fico sentido se eu n�o for o centro das aten��es.");
    strcpy(artista.personalidade[6],"Eu n�o vou me contentar com nada menos que a perfei��o.");
    strcpy(artista.personalidade[7],"Eu mudo de �nimo ou de pensamento t�o r�pido quando mudo eu mudo de nota em uma can��o.");

    strcpy(artista.ideal[0],"Quando eu atuo, eu torno o mundo um lugar melhor. (Bom)");
    strcpy(artista.ideal[1],"As hist�rias, lendas e can��es do passado nunca devem ser esquecidas, pois elas nos ensinam quem n�s somos. (Leal)");
    strcpy(artista.ideal[2],"O mundo precisa de novas ideias e a��es ousadas. (Ca�tico)");
    strcpy(artista.ideal[3],"Eu s� estou aqui pelo dinheiro e pela fama. (Mau)");
    strcpy(artista.ideal[4],"Eu gosto de ver os sorrisos nos rostos das pessoas quando eu atuo. Isso � tudo que importa. (Neutro)");
    strcpy(artista.ideal[5],"A arte deve refletir a alma; ela deve vir de dentro e revelar quem realmente somos. (Qualquer)");

    strcpy(artista.vinculo[0],"Meu instrumento � meu bem mais valioso e ele me lembra de algu�m que eu amo.");
    strcpy(artista.vinculo[1],"Algu�m roubou meu precioso instrumento e, algum dia, eu vou peg�-lo de volta.");
    strcpy(artista.vinculo[2],"Eu quero ser famoso, custe o que custar.");
    strcpy(artista.vinculo[3],"Eu idolatro um her�i dos contos antigos e mensuro meus feitos baseados nessa personalidade.");
    strcpy(artista.vinculo[4],"Eu vou fazer tudo para provar que sou superior eu meu odiado rival.");
    strcpy(artista.vinculo[5],"Eu faria qualquer coisa pelos membros da minha antiga trupe.");

    strcpy(artista.defeito[0],"Eu farei de tudo para ganhar fama e renome.");
    strcpy(artista.defeito[1],"Eu viro um idiota quando vejo um rosto bonito.");
    strcpy(artista.defeito[2],"Um esc�ndalo me impede de voltar para casa novamente. Esse tipo de problema parece me perseguir por ai.");
    strcpy(artista.defeito[3],"Eu, certa vez, satirizei um nobre que ainda quer minha cabe�a. Foi um erro que eu adoraria repetir.");
    strcpy(artista.defeito[4],"Eu tenho problemas em esconder meus verdadeiros sentimentos. Minha l�ngua afiada me mete em confus�o.");
    strcpy(artista.defeito[5],"Apesar dos meus melhores esfor�os, meus amigos n�o me consideram confi�vel.");

    strcpy(artista.tabela_extra[0],"Acrobata");
    strcpy(artista.tabela_extra[1],"Ator");
    strcpy(artista.tabela_extra[2],"Buf�o");
    strcpy(artista.tabela_extra[3],"Cantor");
    strcpy(artista.tabela_extra[4],"Dan�arino");
    strcpy(artista.tabela_extra[5],"Engolidor de fogo");
    strcpy(artista.tabela_extra[6],"Instrumentista");
    strcpy(artista.tabela_extra[7],"Malabarista");
    strcpy(artista.tabela_extra[8],"Narrador");
    strcpy(artista.tabela_extra[9],"Poeta");

    charlatao.nome = "Charlat�o";
    strcpy(charlatao.personalidade[0],"Eu me apaixono e desapaixono facilmente, e estou sempre em busca de algu�m.");
    strcpy(charlatao.personalidade[1],"Eu tenho uma piada para cada ocasi�o, especialmente ocasi�es em que o humor � inapropriado.");
    strcpy(charlatao.personalidade[2],"Bajula��o � meu truque predileto para conseguir o que eu quero.");
    strcpy(charlatao.personalidade[3],"Eu sou um jogador nato que n�o consegue resistir a se arriscar por uma poss�vel recompensa.");
    strcpy(charlatao.personalidade[4],"Eu minto sobre quase tudo, mesmo quando n�o existe qualquer boa raz�o.");
    strcpy(charlatao.personalidade[5],"Sarcasmo e insultos s�o minhas armas prediletas.");
    strcpy(charlatao.personalidade[6],"Eu tenho v�rios s�mbolos sagrados comigo, e invoco a divindade que seja mais �til em cada dado momento.");
    strcpy(charlatao.personalidade[7],"Eu furto qualquer coisa que eu vejo que possa ter algum valor.");

    strcpy(charlatao.ideal[0],"Sou um espirito livre ningu�m me diz o que fazer. (Ca�tico)");
    strcpy(charlatao.ideal[1],"Eu nunca roubo de pessoas que n�o podem perder algumas moedas. (Leal)");
    strcpy(charlatao.ideal[2],"Eu distribuo o dinheiro que adquiro com as pessoas que realmente precisam. (Bom)");
    strcpy(charlatao.ideal[3],"Eu nunca fa�o a mesma trapa�a duas vezes. (Ca�tico)");
    strcpy(charlatao.ideal[4],"Bens materiais vem e v�o. Os la�os de amizade duram pra sempre. (Bom)");
    strcpy(charlatao.ideal[5],"Eu estou determinado a fazer algo por mim mesmo. (Qualquer)");

    strcpy(charlatao.vinculo[0],"Eu extorqui a pessoa errada e devo trabalhar para que esse indiv�duo nunca mais cruze meu caminho ou o das pessoas com quem me importo.");
    strcpy(charlatao.vinculo[1],"Eu devo tudo ao meu mentor � uma pessoa terr�vel que, provavelmente, est� apodrecendo na cadeia em algum lugar.");
    strcpy(charlatao.vinculo[2],"Em algum lugar por ai, eu tenho um filho que n�o me conhece. Eu estou tornando o mundo melhor para ele.");
    strcpy(charlatao.vinculo[3],"Eu vim de uma fam�lia nobre e, um dia, irei reivindicar minhas terras e t�tulo daqueles que o roubaram de mim.");
    strcpy(charlatao.vinculo[4],"Uma pessoa poderosa matou algu�m que eu amava. Algum dia, em breve, terei minha vingan�a.");
    strcpy(charlatao.vinculo[5],"Eu enganei e arruinei a vida de uma pessoa que n�o merecia. Eu busco reparar meus erros, mas talvez nunca seja capaz de me perdoar.");

    strcpy(charlatao.defeito[0],"N�o resisto um rostinho bonito.");
    strcpy(charlatao.defeito[1],"Estou sempre com dividas. Eu gasto meus lucros il�citos com luxurias decadentes mais r�pido do que os ganho...");
    strcpy(charlatao.defeito[2],"Estou convencido que ningu�m pode me enganar da forma que eu engano os outros.");
    strcpy(charlatao.defeito[3],"Eu sou ganancioso demais pra meu pr�prio bem. Eu n�o consigo resistir a me arriscar se tiver dinheiro envolvido.");
    strcpy(charlatao.defeito[4],"Eu n�o resisto a enganar pessoas que s�o mais poderosas que eu.");
    strcpy(charlatao.defeito[5],"Eu odeio admitir e vou me odiar por isso, mas, eu vou correr e salvar minha pr�pria pele se as coisas engrossarem.");

    strcpy(charlatao.defeito[0],"Eu trapaceio em jogos de azar.");
    strcpy(charlatao.defeito[1],"Eu falsifico moedas ou forjo documentos.");
    strcpy(charlatao.defeito[2],"Eu me infiltro na vida das pessoas para descobrir suas fraquezas e ficar com suas fortunas.");
    strcpy(charlatao.defeito[3],"Eu troco de identidade como troco de roupa.");
    strcpy(charlatao.defeito[4],"Eu fa�o furtos r�pidos nas esquinas das ruas.");
    strcpy(charlatao.defeito[5],"Eu conven�o as pessoas que tranqueiras in�teis valem seu suado dinheiro.");

    criminoso.nome = "Criminoso";
    strcpy(criminoso.personalidade[0],"Eu sempre tenho um plano para quando as coisas d�o errado.");
    strcpy(criminoso.personalidade[1],"Eu estou sempre calmo, n�o importa a situa��o. Eu nunca levanto minha voz ou deixo minhas emo��es me controlarem.");
    strcpy(criminoso.personalidade[2],"A primeira coisa que fa�o ao chegar a um novo local � decorar a localiza��o de coisas valiosas � ou onde essas coisas podem estar escondidas.");
    strcpy(criminoso.personalidade[3],"Eu prefiro fazer um novo amigo a um novo inimigo.");
    strcpy(criminoso.personalidade[4],"Eu sou incrivelmente receoso em confiar. Aqueles que parecem mais amig�veis geralmente t�m mais a esconder.");
    strcpy(criminoso.personalidade[5],"Eu n�o presto aten��o aos riscos envolvidos em uma situa��o, nunca me alerte sobre as probabilidades de fracasso.");
    strcpy(criminoso.personalidade[6],"A melhor maneira de me levar a fazer algo � dizendo que eu n�o posso fazer.");
    strcpy(criminoso.personalidade[7],"Eu explodo ao menor insulto.");

    strcpy(criminoso.ideal[0],"Eu n�o roubo de irm�os de profiss�o. (Leal)");
    strcpy(criminoso.ideal[1],"Correntes foram feitas para serem partidas, assim como aqueles que as forjaram. (Ca�tico)");
    strcpy(criminoso.ideal[2],"Eu roubo dos ricos para dar aos que realmente precisam. (Bom)");
    strcpy(criminoso.ideal[3],"Eu farei qualquer coisa para me tornar rico. (Mal)");
    strcpy(criminoso.ideal[4],"Eu sou leal aos meus amigos, n�o a qualquer ideal, e todos sabem que posso viajar at� o Estige por aqueles que me importo. (Neutro)");
    strcpy(criminoso.ideal[5],"H� uma centelha de bondade em todo mundo. (Bom)");

    strcpy(criminoso.vinculo[0],"Eu estou tentando quitar uma d�vida que tenho com um generoso benfeitor.");
    strcpy(criminoso.vinculo[1],"Meus ganhos, honestos ou n�o, s�o para sustentar minha fam�lia.");
    strcpy(criminoso.vinculo[2],"Algo importante foi roubado de mim, e eu vou recuper�-lo.");
    strcpy(criminoso.vinculo[3],"Eu me tornarei o maior ladr�o que j� existiu.");
    strcpy(criminoso.vinculo[4],"Eu sou culpado por um terr�vel crime, espero algum dia poder me redimir.");
    strcpy(criminoso.vinculo[5],"Algu�m que amo morreu por causa de um erro que cometi. Isso nunca acontecer� novamente.");

    strcpy(criminoso.defeito[0],"Quando vejo algo valioso, n�o consigo pensar em mais nada, al�m de roub�-lo.");
    strcpy(criminoso.defeito[1],"Quando confrontado com uma escolha entre dinheiro e amigo, eu bem que escolho o dinheiro.");
    strcpy(criminoso.defeito[2],"Se h� um plano, eu vou esquec�-lo. Se eu n�o esquec�-lo, vou ignor�-lo.");
    strcpy(criminoso.defeito[3],"Eu tenho um 'tique' que revela se estou mentindo.");
    strcpy(criminoso.defeito[4],"Eu viro as costas e corro quando as coisas come�am a ficar ruins.");
    strcpy(criminoso.defeito[5],"Um inocente foi preso por um crime que eu cometi. Por mim tudo bem.");

    strcpy(criminoso.tabela_extra[0],"Assaltante");
    strcpy(criminoso.tabela_extra[1],"Assassino de aluguel");
    strcpy(criminoso.tabela_extra[2],"Batedor de carteira");
    strcpy(criminoso.tabela_extra[3],"Chantagista");
    strcpy(criminoso.tabela_extra[4],"Contrabandista");
    strcpy(criminoso.tabela_extra[5],"Executor");
    strcpy(criminoso.tabela_extra[6],"Ladr�o de estrada");
    strcpy(criminoso.tabela_extra[7],"Receptador");

    eremita.nome = "Eremita";
    strcpy(eremita.personalidade[0],"Eu fiquei tanto tempo isolado que raramente falo, preferindo gestos e grunhidos ocasionais.");
    strcpy(eremita.personalidade[1],"Eu sou absurdamente sereno, mesmo em face do desespero.");
    strcpy(eremita.personalidade[2],"O l�der da minha comunidade tem algo s�bio a dizer sobre cada t�pico, eu estou ansioso para partilhar dessa sabedoria.");
    strcpy(eremita.personalidade[3],"Eu sinto uma empatia tremenda por todos que sofrem.");
    strcpy(eremita.personalidade[4],"Eu estou alheio a etiqueta e expectativas sociais.");
    strcpy(eremita.personalidade[5],"Eu relaciono tudo que acontece comigo a um grande plano c�smico.");
    strcpy(eremita.personalidade[6],"Eu, muitas vezes, me perco em meus pensamentos e contempla��o me tornando alheio ao meu redor.");
    strcpy(eremita.personalidade[7],"Eu estou trabalhando em uma grande teoria filos�fica e adoro partilhar minhas ideias.");

    strcpy(eremita.ideal[0],"Meus dons devem ser partilhados com todos, n�o usados em benef�cio pr�prio (Bom)");
    strcpy(eremita.ideal[1],"Emo��es n�o podem obscurecer meus sentidos do que � certo e verdade, ou meu pensamento l�gico. (Leal)");
    strcpy(eremita.ideal[2],"Questionamentos e curiosidade s�o os pilares do progresso. (Ca�tico)");
    strcpy(eremita.ideal[3],"Isolamento e contempla��o s�o caminhos para poderes m�sticos e m�gicos. (Mau)");
    strcpy(eremita.ideal[4],"Se intrometer nos assuntos dos outros s� traz problemas. (Neutro)");
    strcpy(eremita.ideal[5],"Se voc� conhece a si mesmo, n�o a mais nada para saber. (Qualquer)");

    strcpy(eremita.vinculo[0],"Nada � mais importante que os outros membros do eremit�rio, ordem ou associa��o.");
    strcpy(eremita.vinculo[1],"Eu entrei em reclus�o para me esconder daqueles que ainda devem estar me ca�ando. Algum dia irei confront�los.");
    strcpy(eremita.vinculo[2],"Eu ainda busco o esclarecimento que eu perseguia durante meu isolamento e continuo a me iludir.");
    strcpy(eremita.vinculo[3],"Eu entrei em reclus�o porque eu amava algu�m que eu n�o podia ter.");
    strcpy(eremita.vinculo[4],"Se minha descoberta vir � tona, ela poder� trazer destrui��o ao mundo.");
    strcpy(eremita.vinculo[5],"Meu isolamento me deu grande discernimento sobre um grande mal que apenas eu posso destruir.");

    strcpy(eremita.defeito[0],"Agora que voltei ao mundo, eu desfruto de seus prazeres um pouco demais.");
    strcpy(eremita.defeito[1],"Eu escondo nas sombras, pensamentos sanguin�rios que meu isolamento e medita��o n�o conseguiram apagar.");
    strcpy(eremita.defeito[2],"Eu sou dogm�tico em meus pensamentos e filosofia.");
    strcpy(eremita.defeito[3],"Eu deixo meu desejo de vencer discuss�es ofuscar amizades e harmonia.");
    strcpy(eremita.defeito[4],"Eu me arrisco muito para descobrir um pouco de conhecimento perdido.");
    strcpy(eremita.defeito[5],"Eu gosto de guardar segredos e n�o os partilho com ningu�m.");

    strcpy(eremita.tabela_extra[0],"Eu estava em busca de esclarecimento espiritual.");
    strcpy(eremita.tabela_extra[1],"Eu estava participando da vida comunal de acordo com os ditames de uma ordem religiosa.");
    strcpy(eremita.tabela_extra[2],"Eu fui exilado por um crime que n�o cometi.");
    strcpy(eremita.tabela_extra[3],"Eu me afastei da sociedade ap�s um evento que mudou minha vida.");
    strcpy(eremita.tabela_extra[4],"Eu precisava de um lugar tranquilo para trabalhar minha arte, literatura, m�sica ou manifesto.");
    strcpy(eremita.tabela_extra[5],"Eu precisava comungar com a natureza, longe da civiliza��o.");
    strcpy(eremita.tabela_extra[6],"Eu era o guardi�o de uma ruina ou rel�quia antiga.");
    strcpy(eremita.tabela_extra[7],"Eu era um peregrino em busca de uma pessoa, lugar ou rel�quia de grande signific�ncia espiritual.");

    forasteiro.nome = "Forasteiro";
    strcpy(forasteiro.personalidade[0],"Eu fui guiado por uma sede de viagens que me levou a abandonas meu lar.");
    strcpy(forasteiro.personalidade[1],"Eu cuido dos meus amigos como se eles fossem filhotes rec�m-nascidos.");
    strcpy(forasteiro.personalidade[2],"Certa vez, eu corri quarenta quil�metros sem parar alertar meu cl� da aproxima��o de uma horda orc. Eu faria de novo se fosse necess�rio.");
    strcpy(forasteiro.personalidade[3],"Eu tenho uma li��o pra cada situa��o, aprendida observando a natureza.");
    strcpy(forasteiro.personalidade[4],"Eu n�o vejo lugar para o povo rico e educado. Dinheiro e modos n�o v�o salv�-lo de um urso-coruja faminto.");
    strcpy(forasteiro.personalidade[5],"Estou sempre pegando coisas, distraidamente brincando com elas e, �s vezes, quebrando-as.");
    strcpy(forasteiro.personalidade[6],"Eu me sinto muito mais confort�vel entre animais que entre pessoas.");
    strcpy(forasteiro.personalidade[7],"Eu fui, de fato, criado por lobos.");

    strcpy(forasteiro.ideal[0],"A vida � como as esta��es, em constante mudan�a, e n�s devemos mudar com ela. (Ca�tico)");
    strcpy(forasteiro.ideal[1],"� responsabilidade de todos trazer a maior felicidade para toda a tribo. (Bom)");
    strcpy(forasteiro.ideal[2],"Se eu me desonrar, eu desonrarei todo o meu cl�. (Leal)");
    strcpy(forasteiro.ideal[3],"O mais forte deve governar. (Mau)");
    strcpy(forasteiro.ideal[4],"O mundo natural � mais importante que todas as constru��es da civiliza��o. (Neutro)");
    strcpy(forasteiro.ideal[5],"Eu devo adquirir gloria em batalha, para mim e para meu cl�. (Qualquer)");

    strcpy(forasteiro.vinculo[0],"Minha fam�lia, cl� ou tribo � a coisa mais importante na minha vida, mesmo quando eles est�o longe.");
    strcpy(forasteiro.vinculo[1],"Uma ofensa a natureza intocada do meu lar � uma ofensa a mim.");
    strcpy(forasteiro.vinculo[2],"Eu trarei uma f�ria terr�vel aos malfeitores que destru�ram minha terra natal.");
    strcpy(forasteiro.vinculo[3],"Eu sou o �ltimo da minha tribo e cabe a mim garantir que seus nomes fa�am parte das lendas.");
    strcpy(forasteiro.vinculo[4],"Eu sofro de vis�es terr�veis de um desastre vindouro, e farei qualquer coisa para impedi-lo.");
    strcpy(forasteiro.vinculo[5],"� meu dever prover filhos para sustentar minha tribo.");

    strcpy(forasteiro.defeito[0],"Sou muito apaixonado por cerveja, vinho e outras bebidas.");
    strcpy(forasteiro.defeito[1],"N�o existe lugar para precau��o em uma vida vivida ao m�ximo.");
    strcpy(forasteiro.defeito[2],"Eu lembro de cada insulto que sofri e nutro um ressentimento silencioso contra qualquer um que j� tenha me insultado");
    strcpy(forasteiro.defeito[3],"Eu tenho dificuldade em confiar em membros de outras ra�as, tribos ou sociedades.");
    strcpy(forasteiro.defeito[4],"A viol�ncia � minha resposta para quase todos os obst�culos.");
    strcpy(forasteiro.defeito[5],"N�o espere que eu salve aqueles que n�o conseguem se virar sozinhos. � a lei da natureza que os fortes prosperem e os fracos pere�am.");

    strcpy(forasteiro.tabela_extra[0],"Assentado");
    strcpy(forasteiro.tabela_extra[1],"Armadilheiro");
    strcpy(forasteiro.tabela_extra[2],"Ca�ador de recompensa");
    strcpy(forasteiro.tabela_extra[3],"Exilado ou p�ria");
    strcpy(forasteiro.tabela_extra[4],"Forrageador");
    strcpy(forasteiro.tabela_extra[5],"Guia");
    strcpy(forasteiro.tabela_extra[6],"Mateiro");
    strcpy(forasteiro.tabela_extra[7],"N�made tribal");
    strcpy(forasteiro.tabela_extra[8],"Peregrino");
    strcpy(forasteiro.tabela_extra[9],"Saqueador tribal");

    heroi.nome = "Heroi do Povo";
    strcpy(heroi.personalidade[0],"Eu julgo as pessoas por suas a��es, n�o por suas palavras.");
    strcpy(heroi.personalidade[1],"Se algu�m est� em apuros, eu estou sempre pronto para ajudar.");
    strcpy(heroi.personalidade[2],"Quando eu fixo minha mente em algo, eu sigo esse caminho, n�o importa o que fique no caminho.");
    strcpy(heroi.personalidade[3],"Eu possuo um forte senso de justi�a e sempre tento encontrar a solu��o mais equilibrada para as discuss�es.");
    strcpy(heroi.personalidade[4],"Eu confio em minhas habilidades e farei o que for necess�rio para que os outros confiem tamb�m.");
    strcpy(heroi.personalidade[5],"Pensar � para os outros, eu prefiro agir.");
    strcpy(heroi.personalidade[6],"Eu abuso de palavras longas na tentativa de soar inteligente.");
    strcpy(heroi.personalidade[7],"Eu me entedio f�cil. Para onde devo ir para me encontrar com meu destino?");

    strcpy(heroi.ideal[0],"As pessoas merecem ser tratadas com dignidade e respeito. (Bom)");
    strcpy(heroi.ideal[1],"Ningu�m merece tratamento diferenciado perante a lei, muito menos estar acima dela. (Leal)");
    strcpy(heroi.ideal[2],"N�o pode haver permiss�o para tiranos oprimirem o povo. (Ca�tico)");
    strcpy(heroi.ideal[3],"Se eu ficar forte, eu posso pegar tudo o que eu quiser o que eu desejar. (Mal)");
    strcpy(heroi.ideal[4],"N�o h� nada de bom em fingir ser algo que n�o sou. (Neutro)");
    strcpy(heroi.ideal[5],"Nada, nem ningu�m, pode me manter longe do meu chamado. (Qualquer)");

    strcpy(heroi.vinculo[0],"Eu tenho fam�lia, embora n�o fa�a a m�nima ideia de onde eles est�o, espero encontr�-los um dia.");
    strcpy(heroi.vinculo[1],"Eu trabalho a terra, eu amo a terra e eu vou defender a terra.");
    strcpy(heroi.vinculo[2],"Um nobre orgulhoso me deu uma bela surra, e eu vou ter minha vingan�a em qualquer valent�o que encontrar.");
    strcpy(heroi.vinculo[3],"Minhas ferramentas s�o s�mbolo de minha vida passada, eu as carregarei para nunca me esquecer de minhas origens.");
    strcpy(heroi.vinculo[4],"Eu devo proteger aqueles que n�o podem se defender.");
    strcpy(heroi.vinculo[5],"Gostaria que meu amor viesse comigo para seguir meu destino.");

    strcpy(heroi.defeito[0],"O tirano que comanda minha terra n�o vai parar at� ver meu cad�ver.");
    strcpy(heroi.defeito[1],"Eu estou convencido sobre o significado do meu destino, e cego aos riscos e falhas.");
    strcpy(heroi.defeito[2],"As pessoas que me conhecem desde crian�a sabem de um vergonhoso segredo meu, eu n�o poderei voltar para casa nunca.");
    strcpy(heroi.defeito[3],"Eu tenho uma fraqueza pelos v�cios da cidade, especialmente a bebedeira.");
    strcpy(heroi.defeito[4],"Secretamente, eu acredito que as coisas estariam melhores se algum tirano comandasse a regi�o.");
    strcpy(heroi.defeito[5],"Eu tenho dificuldades em confiar em meus aliados.");

    strcpy(heroi.tabela_extra[0],"Eu me opus contra agentes de um tirano.");
    strcpy(heroi.tabela_extra[1],"Eu salvei pessoas durante um desastre natural.");
    strcpy(heroi.tabela_extra[2],"Eu enfrentei sozinho um terr�vel monstro.");
    strcpy(heroi.tabela_extra[3],"Eu roubei de um mercador corrupto para ajudar os pobres.");
    strcpy(heroi.tabela_extra[4],"Eu liderei uma mil�cia na batalha contra um ex�rcito.");
    strcpy(heroi.tabela_extra[5],"Eu invadi o castelo de um tirano e roubei armas para entregar ao povo.");
    strcpy(heroi.tabela_extra[6],"Eu treinei os camponeses no uso de ferramentas do campo como armas para enfrentar soldados de um tirano.");
    strcpy(heroi.tabela_extra[7],"Um lorde rescindiu um decreto que desfavorecia o povo ap�s eu protestar contra ele.");
    strcpy(heroi.tabela_extra[8],"Um ser celestial, fe�rico, ou similar, deu-me uma b�n��o ou revelou minha origem secreta.");
    strcpy(heroi.tabela_extra[9],"Recrutado para o ex�rcito de um lorde, eu prevaleci na lideran�a e fui condecorado por hero�smo.");

    marinheiro.nome = "Marinheiro";
    strcpy(marinheiro.personalidade[0],"Meus amigos sabem que podem contar comigo pro que der e vier.");
    strcpy(marinheiro.personalidade[1],"Eu trabalho duro para que possa me divertir muito quando o trabalho estiver pronto.");
    strcpy(marinheiro.personalidade[2],"Eu gosto de navegar para novos portos e fazer novas amizades acompanhado de uma jarra de cerveja.");
    strcpy(marinheiro.personalidade[3],"Eu modifico alguns fatos para o bem de uma boa hist�ria.");
    strcpy(marinheiro.personalidade[4],"Pra mim, uma briga de taverna � uma �tima forma de conhecer uma nova cidade.");
    strcpy(marinheiro.personalidade[5],"Eu nunca deixo passar uma aposta amig�vel.");
    strcpy(marinheiro.personalidade[6],"Meu vocabul�rio � t�o sujo quanto o covil de um otyugh.");
    strcpy(marinheiro.personalidade[7],"Eu gosto de trabalhos bem feitos, especialmente se eu puder convencer algu�m a faz�-los.");

    strcpy(marinheiro.ideal[0],"A coisa que mantem um navio unido � o respeito m�tuo entre o capit�o e a tripula��o. (Bem)");
    strcpy(marinheiro.ideal[1],"Todos n�s fazemos o trabalho, portanto, todos partilhamos os esp�lios. (Leal)");
    strcpy(marinheiro.ideal[2],"O mar � liberdade a liberdade de ir aonde quiser. (Ca�tico)");
    strcpy(marinheiro.ideal[3],"Eu sou um predador e os outros navios no mar s�o minhas presas. (Mau)");
    strcpy(marinheiro.ideal[4],"Eu sou apegado aos meus companheiros de tripula��o, n�o a ideais. (Neutro)");
    strcpy(marinheiro.ideal[5],"Algum dia eu serei dono do meu pr�prio navio e tra�arei meu pr�prio destino. (Qualquer)");

    strcpy(marinheiro.vinculo[0],"Eu sou leal ao meu capit�o, primeiramente, o resto vem em segundo.");
    strcpy(marinheiro.vinculo[1],"O navio � o mais importante � tripulantes e capit�es vem e v�o.");
    strcpy(marinheiro.vinculo[2],"Eu sempre me lembrarei do meu primeiro navio.");
    strcpy(marinheiro.vinculo[3],"Em uma cidade portu�ria, eu tenho uma amante que quase me roubou do mar.");
    strcpy(marinheiro.vinculo[4],"Eu fui enganado na divis�o dos esp�lios e eu quero o que me � devido.");
    strcpy(marinheiro.vinculo[5],"Cru�is piratas mataram meu capit�o e companheiros de tripula��o, saquearam nosso navio e me deixaram para morrer. A vingan�a ser� minha.");

    strcpy(marinheiro.defeito[0],"Eu sigo ordens, mesmo que eu ache que est�o erradas.");
    strcpy(marinheiro.defeito[1],"Eu direi qualquer coisa para evitar trabalho extra.");
    strcpy(marinheiro.defeito[2],"Certa vez, algu�m duvidou da minha coragem, eu nunca recuo, n�o importa o qu�o perigosa seja a situa��o.");
    strcpy(marinheiro.defeito[3],"Quando come�o a beber, � dif�cil pra mim parar.");
    strcpy(marinheiro.defeito[4],"Eu n�o resisto a uma sacolinha de moedas dando sopa ou outras bugigangas que encontro.");
    strcpy(marinheiro.defeito[5],"Meu orgulho provavelmente levar� a minha destrui��o.");

    nobre.nome = "Nobre";
    strcpy(nobre.personalidade[0],"Minha bajula��o eloquente faz com que todos com quem eu converse se sintam a pessoa mais maravilhosa e importante do mundo.");
    strcpy(nobre.personalidade[1],"As pessoas comuns me amam por minha bondade e generosidade.");
    strcpy(nobre.personalidade[2],"Ningu�m pode duvidar, olhando para o meu porte real, que estou acima das massas plebeias.");
    strcpy(nobre.personalidade[3],"Eu tenho grande cuidado de sempre estar no meu melhor e seguir as �ltimas modas.");
    strcpy(nobre.personalidade[4],"Eu n�o gosto de sujar minhas m�os, e eu n�o vou ser pego em acomoda��es inadequadas.");
    strcpy(nobre.personalidade[5],"Apesar da minha origem nobre, eu n�o estou acima dos outros. O sangue � um s�.");
    strcpy(nobre.personalidade[6],"Meu apoio, uma vez perdido, n�o volta.");
    strcpy(nobre.personalidade[7],"Se voc� me ferir, eu irei esmag�-lo, arruinar seu nome, e salgar seus campos.");

    strcpy(nobre.ideal[0],"O respeito a mim � devido por causa da minha posi��o, mas todas as pessoas, independentemente da posi��o merecem ser tratados com dignidade. (Bom)");
    strcpy(nobre.ideal[1],"� o meu dever respeitar a autoridade daqueles acima de mim, assim como aqueles abaixo de mim devem me respeitar. (Leal)");
    strcpy(nobre.ideal[2],"Devo provar que posso me cuidar sem os mimos da minha fam�lia. (Ca�tico)");
    strcpy(nobre.ideal[3],"Se eu puder alcan�ar mais poder, ningu�m vai me dizer o que fazer. (Mau)");
    strcpy(nobre.ideal[4],"O sangue corre mais grosso que a �gua. (Qualquer)");
    strcpy(nobre.ideal[5],"� o meu dever proteger e cuidar das pessoas abaixo de mim. (Bom)");

    strcpy(nobre.vinculo[0],"Eu vou encarar qualquer desafio para ganhar a aprova��o da minha fam�lia.");
    strcpy(nobre.vinculo[1],"A alian�a da minha casa com outra fam�lia nobre deve ser mantida a todo custo.");
    strcpy(nobre.vinculo[2],"Nada � mais importante do que os outros membros da minha fam�lia.");
    strcpy(nobre.vinculo[3],"Eu sou apaixonado pela herdeira de uma fam�lia que a minha fam�lia despreza.");
    strcpy(nobre.vinculo[4],"Minha lealdade ao meu soberano � inabal�vel.");
    strcpy(nobre.vinculo[5],"As pessoas comuns devem me ver como um her�i do povo.");

    strcpy(nobre.defeito[0],"Eu secretamente acredito que todos est�o abaixo de mim.");
    strcpy(nobre.defeito[1],"Eu escondo um segredo verdadeiramente escandaloso que poderia arruinar minha fam�lia para sempre.");
    strcpy(nobre.defeito[2],"Muitas vezes eu ou�o insultos e amea�as veladas em cada palavra dirigida a mim, e me irrito muito r�pido.");
    strcpy(nobre.defeito[3],"Eu tenho um desejo insaci�vel por prazeres carnais.");
    strcpy(nobre.defeito[4],"Na verdade, o mundo gira ao meu redor.");
    strcpy(nobre.defeito[5],"Pelas minhas palavras e a��es, muitas vezes, envergonho minha fam�lia.");

    orfao.nome = "�rf�o";
    strcpy(orfao.personalidade[0],"Eu escondo peda�os de comida e bugigangas em meus bolsos.");
    strcpy(orfao.personalidade[1],"Eu pergunto um monte e coisas.");
    strcpy(orfao.personalidade[2],"Eu gosto de me espremer em locais pequenos onde ningu�m possa me alcan�ar.");
    strcpy(orfao.personalidade[3],"Eu durmo encostado em um muro ou �rvore, abra�ado com todas as minhas posses.");
    strcpy(orfao.personalidade[4],"Eu como feito um porco e tenho maus modos.");
    strcpy(orfao.personalidade[5],"Eu acho que todos que s�o gentis comigo tem segundas inten��es.");
    strcpy(orfao.personalidade[6],"Eu n�o gosto de tomar banho.");
    strcpy(orfao.personalidade[7],"Eu digo na cara o que as outras pessoas insinuam ou escondem.");

    strcpy(orfao.ideal[0],"Todas as pessoas, ricas ou pobres, merecem respeito. (Bom)");
    strcpy(orfao.ideal[1],"N�s temos que tomar conta uns dos outros, porque ningu�m mais o far�. (Leal)");
    strcpy(orfao.ideal[2],"Os baixos se erguer�o e os altos ir�o tombar. A mudan�a � a natureza das coisas. (Ca�tico)");
    strcpy(orfao.ideal[3],"Os ricos precisam ver como a vida e morte � nas sarjetas. (Mau)");
    strcpy(orfao.ideal[4],"Eu ajudo as pessoas que me ajudam � � isso que nos mantem vivos. (Neutro)");
    strcpy(orfao.ideal[5],"Eu vou provar que sou merecedor de uma vida melhor. (Qualquer)");

    strcpy(orfao.vinculo[0],"Minha cidade ou vila � meu lar, e eu vou lutar para defend�-lo.");
    strcpy(orfao.vinculo[1],"Eu patrocino um orfanato para que outros n�o passem pelo que fui for�ado a passar.");
    strcpy(orfao.vinculo[2],"Eu devo minha sobreviv�ncia a outros �rf�o que me ensinou a vida nas ruas.");
    strcpy(orfao.vinculo[3],"Eu tenho uma d�vida que nunca poderei pagar com uma pessoa que teve pena de mim.");
    strcpy(orfao.vinculo[4],"Eu sai da minha vida de pobreza roubando uma pessoa importante, eu sou procurado por isso.");
    strcpy(orfao.vinculo[5],"Ningu�m deveria ter suportar as dificuldades pelas quais passei.");

    strcpy(orfao.defeito[0],"Se eu estiver em desvantagem, eu vou fugir de uma briga.");
    strcpy(orfao.defeito[1],"Ouro parece ser muito dinheiro pra mim, e eu faria praticamente qualquer coisa por mais dele.");
    strcpy(orfao.defeito[2],"Eu nunca vou confiar em ningu�m plenamente, al�m de mim mesmo.");
    strcpy(orfao.defeito[3],"Eu prefiro matar algu�m enquanto dorme que uma luta justa.");
    strcpy(orfao.defeito[4],"N�o � roubo se eu preciso mais que outra pessoa.");
    strcpy(orfao.defeito[5],"As pessoas que n�o podem se virar sozinhas, tem o que merecem.");

    sabio.nome = "S�bio";
    strcpy(sabio.personalidade[0],"Eu escondo peda�os de comida e bugigangas em meus bolsos.");
    strcpy(sabio.personalidade[1],"Eu pergunto um monte e coisas.");
    strcpy(sabio.personalidade[2],"Eu gosto de me espremer em locais pequenos onde ningu�m possa me alcan�ar.");
    strcpy(sabio.personalidade[3],"Eu durmo encostado em um muro ou �rvore, abra�ado com todas as minhas posses.");
    strcpy(sabio.personalidade[4],"Eu como feito um porco e tenho maus modos.");
    strcpy(sabio.personalidade[5],"Eu acho que todos que s�o gentis comigo tem segundas inten��es.");
    strcpy(sabio.personalidade[6],"Eu n�o gosto de tomar banho.");
    strcpy(sabio.personalidade[7],"Eu digo na cara o que as outras pessoas insinuam ou escondem.");

    strcpy(sabio.ideal[0],"Todas as pessoas, ricas ou pobres, merecem respeito. (Bom)");
    strcpy(sabio.ideal[1],"N�s temos que tomar conta uns dos outros, porque ningu�m mais o far�. (Leal)");
    strcpy(sabio.ideal[2],"Os baixos se erguer�o e os altos ir�o tombar. A mudan�a � a natureza das coisas. (Ca�tico)");
    strcpy(sabio.ideal[3],"Os ricos precisam ver como a vida e morte � nas sarjetas. (Mau)");
    strcpy(sabio.ideal[4],"Eu ajudo as pessoas que me ajudam � isso que nos mantem vivos. (Neutro)");
    strcpy(sabio.ideal[5],"Eu vou provar que sou merecedor de uma vida melhor. (Qualquer)");

    strcpy(sabio.vinculo[0],"Minha cidade ou vila � meu lar, e eu vou lutar para defend�-lo.");
    strcpy(sabio.vinculo[1],"Eu patrocino um orfanato para que outros n�o passem pelo que fui for�ado a passar.");
    strcpy(sabio.vinculo[2],"Eu devo minha sobreviv�ncia a outros �rf�o que me ensinou a vida nas ruas.");
    strcpy(sabio.vinculo[3],"Eu tenho uma d�vida que nunca poderei pagar com uma pessoa que teve pena de mim.");
    strcpy(sabio.vinculo[4],"Eu sai da minha vida de pobreza roubando uma pessoa importante, eu sou procurado por isso.");
    strcpy(sabio.vinculo[5],"Ningu�m deveria ter suportar as dificuldades pelas quais passei.");

    strcpy(sabio.defeito[0],"Se eu estiver em desvantagem, eu vou fugir de uma briga.");
    strcpy(sabio.defeito[1],"Ouro parece ser muito dinheiro pra mim, e eu faria praticamente qualquer coisa por mais dele.");
    strcpy(sabio.defeito[2],"Eu nunca vou confiar em ningu�m plenamente, al�m de mim mesmo.");
    strcpy(sabio.defeito[3],"Eu prefiro matar algu�m enquanto dorme que uma luta justa.");
    strcpy(sabio.defeito[4],"N�o � roubo se eu preciso mais que outra pessoa.");
    strcpy(sabio.defeito[5],"As pessoas que n�o podem se virar sozinhas, tem o que merecem.");

    strcpy(sabio.tabela_extra[0],"Acad�mico desacreditado");
    strcpy(sabio.tabela_extra[1],"Alquimista");
    strcpy(sabio.tabela_extra[2],"Aprendiz de mago");
    strcpy(sabio.tabela_extra[3],"Astr�nomo");
    strcpy(sabio.tabela_extra[4],"Bibliotec�rio");
    strcpy(sabio.tabela_extra[5],"Escriba");
    strcpy(sabio.tabela_extra[6],"Pesquisador");
    strcpy(sabio.tabela_extra[7],"Professor");

    soldado.nome = "Soldado";
    strcpy(soldado.personalidade[0],"Eu sou sempre polido e respeitoso.");
    strcpy(soldado.personalidade[1],"Eu sou assombrado pelas mem�rias da guerra. N�o consigo tirar aquelas imagens da minha cabe�a.");
    strcpy(soldado.personalidade[2],"Eu perdi muitos amigos, e sou muito devagar para fazer novos.");
    strcpy(soldado.personalidade[3],"Eu tenho muitas hist�rias de inspira��o e cautela da �poca de minha experi�ncia militar que s�o relevantes em todas as situa��es de combate.");
    strcpy(soldado.personalidade[4],"Eu n�o consigo encarar um c�o infernal sem vacilar.");
    strcpy(soldado.personalidade[5],"Eu gosto de ser forte e de quebrar coisas.");
    strcpy(soldado.personalidade[6],"Eu tenho um senso de humor grosseiro.");
    strcpy(soldado.personalidade[7],"Eu enfrento os problemas de frente. Uma solu��o direta � o melhor caminho para o sucesso.");

    strcpy(soldado.ideal[0],"Nosso destino � dar nossas vidas em defesa de terceiros. (Bom)");
    strcpy(soldado.ideal[1],"Eu fa�o o que tenho que fazer e obede�o apenas a autoridade. (Leal)");
    strcpy(soldado.ideal[2],"Quando pessoas seguem ordens cegas elas apoiam um tipo de tirania. (Ca�tico)");
    strcpy(soldado.ideal[3],"A vida � como uma guerra, o mais forte vence. (Mau)");
    strcpy(soldado.ideal[4],"Ideais n�o valem a pena se voc� matar, ou for � guerra por eles. (Neutro)");
    strcpy(soldado.ideal[5],"Minha cidade, na��o ou meu povo, s�o tudo o que importa para mim. (Qualquer)");

    strcpy(soldado.vinculo[0],"Eu ainda daria a minha vida pelas pessoas com quem servi.");
    strcpy(soldado.vinculo[1],"Algu�m salvou minha vida no campo de batalha. Desde aquele dia eu nunca deixo nenhum amigo para tr�s.");
    strcpy(soldado.vinculo[2],"Minha honra � minha vida.");
    strcpy(soldado.vinculo[3],"Eu nunca esquecerei a destruidora derrota que minha companhia sofreu ou os inimigos que a causaram.");
    strcpy(soldado.vinculo[4],"Aqueles que lutam ao meu lado s�o aqueles por quem vale a pena morrer.");
    strcpy(soldado.vinculo[5],"Eu luto por aqueles que n�o podem lutar por si mesmos.");

    strcpy(soldado.defeito[0],"O inimigo monstruoso que enfrentei em uma batalha ainda me deixa tremendo de medo.");
    strcpy(soldado.defeito[1],"Eu tenho pouco respeito por aqueles que n�o se provam bons combatentes.");
    strcpy(soldado.defeito[2],"Eu cometi um terr�vel erro em batalha, o que custou muitas vidas eu farei de tudo para manter esse erro em segredo.");
    strcpy(soldado.defeito[3],"Meu �dio por meus inimigos � cego e irracional.");
    strcpy(soldado.defeito[4],"Eu obede�o a lei, mesmo se a lei trouxer a ang�stia.");
    strcpy(soldado.defeito[5],"Eu prefiro comer minha armadura a admitir que estou errado.");

    strcpy(soldado.tabela_extra[0],"Batedor");
    strcpy(soldado.tabela_extra[1],"Cavaleiro");
    strcpy(soldado.tabela_extra[2],"Contramestre");
    strcpy(soldado.tabela_extra[3],"Equipe de apoio (cozinheiro, ferreiro)");
    strcpy(soldado.tabela_extra[4],"Infantaria");
    strcpy(soldado.tabela_extra[5],"M�dico");
    strcpy(soldado.tabela_extra[6],"Oficial");
    strcpy(soldado.tabela_extra[7],"Porta-estandarte");

}

void FICHA(){

    char antecedente[QTD_ANTECEDENTE][MAX_CARACTERES]={{"Ac�lito"},{"Artes�o da Guilda"},{"Artista"},
                                          {"Charlat�o"},{"Criminoso"},{"Eremita"},
                                          {"Forasteiro"},{"Her�i do Povo"},{"Marinheiro"},
                                          {"Nobre"},{"�rf�o"},{"S�bio"},
                                          {"Soldado"}};


    int rand_tipo, rand_nomes_m, rand_nomes_f, rand_antecedente;
    int antec_pers=0, antec_ideal=0, antec_vinc=0, antec_defe=0, antec_tabe=0;
    int escolha_antec = 0, escolha_sexo = 0, escolha_nomeM = 0,escolha_nomeF = 0;
    char escolha_sex_tipo[100];
    time_t t;

    srand((unsigned) time(&t));
    antecedentes_lista();

    antec_pers = rand() % QTD_PERSONALIDADE;
    antec_ideal = rand() % QTD_IDEAIS;
    antec_vinc = rand() % QTD_IDEAIS;
    antec_defe = rand() % QTD_IDEAIS;
    escolha_nomeM = rand() % QTD_NOMES_M;
    escolha_nomeF = rand() % QTD_NOMES_F;
    escolha_antec = rand() % QTD_ANTECEDENTE;
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

    printf("___________ FICHA DE PERSONAGEM ___________\n\n",escolha_sexo);
    if(escolha_sexo == 0){
            printf("Nome: %s \n",Nomes_M[escolha_nomeM]);
        }
    else if(escolha_sexo == 1){
            printf("Nome: %s \n",Nomes_F[escolha_nomeF]);
        }
    /// acolito
    if(antecedente[escolha_antec] == antecedente[0]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", acolito.personalidade[antec_pers]);
            printf("ideal: %s \n", acolito.ideal[antec_ideal]);
            printf("vinculo: %s \n", acolito.vinculo[antec_vinc]);
            printf("defeito: %s \n", acolito.defeito[antec_defe]);
        }
    /// artesao
    if(antecedente[escolha_antec] == antecedente[1]){
        antec_tabe = rand() % 20;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", artesao.personalidade[antec_pers]);
            printf("ideal: %s \n", artesao.ideal[antec_ideal]);
            printf("vinculo: %s \n", artesao.vinculo[antec_vinc]);
            printf("defeito: %s \n", artesao.defeito[antec_defe]);
            printf("Tabela extra: %s \n", artesao.tabela_extra[antec_tabe]);
        }
    /// artista
    if(antecedente[escolha_antec] == antecedente[2]){
        antec_tabe = rand() % 10;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", artista.personalidade[antec_pers]);
            printf("ideal: %s \n", artista.ideal[antec_ideal]);
            printf("vinculo: %s \n", artista.vinculo[antec_vinc]);
            printf("defeito: %s \n", artista.defeito[antec_defe]);
            printf("tabela_extra: %s \n", artista.tabela_extra[antec_tabe]);
        }
    /// charlatao
    if(antecedente[escolha_antec] == antecedente[3]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", charlatao.personalidade[antec_pers]);
            printf("ideal: %s \n", charlatao.ideal[antec_ideal]);
            printf("vinculo: %s \n", charlatao.vinculo[antec_vinc]);
            printf("defeito: %s \n", charlatao.defeito[antec_defe]);
        }
    /// criminoso
    if(antecedente[escolha_antec] == antecedente[4]){
        antec_tabe = rand() % 8;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", criminoso.personalidade[antec_pers]);
            printf("ideal: %s \n", criminoso.ideal[antec_ideal]);
            printf("vinculo: %s \n", criminoso.vinculo[antec_vinc]);
            printf("defeito: %s \n", criminoso.defeito[antec_defe]);
            printf("tabela_extra: %s \n", criminoso.tabela_extra[antec_tabe]);
        }
    /// eremita
    if(antecedente[escolha_antec] == antecedente[5]){
        antec_tabe = rand() % 8;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", eremita.personalidade[antec_pers]);
            printf("ideal: %s \n", eremita.ideal[antec_ideal]);
            printf("vinculo: %s \n", eremita.vinculo[antec_vinc]);
            printf("defeito: %s \n", eremita.defeito[antec_defe]);
            printf("tabela_extra: %s \n", eremita.tabela_extra[antec_tabe]);
        }
    /// forasteiro
    if(antecedente[escolha_antec] == antecedente[6]){
        antec_tabe = rand() % 10;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", forasteiro.personalidade[antec_pers]);
            printf("ideal: %s \n", forasteiro.ideal[antec_ideal]);
            printf("vinculo: %s \n", forasteiro.vinculo[antec_vinc]);
            printf("defeito: %s \n", forasteiro.defeito[antec_defe]);
            printf("tabela_extra: %s \n", forasteiro.tabela_extra[antec_tabe]);
        }
    /// heroi
    if(antecedente[escolha_antec] == antecedente[7]){
        antec_tabe = rand() % 10;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", heroi.personalidade[antec_pers]);
            printf("ideal: %s \n", heroi.ideal[antec_ideal]);
            printf("vinculo: %s \n", heroi.vinculo[antec_vinc]);
            printf("defeito: %s \n", heroi.defeito[antec_defe]);
            printf("tabela_extra: %s \n", heroi.tabela_extra[antec_tabe]);
        }
    /// marinheiro
    if(antecedente[escolha_antec] == antecedente[8]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", marinheiro.personalidade[antec_pers]);
            printf("ideal: %s \n", marinheiro.ideal[antec_ideal]);
            printf("vinculo: %s \n", marinheiro.vinculo[antec_vinc]);
            printf("defeito: %s \n", marinheiro.defeito[antec_defe]);
        }
    /// nobre
    if(antecedente[escolha_antec] == antecedente[9]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", nobre.personalidade[antec_pers]);
            printf("ideal: %s \n", nobre.ideal[antec_ideal]);
            printf("vinculo: %s \n", nobre.vinculo[antec_vinc]);
            printf("defeito: %s \n", nobre.defeito[antec_defe]);
        }
    /// orfao
    if(antecedente[escolha_antec] == antecedente[10]){
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", orfao.personalidade[antec_pers]);
            printf("ideal: %s \n", orfao.ideal[antec_ideal]);
            printf("vinculo: %s \n", orfao.vinculo[antec_vinc]);
            printf("defeito: %s \n", orfao.defeito[antec_defe]);
        }
    /// sabio
    if(antecedente[escolha_antec] == antecedente[11]){
        antec_tabe = rand() % 8;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", sabio.personalidade[antec_pers]);
            printf("ideal: %s \n", sabio.ideal[antec_ideal]);
            printf("vinculo: %s \n", sabio.vinculo[antec_vinc]);
            printf("defeito: %s \n", sabio.defeito[antec_defe]);
            printf("tabela_extra: %s \n", sabio.tabela_extra[antec_tabe]);
        }
    /// soldado
    if(antecedente[escolha_antec] == antecedente[12]){
        antec_tabe = rand() % 8;
        if(antec_tabe<1){
            antec_tabe++;
        }
            printf("Sexo: %s \n", Sexo[escolha_sexo]);
            printf("Tipo: %s \n", antecedente[escolha_antec]);
            printf("Personalidade: %s \n", soldado.personalidade[antec_pers]);
            printf("ideal: %s \n", soldado.ideal[antec_ideal]);
            printf("vinculo: %s \n", soldado.vinculo[antec_vinc]);
            printf("defeito: %s \n", soldado.defeito[antec_defe]);
            printf("tabela_extra: %s \n", soldado.tabela_extra[antec_tabe]);
        }
}
#endif // ANTECEDENTE_H_INCLUDED
