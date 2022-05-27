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

    acolito.nome = "Acólito";
    strcpy(acolito.personalidade[0],"Eu idolatro um herói particular da minha fé, e constantemente me refiro a seus feitos e exemplos.");
    strcpy(acolito.personalidade[1],"Eu consigo encontrar semelhanças mesmo entre o inimigos mais violentos, com empatia e sempre trabalhando pela paz.");
    strcpy(acolito.personalidade[2],"Eu vejo presságios em cada evento e ação. Os deuses estão falando conosco, nós apenas temos de ouvi-los.");
    strcpy(acolito.personalidade[3],"Nada pode abalar minha atitude otimista.");
    strcpy(acolito.personalidade[4],"Eu cito (corretamente ou não) textos sagrados e provérbios em quase qualquer situação.");
    strcpy(acolito.personalidade[5],"Eu sou tolerante (ou intolerante) a qualquer outra fé, e respeito (ou condeno) a adoração a outros deuses.");
    strcpy(acolito.personalidade[6],"Eu aprecio comida requintada, bebidas e a elite entre o alto escalão de meu templo. Uma vida dura me irrita.");
    strcpy(acolito.personalidade[7],"Eu passei tanto tempo no templo que possuo pouca prática em lidar com as pessoas mundo a fora.");

    strcpy(acolito.ideal[0],"As tradições ancestrais de adoração e sacrifício devem ser preservadas e perpetradas. (Leal)");
    strcpy(acolito.ideal[1],"Eu sempre tento ajudar aqueles em necessidade, não importando o custo pessoal. (Bom)");
    strcpy(acolito.ideal[2],"Nós devemos ajudar a conduzir as mudanças que os deuses estão constantemente trabalhando para o mundo. (Caótico)");
    strcpy(acolito.ideal[3],"Eu espero que um dia eu consiga chegar ao topo na hierarquia da minha religião. (Leal)");
    strcpy(acolito.ideal[4],"Eu acredito que minha divindade guia minhas ações. Eu tenho fé que, se eu trabalhar duro, coisas boas acontecerão. (Leal)");
    strcpy(acolito.ideal[5],"Aspiração. Eu busco ser digno da graça do meu deus ao corresponder minhas ações aos seus ensinamentos. (Qualquer)");

    strcpy(acolito.vinculo[0],"Eu morreria para recuperar uma relíquia ancestral de minha fé, perdida há muito tempo.");
    strcpy(acolito.vinculo[1],"Eu ainda terei minha vingança contra o templo corrupto que me acusou de heresia.");
    strcpy(acolito.vinculo[2],"Eu devo minha vida ao sacerdote que me acolheu quando meus pais morreram.");
    strcpy(acolito.vinculo[3],"Tudo o que faço, faço pelo povo.");
    strcpy(acolito.vinculo[4],"Eu farei qualquer coisa para proteger o templo que sirvo.");
    strcpy(acolito.vinculo[5],"Eu busco guardar um texto sagrado que meus inimigos dizem ser herético e tentam destruí-lo.");

    strcpy(acolito.defeito[0],"Eu julgo os outros severamente, e a mim mesmo mais ainda.");
    strcpy(acolito.defeito[1],"Eu deposito muita confiança naqueles que detêm o poder na hierarquia de meu templo.");
    strcpy(acolito.defeito[2],"Minha devoção é muitas vezes me cega perante aqueles que professam a fé do meu deus.");
    strcpy(acolito.defeito[3],"Meu pensamento é inflexível.");
    strcpy(acolito.defeito[4],"Eu suspeito de estranhos e sempre espero o pior deles.");
    strcpy(acolito.defeito[5],"Depois de escolher um objetivo, eu fico obcecado em cumpri-lo, até mesmo em detrimento de qualquer outra coisa em minha vida.");


    artesao.nome = "Artesão da Guilda";
    strcpy(artesao.personalidade[0],"Eu acredito que tudo que valha a pena fazer, vale a pena ser feito direito. Eu não posso evitar – Eu sou perfeccionista.");
    strcpy(artesao.personalidade[1],"Eu sou um esnobe que olha de cima a baixo aqueles que não sabem apreciar artes requintadas.");
    strcpy(artesao.personalidade[2],"Eu sempre quero aprender como as coisas funcionam e o que deixa as pessoas motivadas.");
    strcpy(artesao.personalidade[3],"Eu sou cheio de aforismos espirituosos e tenho um proverbio para cada ocasião.");
    strcpy(artesao.personalidade[4],"Eu sou grosso com as pessoas que não tem o mesmo comprometimento que eu com o trabalho duro e honesto.");
    strcpy(artesao.personalidade[5],"Eu gosto de falar longamente sobre minha profissão.");
    strcpy(artesao.personalidade[6],"Eu não gasto meu dinheiro facilmente e vou barganhar incansavelmente para conseguir o melhor acordo possível.");
    strcpy(artesao.personalidade[7],"Eu sou bem conhecido pelo meu trabalho e quero ter certeza que todos o apreciam. Eu sempre fico surpreso quando conheço pessoas que não ouviram falar de mim.");

    strcpy(artesao.ideal[0],"É dever de todo cidadão civilizado fortalecer os elos da comunidade e a segurança da civilização. (Leal)");
    strcpy(artesao.ideal[1],"Meus talentos me foram dados para que eu pudesse usá-los para beneficiar o mundo. (Bom)");
    strcpy(artesao.ideal[2],"Todos deveriam ser livres para perseguir seus próprios meios de vida. (Caótico)");
    strcpy(artesao.ideal[3],"Eu só estou aqui pelo dinheiro. (Mau)");
    strcpy(artesao.ideal[4],"Eu sou cometido com o povo com quem me importo, não com ideias. (Neutro)");
    strcpy(artesao.ideal[5],"Eu trabalho duro para ser o melhor no meu ofício. (Qualquer)");

    strcpy(artesao.vinculo[0],"A oficina onde aprendi meu negócio é o local mais importante do mundo pra mim.");
    strcpy(artesao.vinculo[1],"Eu criei um trabalho incrível para alguém, mas descobri que ele não era merecedor de recebê-lo. Ainda estou à procura de alguém que seja merecedor.");
    strcpy(artesao.vinculo[2],"Eu tenho uma grande dívida para com minha guilda por fazer de mim a pessoa que sou hoje.");
    strcpy(artesao.vinculo[3],"Eu busco riqueza para conseguir o amor de alguém.");
    strcpy(artesao.vinculo[4],"Um dia eu voltarei para a minha guilda e provarei que sou o maior artesão dentre eles.");
    strcpy(artesao.vinculo[5],"Eu irem me vingar das forças malignas que destruíram meu local de negócios e arruinaram meu estilo de vida.");

    strcpy(artesao.defeito[0],"Eu farei de tudo para pôr minha mãos em algo raro ou inestimável.");
    strcpy(artesao.defeito[1],"Eu rapidamente presumo que alguém está tentando me trapacear.");
    strcpy(artesao.defeito[2],"Ninguém nunca poderá saber que eu, certa vez, roubei dinheiro dos cofres da guilda.");
    strcpy(artesao.defeito[3],"Eu nunca estou satisfeito com o que tenho – eu sempre quero mais.");
    strcpy(artesao.defeito[4],"Eu mataria para adquirir um título de nobreza.");
    strcpy(artesao.defeito[5],"Eu sou terrivelmente invejoso com qualquer um que possa ofuscar meu ofício. Todo lugar que eu vou, estou cercado de rivais.");

    strcpy(artesao.tabela_extra[0],"Alquimistas e boticários");
    strcpy(artesao.tabela_extra[1],"Armeiros, chaveiros e ferreiros finos");
    strcpy(artesao.tabela_extra[2],"Cervejeiros, destiladores e viticultores");
    strcpy(artesao.tabela_extra[3],"Calígrafos, escribas e escrivães");
    strcpy(artesao.tabela_extra[4],"Carpinteiros, construtores de telhado e estucadores");
    strcpy(artesao.tabela_extra[5],"Cartógrafos, agrimensores e desenhistas");
    strcpy(artesao.tabela_extra[6],"Remendões e sapateiros");
    strcpy(artesao.tabela_extra[7],"Cozinheiros e padeiros");
    strcpy(artesao.tabela_extra[8],"Vidraceiros e escultores");
    strcpy(artesao.tabela_extra[9],"Joalheiros e lapidários");
    strcpy(artesao.tabela_extra[10],"Coureiros, peleiros e curtidores");
    strcpy(artesao.tabela_extra[11],"Pedreiros e marceneiros");
    strcpy(artesao.tabela_extra[12],"Pintores, iluminadores e construtores de placas");
    strcpy(artesao.tabela_extra[13],"Oleiros e telheiros");
    strcpy(artesao.tabela_extra[14],"Armadores e veleiros");
    strcpy(artesao.tabela_extra[15],"Ferreiros e forjadores");
    strcpy(artesao.tabela_extra[16],"Funileiros, latoeiros e galheteiros");
    strcpy(artesao.tabela_extra[17],"Fabricantes de carroças e fabricantes de rodas");
    strcpy(artesao.tabela_extra[18],"Tecelões e tintureiros");
    strcpy(artesao.tabela_extra[19],"Entalhadores, tanoeiros e construtores de arcos");

    artista.nome = "Artista";
    strcpy(artista.personalidade[0],"Eu conheço uma história relevante de praticamente todas as situações.");
    strcpy(artista.personalidade[1],"Sempre que eu chego em um lugar novo, eu coleto os rumores locais e espalho fofocas.");
    strcpy(artista.personalidade[2],"Eu sou um romântico incorrigível, sempre em busca daquele “alguém especial.”");
    strcpy(artista.personalidade[3],"Ninguém fica com raiva de mim ou perto de mim por muito tempo, já que eu posso acabar com qualquer tipo de tensão.");
    strcpy(artista.personalidade[4],"Eu amo um bom insulto, até os direcionados a mim.");
    strcpy(artista.personalidade[5],"Eu fico sentido se eu não for o centro das atenções.");
    strcpy(artista.personalidade[6],"Eu não vou me contentar com nada menos que a perfeição.");
    strcpy(artista.personalidade[7],"Eu mudo de ânimo ou de pensamento tão rápido quando mudo eu mudo de nota em uma canção.");

    strcpy(artista.ideal[0],"Quando eu atuo, eu torno o mundo um lugar melhor. (Bom)");
    strcpy(artista.ideal[1],"As histórias, lendas e canções do passado nunca devem ser esquecidas, pois elas nos ensinam quem nós somos. (Leal)");
    strcpy(artista.ideal[2],"O mundo precisa de novas ideias e ações ousadas. (Caótico)");
    strcpy(artista.ideal[3],"Eu só estou aqui pelo dinheiro e pela fama. (Mau)");
    strcpy(artista.ideal[4],"Eu gosto de ver os sorrisos nos rostos das pessoas quando eu atuo. Isso é tudo que importa. (Neutro)");
    strcpy(artista.ideal[5],"A arte deve refletir a alma; ela deve vir de dentro e revelar quem realmente somos. (Qualquer)");

    strcpy(artista.vinculo[0],"Meu instrumento é meu bem mais valioso e ele me lembra de alguém que eu amo.");
    strcpy(artista.vinculo[1],"Alguém roubou meu precioso instrumento e, algum dia, eu vou pegá-lo de volta.");
    strcpy(artista.vinculo[2],"Eu quero ser famoso, custe o que custar.");
    strcpy(artista.vinculo[3],"Eu idolatro um herói dos contos antigos e mensuro meus feitos baseados nessa personalidade.");
    strcpy(artista.vinculo[4],"Eu vou fazer tudo para provar que sou superior eu meu odiado rival.");
    strcpy(artista.vinculo[5],"Eu faria qualquer coisa pelos membros da minha antiga trupe.");

    strcpy(artista.defeito[0],"Eu farei de tudo para ganhar fama e renome.");
    strcpy(artista.defeito[1],"Eu viro um idiota quando vejo um rosto bonito.");
    strcpy(artista.defeito[2],"Um escândalo me impede de voltar para casa novamente. Esse tipo de problema parece me perseguir por ai.");
    strcpy(artista.defeito[3],"Eu, certa vez, satirizei um nobre que ainda quer minha cabeça. Foi um erro que eu adoraria repetir.");
    strcpy(artista.defeito[4],"Eu tenho problemas em esconder meus verdadeiros sentimentos. Minha língua afiada me mete em confusão.");
    strcpy(artista.defeito[5],"Apesar dos meus melhores esforços, meus amigos não me consideram confiável.");

    strcpy(artista.tabela_extra[0],"Acrobata");
    strcpy(artista.tabela_extra[1],"Ator");
    strcpy(artista.tabela_extra[2],"Bufão");
    strcpy(artista.tabela_extra[3],"Cantor");
    strcpy(artista.tabela_extra[4],"Dançarino");
    strcpy(artista.tabela_extra[5],"Engolidor de fogo");
    strcpy(artista.tabela_extra[6],"Instrumentista");
    strcpy(artista.tabela_extra[7],"Malabarista");
    strcpy(artista.tabela_extra[8],"Narrador");
    strcpy(artista.tabela_extra[9],"Poeta");

    charlatao.nome = "Charlatão";
    strcpy(charlatao.personalidade[0],"Eu me apaixono e desapaixono facilmente, e estou sempre em busca de alguém.");
    strcpy(charlatao.personalidade[1],"Eu tenho uma piada para cada ocasião, especialmente ocasiões em que o humor é inapropriado.");
    strcpy(charlatao.personalidade[2],"Bajulação é meu truque predileto para conseguir o que eu quero.");
    strcpy(charlatao.personalidade[3],"Eu sou um jogador nato que não consegue resistir a se arriscar por uma possível recompensa.");
    strcpy(charlatao.personalidade[4],"Eu minto sobre quase tudo, mesmo quando não existe qualquer boa razão.");
    strcpy(charlatao.personalidade[5],"Sarcasmo e insultos são minhas armas prediletas.");
    strcpy(charlatao.personalidade[6],"Eu tenho vários símbolos sagrados comigo, e invoco a divindade que seja mais útil em cada dado momento.");
    strcpy(charlatao.personalidade[7],"Eu furto qualquer coisa que eu vejo que possa ter algum valor.");

    strcpy(charlatao.ideal[0],"Sou um espirito livre ninguém me diz o que fazer. (Caótico)");
    strcpy(charlatao.ideal[1],"Eu nunca roubo de pessoas que não podem perder algumas moedas. (Leal)");
    strcpy(charlatao.ideal[2],"Eu distribuo o dinheiro que adquiro com as pessoas que realmente precisam. (Bom)");
    strcpy(charlatao.ideal[3],"Eu nunca faço a mesma trapaça duas vezes. (Caótico)");
    strcpy(charlatao.ideal[4],"Bens materiais vem e vão. Os laços de amizade duram pra sempre. (Bom)");
    strcpy(charlatao.ideal[5],"Eu estou determinado a fazer algo por mim mesmo. (Qualquer)");

    strcpy(charlatao.vinculo[0],"Eu extorqui a pessoa errada e devo trabalhar para que esse indivíduo nunca mais cruze meu caminho ou o das pessoas com quem me importo.");
    strcpy(charlatao.vinculo[1],"Eu devo tudo ao meu mentor – uma pessoa terrível que, provavelmente, está apodrecendo na cadeia em algum lugar.");
    strcpy(charlatao.vinculo[2],"Em algum lugar por ai, eu tenho um filho que não me conhece. Eu estou tornando o mundo melhor para ele.");
    strcpy(charlatao.vinculo[3],"Eu vim de uma família nobre e, um dia, irei reivindicar minhas terras e título daqueles que o roubaram de mim.");
    strcpy(charlatao.vinculo[4],"Uma pessoa poderosa matou alguém que eu amava. Algum dia, em breve, terei minha vingança.");
    strcpy(charlatao.vinculo[5],"Eu enganei e arruinei a vida de uma pessoa que não merecia. Eu busco reparar meus erros, mas talvez nunca seja capaz de me perdoar.");

    strcpy(charlatao.defeito[0],"Não resisto um rostinho bonito.");
    strcpy(charlatao.defeito[1],"Estou sempre com dividas. Eu gasto meus lucros ilícitos com luxurias decadentes mais rápido do que os ganho...");
    strcpy(charlatao.defeito[2],"Estou convencido que ninguém pode me enganar da forma que eu engano os outros.");
    strcpy(charlatao.defeito[3],"Eu sou ganancioso demais pra meu próprio bem. Eu não consigo resistir a me arriscar se tiver dinheiro envolvido.");
    strcpy(charlatao.defeito[4],"Eu não resisto a enganar pessoas que são mais poderosas que eu.");
    strcpy(charlatao.defeito[5],"Eu odeio admitir e vou me odiar por isso, mas, eu vou correr e salvar minha própria pele se as coisas engrossarem.");

    strcpy(charlatao.defeito[0],"Eu trapaceio em jogos de azar.");
    strcpy(charlatao.defeito[1],"Eu falsifico moedas ou forjo documentos.");
    strcpy(charlatao.defeito[2],"Eu me infiltro na vida das pessoas para descobrir suas fraquezas e ficar com suas fortunas.");
    strcpy(charlatao.defeito[3],"Eu troco de identidade como troco de roupa.");
    strcpy(charlatao.defeito[4],"Eu faço furtos rápidos nas esquinas das ruas.");
    strcpy(charlatao.defeito[5],"Eu convenço as pessoas que tranqueiras inúteis valem seu suado dinheiro.");

    criminoso.nome = "Criminoso";
    strcpy(criminoso.personalidade[0],"Eu sempre tenho um plano para quando as coisas dão errado.");
    strcpy(criminoso.personalidade[1],"Eu estou sempre calmo, não importa a situação. Eu nunca levanto minha voz ou deixo minhas emoções me controlarem.");
    strcpy(criminoso.personalidade[2],"A primeira coisa que faço ao chegar a um novo local é decorar a localização de coisas valiosas – ou onde essas coisas podem estar escondidas.");
    strcpy(criminoso.personalidade[3],"Eu prefiro fazer um novo amigo a um novo inimigo.");
    strcpy(criminoso.personalidade[4],"Eu sou incrivelmente receoso em confiar. Aqueles que parecem mais amigáveis geralmente têm mais a esconder.");
    strcpy(criminoso.personalidade[5],"Eu não presto atenção aos riscos envolvidos em uma situação, nunca me alerte sobre as probabilidades de fracasso.");
    strcpy(criminoso.personalidade[6],"A melhor maneira de me levar a fazer algo é dizendo que eu não posso fazer.");
    strcpy(criminoso.personalidade[7],"Eu explodo ao menor insulto.");

    strcpy(criminoso.ideal[0],"Eu não roubo de irmãos de profissão. (Leal)");
    strcpy(criminoso.ideal[1],"Correntes foram feitas para serem partidas, assim como aqueles que as forjaram. (Caótico)");
    strcpy(criminoso.ideal[2],"Eu roubo dos ricos para dar aos que realmente precisam. (Bom)");
    strcpy(criminoso.ideal[3],"Eu farei qualquer coisa para me tornar rico. (Mal)");
    strcpy(criminoso.ideal[4],"Eu sou leal aos meus amigos, não a qualquer ideal, e todos sabem que posso viajar até o Estige por aqueles que me importo. (Neutro)");
    strcpy(criminoso.ideal[5],"Há uma centelha de bondade em todo mundo. (Bom)");

    strcpy(criminoso.vinculo[0],"Eu estou tentando quitar uma dívida que tenho com um generoso benfeitor.");
    strcpy(criminoso.vinculo[1],"Meus ganhos, honestos ou não, são para sustentar minha família.");
    strcpy(criminoso.vinculo[2],"Algo importante foi roubado de mim, e eu vou recuperá-lo.");
    strcpy(criminoso.vinculo[3],"Eu me tornarei o maior ladrão que já existiu.");
    strcpy(criminoso.vinculo[4],"Eu sou culpado por um terrível crime, espero algum dia poder me redimir.");
    strcpy(criminoso.vinculo[5],"Alguém que amo morreu por causa de um erro que cometi. Isso nunca acontecerá novamente.");

    strcpy(criminoso.defeito[0],"Quando vejo algo valioso, não consigo pensar em mais nada, além de roubá-lo.");
    strcpy(criminoso.defeito[1],"Quando confrontado com uma escolha entre dinheiro e amigo, eu bem que escolho o dinheiro.");
    strcpy(criminoso.defeito[2],"Se há um plano, eu vou esquecê-lo. Se eu não esquecê-lo, vou ignorá-lo.");
    strcpy(criminoso.defeito[3],"Eu tenho um 'tique' que revela se estou mentindo.");
    strcpy(criminoso.defeito[4],"Eu viro as costas e corro quando as coisas começam a ficar ruins.");
    strcpy(criminoso.defeito[5],"Um inocente foi preso por um crime que eu cometi. Por mim tudo bem.");

    strcpy(criminoso.tabela_extra[0],"Assaltante");
    strcpy(criminoso.tabela_extra[1],"Assassino de aluguel");
    strcpy(criminoso.tabela_extra[2],"Batedor de carteira");
    strcpy(criminoso.tabela_extra[3],"Chantagista");
    strcpy(criminoso.tabela_extra[4],"Contrabandista");
    strcpy(criminoso.tabela_extra[5],"Executor");
    strcpy(criminoso.tabela_extra[6],"Ladrão de estrada");
    strcpy(criminoso.tabela_extra[7],"Receptador");

    eremita.nome = "Eremita";
    strcpy(eremita.personalidade[0],"Eu fiquei tanto tempo isolado que raramente falo, preferindo gestos e grunhidos ocasionais.");
    strcpy(eremita.personalidade[1],"Eu sou absurdamente sereno, mesmo em face do desespero.");
    strcpy(eremita.personalidade[2],"O líder da minha comunidade tem algo sábio a dizer sobre cada tópico, eu estou ansioso para partilhar dessa sabedoria.");
    strcpy(eremita.personalidade[3],"Eu sinto uma empatia tremenda por todos que sofrem.");
    strcpy(eremita.personalidade[4],"Eu estou alheio a etiqueta e expectativas sociais.");
    strcpy(eremita.personalidade[5],"Eu relaciono tudo que acontece comigo a um grande plano cósmico.");
    strcpy(eremita.personalidade[6],"Eu, muitas vezes, me perco em meus pensamentos e contemplação me tornando alheio ao meu redor.");
    strcpy(eremita.personalidade[7],"Eu estou trabalhando em uma grande teoria filosófica e adoro partilhar minhas ideias.");

    strcpy(eremita.ideal[0],"Meus dons devem ser partilhados com todos, não usados em benefício próprio (Bom)");
    strcpy(eremita.ideal[1],"Emoções não podem obscurecer meus sentidos do que é certo e verdade, ou meu pensamento lógico. (Leal)");
    strcpy(eremita.ideal[2],"Questionamentos e curiosidade são os pilares do progresso. (Caótico)");
    strcpy(eremita.ideal[3],"Isolamento e contemplação são caminhos para poderes místicos e mágicos. (Mau)");
    strcpy(eremita.ideal[4],"Se intrometer nos assuntos dos outros só traz problemas. (Neutro)");
    strcpy(eremita.ideal[5],"Se você conhece a si mesmo, não a mais nada para saber. (Qualquer)");

    strcpy(eremita.vinculo[0],"Nada é mais importante que os outros membros do eremitério, ordem ou associação.");
    strcpy(eremita.vinculo[1],"Eu entrei em reclusão para me esconder daqueles que ainda devem estar me caçando. Algum dia irei confrontálos.");
    strcpy(eremita.vinculo[2],"Eu ainda busco o esclarecimento que eu perseguia durante meu isolamento e continuo a me iludir.");
    strcpy(eremita.vinculo[3],"Eu entrei em reclusão porque eu amava alguém que eu não podia ter.");
    strcpy(eremita.vinculo[4],"Se minha descoberta vir à tona, ela poderá trazer destruição ao mundo.");
    strcpy(eremita.vinculo[5],"Meu isolamento me deu grande discernimento sobre um grande mal que apenas eu posso destruir.");

    strcpy(eremita.defeito[0],"Agora que voltei ao mundo, eu desfruto de seus prazeres um pouco demais.");
    strcpy(eremita.defeito[1],"Eu escondo nas sombras, pensamentos sanguinários que meu isolamento e meditação não conseguiram apagar.");
    strcpy(eremita.defeito[2],"Eu sou dogmático em meus pensamentos e filosofia.");
    strcpy(eremita.defeito[3],"Eu deixo meu desejo de vencer discussões ofuscar amizades e harmonia.");
    strcpy(eremita.defeito[4],"Eu me arrisco muito para descobrir um pouco de conhecimento perdido.");
    strcpy(eremita.defeito[5],"Eu gosto de guardar segredos e não os partilho com ninguém.");

    strcpy(eremita.tabela_extra[0],"Eu estava em busca de esclarecimento espiritual.");
    strcpy(eremita.tabela_extra[1],"Eu estava participando da vida comunal de acordo com os ditames de uma ordem religiosa.");
    strcpy(eremita.tabela_extra[2],"Eu fui exilado por um crime que não cometi.");
    strcpy(eremita.tabela_extra[3],"Eu me afastei da sociedade após um evento que mudou minha vida.");
    strcpy(eremita.tabela_extra[4],"Eu precisava de um lugar tranquilo para trabalhar minha arte, literatura, música ou manifesto.");
    strcpy(eremita.tabela_extra[5],"Eu precisava comungar com a natureza, longe da civilização.");
    strcpy(eremita.tabela_extra[6],"Eu era o guardião de uma ruina ou relíquia antiga.");
    strcpy(eremita.tabela_extra[7],"Eu era um peregrino em busca de uma pessoa, lugar ou relíquia de grande significância espiritual.");

    forasteiro.nome = "Forasteiro";
    strcpy(forasteiro.personalidade[0],"Eu fui guiado por uma sede de viagens que me levou a abandonas meu lar.");
    strcpy(forasteiro.personalidade[1],"Eu cuido dos meus amigos como se eles fossem filhotes recém-nascidos.");
    strcpy(forasteiro.personalidade[2],"Certa vez, eu corri quarenta quilômetros sem parar alertar meu clã da aproximação de uma horda orc. Eu faria de novo se fosse necessário.");
    strcpy(forasteiro.personalidade[3],"Eu tenho uma lição pra cada situação, aprendida observando a natureza.");
    strcpy(forasteiro.personalidade[4],"Eu não vejo lugar para o povo rico e educado. Dinheiro e modos não vão salvá-lo de um urso-coruja faminto.");
    strcpy(forasteiro.personalidade[5],"Estou sempre pegando coisas, distraidamente brincando com elas e, às vezes, quebrando-as.");
    strcpy(forasteiro.personalidade[6],"Eu me sinto muito mais confortável entre animais que entre pessoas.");
    strcpy(forasteiro.personalidade[7],"Eu fui, de fato, criado por lobos.");

    strcpy(forasteiro.ideal[0],"A vida é como as estações, em constante mudança, e nós devemos mudar com ela. (Caótico)");
    strcpy(forasteiro.ideal[1],"É responsabilidade de todos trazer a maior felicidade para toda a tribo. (Bom)");
    strcpy(forasteiro.ideal[2],"Se eu me desonrar, eu desonrarei todo o meu clã. (Leal)");
    strcpy(forasteiro.ideal[3],"O mais forte deve governar. (Mau)");
    strcpy(forasteiro.ideal[4],"O mundo natural é mais importante que todas as construções da civilização. (Neutro)");
    strcpy(forasteiro.ideal[5],"Eu devo adquirir gloria em batalha, para mim e para meu clã. (Qualquer)");

    strcpy(forasteiro.vinculo[0],"Minha família, clã ou tribo é a coisa mais importante na minha vida, mesmo quando eles estão longe.");
    strcpy(forasteiro.vinculo[1],"Uma ofensa a natureza intocada do meu lar é uma ofensa a mim.");
    strcpy(forasteiro.vinculo[2],"Eu trarei uma fúria terrível aos malfeitores que destruíram minha terra natal.");
    strcpy(forasteiro.vinculo[3],"Eu sou o último da minha tribo e cabe a mim garantir que seus nomes façam parte das lendas.");
    strcpy(forasteiro.vinculo[4],"Eu sofro de visões terríveis de um desastre vindouro, e farei qualquer coisa para impedi-lo.");
    strcpy(forasteiro.vinculo[5],"É meu dever prover filhos para sustentar minha tribo.");

    strcpy(forasteiro.defeito[0],"Sou muito apaixonado por cerveja, vinho e outras bebidas.");
    strcpy(forasteiro.defeito[1],"Não existe lugar para precaução em uma vida vivida ao máximo.");
    strcpy(forasteiro.defeito[2],"Eu lembro de cada insulto que sofri e nutro um ressentimento silencioso contra qualquer um que já tenha me insultado");
    strcpy(forasteiro.defeito[3],"Eu tenho dificuldade em confiar em membros de outras raças, tribos ou sociedades.");
    strcpy(forasteiro.defeito[4],"A violência é minha resposta para quase todos os obstáculos.");
    strcpy(forasteiro.defeito[5],"Não espere que eu salve aqueles que não conseguem se virar sozinhos. É a lei da natureza que os fortes prosperem e os fracos pereçam.");

    strcpy(forasteiro.tabela_extra[0],"Assentado");
    strcpy(forasteiro.tabela_extra[1],"Armadilheiro");
    strcpy(forasteiro.tabela_extra[2],"Caçador de recompensa");
    strcpy(forasteiro.tabela_extra[3],"Exilado ou pária");
    strcpy(forasteiro.tabela_extra[4],"Forrageador");
    strcpy(forasteiro.tabela_extra[5],"Guia");
    strcpy(forasteiro.tabela_extra[6],"Mateiro");
    strcpy(forasteiro.tabela_extra[7],"Nômade tribal");
    strcpy(forasteiro.tabela_extra[8],"Peregrino");
    strcpy(forasteiro.tabela_extra[9],"Saqueador tribal");

    heroi.nome = "Heroi do Povo";
    strcpy(heroi.personalidade[0],"Eu julgo as pessoas por suas ações, não por suas palavras.");
    strcpy(heroi.personalidade[1],"Se alguém está em apuros, eu estou sempre pronto para ajudar.");
    strcpy(heroi.personalidade[2],"Quando eu fixo minha mente em algo, eu sigo esse caminho, não importa o que fique no caminho.");
    strcpy(heroi.personalidade[3],"Eu possuo um forte senso de justiça e sempre tento encontrar a solução mais equilibrada para as discussões.");
    strcpy(heroi.personalidade[4],"Eu confio em minhas habilidades e farei o que for necessário para que os outros confiem também.");
    strcpy(heroi.personalidade[5],"Pensar é para os outros, eu prefiro agir.");
    strcpy(heroi.personalidade[6],"Eu abuso de palavras longas na tentativa de soar inteligente.");
    strcpy(heroi.personalidade[7],"Eu me entedio fácil. Para onde devo ir para me encontrar com meu destino?");

    strcpy(heroi.ideal[0],"As pessoas merecem ser tratadas com dignidade e respeito. (Bom)");
    strcpy(heroi.ideal[1],"Ninguém merece tratamento diferenciado perante a lei, muito menos estar acima dela. (Leal)");
    strcpy(heroi.ideal[2],"Não pode haver permissão para tiranos oprimirem o povo. (Caótico)");
    strcpy(heroi.ideal[3],"Se eu ficar forte, eu posso pegar tudo o que eu quiser o que eu desejar. (Mal)");
    strcpy(heroi.ideal[4],"Não há nada de bom em fingir ser algo que não sou. (Neutro)");
    strcpy(heroi.ideal[5],"Nada, nem ninguém, pode me manter longe do meu chamado. (Qualquer)");

    strcpy(heroi.vinculo[0],"Eu tenho família, embora não faça a mínima ideia de onde eles estão, espero encontrá-los um dia.");
    strcpy(heroi.vinculo[1],"Eu trabalho a terra, eu amo a terra e eu vou defender a terra.");
    strcpy(heroi.vinculo[2],"Um nobre orgulhoso me deu uma bela surra, e eu vou ter minha vingança em qualquer valentão que encontrar.");
    strcpy(heroi.vinculo[3],"Minhas ferramentas são símbolo de minha vida passada, eu as carregarei para nunca me esquecer de minhas origens.");
    strcpy(heroi.vinculo[4],"Eu devo proteger aqueles que não podem se defender.");
    strcpy(heroi.vinculo[5],"Gostaria que meu amor viesse comigo para seguir meu destino.");

    strcpy(heroi.defeito[0],"O tirano que comanda minha terra não vai parar até ver meu cadáver.");
    strcpy(heroi.defeito[1],"Eu estou convencido sobre o significado do meu destino, e cego aos riscos e falhas.");
    strcpy(heroi.defeito[2],"As pessoas que me conhecem desde criança sabem de um vergonhoso segredo meu, eu não poderei voltar para casa nunca.");
    strcpy(heroi.defeito[3],"Eu tenho uma fraqueza pelos vícios da cidade, especialmente a bebedeira.");
    strcpy(heroi.defeito[4],"Secretamente, eu acredito que as coisas estariam melhores se algum tirano comandasse a região.");
    strcpy(heroi.defeito[5],"Eu tenho dificuldades em confiar em meus aliados.");

    strcpy(heroi.tabela_extra[0],"Eu me opus contra agentes de um tirano.");
    strcpy(heroi.tabela_extra[1],"Eu salvei pessoas durante um desastre natural.");
    strcpy(heroi.tabela_extra[2],"Eu enfrentei sozinho um terrível monstro.");
    strcpy(heroi.tabela_extra[3],"Eu roubei de um mercador corrupto para ajudar os pobres.");
    strcpy(heroi.tabela_extra[4],"Eu liderei uma milícia na batalha contra um exército.");
    strcpy(heroi.tabela_extra[5],"Eu invadi o castelo de um tirano e roubei armas para entregar ao povo.");
    strcpy(heroi.tabela_extra[6],"Eu treinei os camponeses no uso de ferramentas do campo como armas para enfrentar soldados de um tirano.");
    strcpy(heroi.tabela_extra[7],"Um lorde rescindiu um decreto que desfavorecia o povo após eu protestar contra ele.");
    strcpy(heroi.tabela_extra[8],"Um ser celestial, feérico, ou similar, deu-me uma bênção ou revelou minha origem secreta.");
    strcpy(heroi.tabela_extra[9],"Recrutado para o exército de um lorde, eu prevaleci na liderança e fui condecorado por heroísmo.");

    marinheiro.nome = "Marinheiro";
    strcpy(marinheiro.personalidade[0],"Meus amigos sabem que podem contar comigo pro que der e vier.");
    strcpy(marinheiro.personalidade[1],"Eu trabalho duro para que possa me divertir muito quando o trabalho estiver pronto.");
    strcpy(marinheiro.personalidade[2],"Eu gosto de navegar para novos portos e fazer novas amizades acompanhado de uma jarra de cerveja.");
    strcpy(marinheiro.personalidade[3],"Eu modifico alguns fatos para o bem de uma boa história.");
    strcpy(marinheiro.personalidade[4],"Pra mim, uma briga de taverna é uma ótima forma de conhecer uma nova cidade.");
    strcpy(marinheiro.personalidade[5],"Eu nunca deixo passar uma aposta amigável.");
    strcpy(marinheiro.personalidade[6],"Meu vocabulário é tão sujo quanto o covil de um otyugh.");
    strcpy(marinheiro.personalidade[7],"Eu gosto de trabalhos bem feitos, especialmente se eu puder convencer alguém a fazê-los.");

    strcpy(marinheiro.ideal[0],"A coisa que mantem um navio unido é o respeito mútuo entre o capitão e a tripulação. (Bem)");
    strcpy(marinheiro.ideal[1],"Todos nós fazemos o trabalho, portanto, todos partilhamos os espólios. (Leal)");
    strcpy(marinheiro.ideal[2],"O mar é liberdade a liberdade de ir aonde quiser. (Caótico)");
    strcpy(marinheiro.ideal[3],"Eu sou um predador e os outros navios no mar são minhas presas. (Mau)");
    strcpy(marinheiro.ideal[4],"Eu sou apegado aos meus companheiros de tripulação, não a ideais. (Neutro)");
    strcpy(marinheiro.ideal[5],"Algum dia eu serei dono do meu próprio navio e traçarei meu próprio destino. (Qualquer)");

    strcpy(marinheiro.vinculo[0],"Eu sou leal ao meu capitão, primeiramente, o resto vem em segundo.");
    strcpy(marinheiro.vinculo[1],"O navio é o mais importante – tripulantes e capitães vem e vão.");
    strcpy(marinheiro.vinculo[2],"Eu sempre me lembrarei do meu primeiro navio.");
    strcpy(marinheiro.vinculo[3],"Em uma cidade portuária, eu tenho uma amante que quase me roubou do mar.");
    strcpy(marinheiro.vinculo[4],"Eu fui enganado na divisão dos espólios e eu quero o que me é devido.");
    strcpy(marinheiro.vinculo[5],"Cruéis piratas mataram meu capitão e companheiros de tripulação, saquearam nosso navio e me deixaram para morrer. A vingança será minha.");

    strcpy(marinheiro.defeito[0],"Eu sigo ordens, mesmo que eu ache que estão erradas.");
    strcpy(marinheiro.defeito[1],"Eu direi qualquer coisa para evitar trabalho extra.");
    strcpy(marinheiro.defeito[2],"Certa vez, alguém duvidou da minha coragem, eu nunca recuo, não importa o quão perigosa seja a situação.");
    strcpy(marinheiro.defeito[3],"Quando começo a beber, é difícil pra mim parar.");
    strcpy(marinheiro.defeito[4],"Eu não resisto a uma sacolinha de moedas dando sopa ou outras bugigangas que encontro.");
    strcpy(marinheiro.defeito[5],"Meu orgulho provavelmente levará a minha destruição.");

    nobre.nome = "Nobre";
    strcpy(nobre.personalidade[0],"Minha bajulação eloquente faz com que todos com quem eu converse se sintam a pessoa mais maravilhosa e importante do mundo.");
    strcpy(nobre.personalidade[1],"As pessoas comuns me amam por minha bondade e generosidade.");
    strcpy(nobre.personalidade[2],"Ninguém pode duvidar, olhando para o meu porte real, que estou acima das massas plebeias.");
    strcpy(nobre.personalidade[3],"Eu tenho grande cuidado de sempre estar no meu melhor e seguir as últimas modas.");
    strcpy(nobre.personalidade[4],"Eu não gosto de sujar minhas mãos, e eu não vou ser pego em acomodações inadequadas.");
    strcpy(nobre.personalidade[5],"Apesar da minha origem nobre, eu não estou acima dos outros. O sangue é um só.");
    strcpy(nobre.personalidade[6],"Meu apoio, uma vez perdido, não volta.");
    strcpy(nobre.personalidade[7],"Se você me ferir, eu irei esmagá-lo, arruinar seu nome, e salgar seus campos.");

    strcpy(nobre.ideal[0],"O respeito a mim é devido por causa da minha posição, mas todas as pessoas, independentemente da posição merecem ser tratados com dignidade. (Bom)");
    strcpy(nobre.ideal[1],"É o meu dever respeitar a autoridade daqueles acima de mim, assim como aqueles abaixo de mim devem me respeitar. (Leal)");
    strcpy(nobre.ideal[2],"Devo provar que posso me cuidar sem os mimos da minha família. (Caótico)");
    strcpy(nobre.ideal[3],"Se eu puder alcançar mais poder, ninguém vai me dizer o que fazer. (Mau)");
    strcpy(nobre.ideal[4],"O sangue corre mais grosso que a água. (Qualquer)");
    strcpy(nobre.ideal[5],"É o meu dever proteger e cuidar das pessoas abaixo de mim. (Bom)");

    strcpy(nobre.vinculo[0],"Eu vou encarar qualquer desafio para ganhar a aprovação da minha família.");
    strcpy(nobre.vinculo[1],"A aliança da minha casa com outra família nobre deve ser mantida a todo custo.");
    strcpy(nobre.vinculo[2],"Nada é mais importante do que os outros membros da minha família.");
    strcpy(nobre.vinculo[3],"Eu sou apaixonado pela herdeira de uma família que a minha família despreza.");
    strcpy(nobre.vinculo[4],"Minha lealdade ao meu soberano é inabalável.");
    strcpy(nobre.vinculo[5],"As pessoas comuns devem me ver como um herói do povo.");

    strcpy(nobre.defeito[0],"Eu secretamente acredito que todos estão abaixo de mim.");
    strcpy(nobre.defeito[1],"Eu escondo um segredo verdadeiramente escandaloso que poderia arruinar minha família para sempre.");
    strcpy(nobre.defeito[2],"Muitas vezes eu ouço insultos e ameaças veladas em cada palavra dirigida a mim, e me irrito muito rápido.");
    strcpy(nobre.defeito[3],"Eu tenho um desejo insaciável por prazeres carnais.");
    strcpy(nobre.defeito[4],"Na verdade, o mundo gira ao meu redor.");
    strcpy(nobre.defeito[5],"Pelas minhas palavras e ações, muitas vezes, envergonho minha família.");

    orfao.nome = "Órfão";
    strcpy(orfao.personalidade[0],"Eu escondo pedaços de comida e bugigangas em meus bolsos.");
    strcpy(orfao.personalidade[1],"Eu pergunto um monte e coisas.");
    strcpy(orfao.personalidade[2],"Eu gosto de me espremer em locais pequenos onde ninguém possa me alcançar.");
    strcpy(orfao.personalidade[3],"Eu durmo encostado em um muro ou árvore, abraçado com todas as minhas posses.");
    strcpy(orfao.personalidade[4],"Eu como feito um porco e tenho maus modos.");
    strcpy(orfao.personalidade[5],"Eu acho que todos que são gentis comigo tem segundas intenções.");
    strcpy(orfao.personalidade[6],"Eu não gosto de tomar banho.");
    strcpy(orfao.personalidade[7],"Eu digo na cara o que as outras pessoas insinuam ou escondem.");

    strcpy(orfao.ideal[0],"Todas as pessoas, ricas ou pobres, merecem respeito. (Bom)");
    strcpy(orfao.ideal[1],"Nós temos que tomar conta uns dos outros, porque ninguém mais o fará. (Leal)");
    strcpy(orfao.ideal[2],"Os baixos se erguerão e os altos irão tombar. A mudança é a natureza das coisas. (Caótico)");
    strcpy(orfao.ideal[3],"Os ricos precisam ver como a vida e morte é nas sarjetas. (Mau)");
    strcpy(orfao.ideal[4],"Eu ajudo as pessoas que me ajudam – é isso que nos mantem vivos. (Neutro)");
    strcpy(orfao.ideal[5],"Eu vou provar que sou merecedor de uma vida melhor. (Qualquer)");

    strcpy(orfao.vinculo[0],"Minha cidade ou vila é meu lar, e eu vou lutar para defendê-lo.");
    strcpy(orfao.vinculo[1],"Eu patrocino um orfanato para que outros não passem pelo que fui forçado a passar.");
    strcpy(orfao.vinculo[2],"Eu devo minha sobrevivência a outros órfão que me ensinou a vida nas ruas.");
    strcpy(orfao.vinculo[3],"Eu tenho uma dívida que nunca poderei pagar com uma pessoa que teve pena de mim.");
    strcpy(orfao.vinculo[4],"Eu sai da minha vida de pobreza roubando uma pessoa importante, eu sou procurado por isso.");
    strcpy(orfao.vinculo[5],"Ninguém deveria ter suportar as dificuldades pelas quais passei.");

    strcpy(orfao.defeito[0],"Se eu estiver em desvantagem, eu vou fugir de uma briga.");
    strcpy(orfao.defeito[1],"Ouro parece ser muito dinheiro pra mim, e eu faria praticamente qualquer coisa por mais dele.");
    strcpy(orfao.defeito[2],"Eu nunca vou confiar em ninguém plenamente, além de mim mesmo.");
    strcpy(orfao.defeito[3],"Eu prefiro matar alguém enquanto dorme que uma luta justa.");
    strcpy(orfao.defeito[4],"Não é roubo se eu preciso mais que outra pessoa.");
    strcpy(orfao.defeito[5],"As pessoas que não podem se virar sozinhas, tem o que merecem.");

    sabio.nome = "Sábio";
    strcpy(sabio.personalidade[0],"Eu escondo pedaços de comida e bugigangas em meus bolsos.");
    strcpy(sabio.personalidade[1],"Eu pergunto um monte e coisas.");
    strcpy(sabio.personalidade[2],"Eu gosto de me espremer em locais pequenos onde ninguém possa me alcançar.");
    strcpy(sabio.personalidade[3],"Eu durmo encostado em um muro ou árvore, abraçado com todas as minhas posses.");
    strcpy(sabio.personalidade[4],"Eu como feito um porco e tenho maus modos.");
    strcpy(sabio.personalidade[5],"Eu acho que todos que são gentis comigo tem segundas intenções.");
    strcpy(sabio.personalidade[6],"Eu não gosto de tomar banho.");
    strcpy(sabio.personalidade[7],"Eu digo na cara o que as outras pessoas insinuam ou escondem.");

    strcpy(sabio.ideal[0],"Todas as pessoas, ricas ou pobres, merecem respeito. (Bom)");
    strcpy(sabio.ideal[1],"Nós temos que tomar conta uns dos outros, porque ninguém mais o fará. (Leal)");
    strcpy(sabio.ideal[2],"Os baixos se erguerão e os altos irão tombar. A mudança é a natureza das coisas. (Caótico)");
    strcpy(sabio.ideal[3],"Os ricos precisam ver como a vida e morte é nas sarjetas. (Mau)");
    strcpy(sabio.ideal[4],"Eu ajudo as pessoas que me ajudam é isso que nos mantem vivos. (Neutro)");
    strcpy(sabio.ideal[5],"Eu vou provar que sou merecedor de uma vida melhor. (Qualquer)");

    strcpy(sabio.vinculo[0],"Minha cidade ou vila é meu lar, e eu vou lutar para defendê-lo.");
    strcpy(sabio.vinculo[1],"Eu patrocino um orfanato para que outros não passem pelo que fui forçado a passar.");
    strcpy(sabio.vinculo[2],"Eu devo minha sobrevivência a outros órfão que me ensinou a vida nas ruas.");
    strcpy(sabio.vinculo[3],"Eu tenho uma dívida que nunca poderei pagar com uma pessoa que teve pena de mim.");
    strcpy(sabio.vinculo[4],"Eu sai da minha vida de pobreza roubando uma pessoa importante, eu sou procurado por isso.");
    strcpy(sabio.vinculo[5],"Ninguém deveria ter suportar as dificuldades pelas quais passei.");

    strcpy(sabio.defeito[0],"Se eu estiver em desvantagem, eu vou fugir de uma briga.");
    strcpy(sabio.defeito[1],"Ouro parece ser muito dinheiro pra mim, e eu faria praticamente qualquer coisa por mais dele.");
    strcpy(sabio.defeito[2],"Eu nunca vou confiar em ninguém plenamente, além de mim mesmo.");
    strcpy(sabio.defeito[3],"Eu prefiro matar alguém enquanto dorme que uma luta justa.");
    strcpy(sabio.defeito[4],"Não é roubo se eu preciso mais que outra pessoa.");
    strcpy(sabio.defeito[5],"As pessoas que não podem se virar sozinhas, tem o que merecem.");

    strcpy(sabio.tabela_extra[0],"Acadêmico desacreditado");
    strcpy(sabio.tabela_extra[1],"Alquimista");
    strcpy(sabio.tabela_extra[2],"Aprendiz de mago");
    strcpy(sabio.tabela_extra[3],"Astrônomo");
    strcpy(sabio.tabela_extra[4],"Bibliotecário");
    strcpy(sabio.tabela_extra[5],"Escriba");
    strcpy(sabio.tabela_extra[6],"Pesquisador");
    strcpy(sabio.tabela_extra[7],"Professor");

    soldado.nome = "Soldado";
    strcpy(soldado.personalidade[0],"Eu sou sempre polido e respeitoso.");
    strcpy(soldado.personalidade[1],"Eu sou assombrado pelas memórias da guerra. Não consigo tirar aquelas imagens da minha cabeça.");
    strcpy(soldado.personalidade[2],"Eu perdi muitos amigos, e sou muito devagar para fazer novos.");
    strcpy(soldado.personalidade[3],"Eu tenho muitas histórias de inspiração e cautela da época de minha experiência militar que são relevantes em todas as situações de combate.");
    strcpy(soldado.personalidade[4],"Eu não consigo encarar um cão infernal sem vacilar.");
    strcpy(soldado.personalidade[5],"Eu gosto de ser forte e de quebrar coisas.");
    strcpy(soldado.personalidade[6],"Eu tenho um senso de humor grosseiro.");
    strcpy(soldado.personalidade[7],"Eu enfrento os problemas de frente. Uma solução direta é o melhor caminho para o sucesso.");

    strcpy(soldado.ideal[0],"Nosso destino é dar nossas vidas em defesa de terceiros. (Bom)");
    strcpy(soldado.ideal[1],"Eu faço o que tenho que fazer e obedeço apenas a autoridade. (Leal)");
    strcpy(soldado.ideal[2],"Quando pessoas seguem ordens cegas elas apoiam um tipo de tirania. (Caótico)");
    strcpy(soldado.ideal[3],"A vida é como uma guerra, o mais forte vence. (Mau)");
    strcpy(soldado.ideal[4],"Ideais não valem a pena se você matar, ou for à guerra por eles. (Neutro)");
    strcpy(soldado.ideal[5],"Minha cidade, nação ou meu povo, são tudo o que importa para mim. (Qualquer)");

    strcpy(soldado.vinculo[0],"Eu ainda daria a minha vida pelas pessoas com quem servi.");
    strcpy(soldado.vinculo[1],"Alguém salvou minha vida no campo de batalha. Desde aquele dia eu nunca deixo nenhum amigo para trás.");
    strcpy(soldado.vinculo[2],"Minha honra é minha vida.");
    strcpy(soldado.vinculo[3],"Eu nunca esquecerei a destruidora derrota que minha companhia sofreu ou os inimigos que a causaram.");
    strcpy(soldado.vinculo[4],"Aqueles que lutam ao meu lado são aqueles por quem vale a pena morrer.");
    strcpy(soldado.vinculo[5],"Eu luto por aqueles que não podem lutar por si mesmos.");

    strcpy(soldado.defeito[0],"O inimigo monstruoso que enfrentei em uma batalha ainda me deixa tremendo de medo.");
    strcpy(soldado.defeito[1],"Eu tenho pouco respeito por aqueles que não se provam bons combatentes.");
    strcpy(soldado.defeito[2],"Eu cometi um terrível erro em batalha, o que custou muitas vidas eu farei de tudo para manter esse erro em segredo.");
    strcpy(soldado.defeito[3],"Meu ódio por meus inimigos é cego e irracional.");
    strcpy(soldado.defeito[4],"Eu obedeço a lei, mesmo se a lei trouxer a angústia.");
    strcpy(soldado.defeito[5],"Eu prefiro comer minha armadura a admitir que estou errado.");

    strcpy(soldado.tabela_extra[0],"Batedor");
    strcpy(soldado.tabela_extra[1],"Cavaleiro");
    strcpy(soldado.tabela_extra[2],"Contramestre");
    strcpy(soldado.tabela_extra[3],"Equipe de apoio (cozinheiro, ferreiro)");
    strcpy(soldado.tabela_extra[4],"Infantaria");
    strcpy(soldado.tabela_extra[5],"Médico");
    strcpy(soldado.tabela_extra[6],"Oficial");
    strcpy(soldado.tabela_extra[7],"Porta-estandarte");

}

void FICHA(){

    char antecedente[QTD_ANTECEDENTE][MAX_CARACTERES]={{"Acólito"},{"Artesão da Guilda"},{"Artista"},
                                          {"Charlatão"},{"Criminoso"},{"Eremita"},
                                          {"Forasteiro"},{"Herói do Povo"},{"Marinheiro"},
                                          {"Nobre"},{"Órfão"},{"Sábio"},
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
