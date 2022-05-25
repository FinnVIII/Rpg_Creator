#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "manual.h"
#include "antecedente.h"


int main(void){
   setlocale(LC_ALL,"portuguese");
   srand(time(NULL));

   int rand_tipo;
   int rand_nomes_m;
   int rand_nomes_f;
   int rand_antecedente;
   struct Antecedentes acolito, artesao,
      artista, charlatao, criminoso, eremita,
      forasteiro, heroi, marinheiro, nobre,
      orfao, sabio, soldado;

   

   /*

   acolito.nome = "Acólito";
   acolito.personalidade =
   {
      {"Eu idolatro um herói particular da minha fé, e constantemente me refiro a seus feitos e exemplos."},
      {"Eu consigo encontrar semelhanças mesmo entre o inimigos mais violentos, com empatia e sempre trabalhando pela paz."},
      {"Eu vejo presságios em cada evento e ação. Os deuses estão falando conosco, nós apenas temos de ouvi-los."},
      {"Nada pode abalar minha atitude otimista."},
      {"Eu cito (corretamente ou não) textos sagrados e provérbios em quase qualquer situação."},
      {"Eu sou tolerante (ou intolerante) a qualquer outra fé, e respeito (ou condeno) a adoração a outros deuses."},
      {"Eu aprecio comida requintada, bebidas e a elite entre o alto escalão de meu templo. Uma vida dura me irrita."},
      {"Eu passei tanto tempo no templo que possuo pouca prática em lidar com as pessoas mundo a fora."};
    };
   acolito.ideal =
   {
   {"As tradições ancestrais de adoração e sacrifício devem ser preservadas e perpetradas. (Leal)"},
   {"Eu sempre tento ajudar aqueles em necessidade, não importando o custo pessoal. (Bom)"},
   {"Nós devemos ajudar a conduzir as mudanças que os deuses estão constantemente trabalhando para o mundo. (Caótico)"},
   {"Eu espero que um dia eu consiga chegar ao topo na hierarquia da minha religião. (Leal)"},
   {"Eu acredito que minha divindade guia minhas ações. Eu tenho fé que, se eu trabalhar duro, coisas boas acontecerão. (Leal)"},
   {"Aspiração. Eu busco ser digno da graça do meu deus ao corresponder minhas ações aos seus ensinamentos. (Qualquer)"}
   };
   acolito.vinculo 
   {
   {"Eu morreria para recuperar uma relíquia ancestral de minha fé, perdida há muito tempo."},
   {"Eu ainda terei minha vingança contra o templo corrupto que me acusou de heresia."},
   {"Eu devo minha vida ao sacerdote que me acolheu quando meus pais morreram."},
   {"Tudo o que faço, faço pelo povo."},
   {"Eu farei qualquer coisa para proteger o templo que sirvo."},
   {"Eu busco guardar um texto sagrado que meus inimigos dizem ser herético e tentam destruí-lo."}
   };
   acolito.defeito =
   {
   {"Eu julgo os outros severamente, e a mim mesmo mais ainda."},
   {"Eu deposito muita confiança naqueles que detêm o poder na hierarquia de meu templo."},
   {"Minha devoção é muitas vezes me cega perante aqueles que professam a fé do meu deus."},
   {"Meu pensamento é inflexível."},
   {"Eu suspeito de estranhos e sempre espero o pior deles."},
   {"Depois de escolher um objetivo, eu fico obcecado em cumpri-lo, até mesmo em detrimento de qualquer outra coisa em minha vida."}
   };


   artesao.nome = "Artesão da Guilda";
   artesao.personalidade =
   {
   {"Eu acredito que tudo que valha a pena fazer, vale a pena ser feito direito. Eu não posso evitar – Eu sou perfeccionista."},
   {"Eu sou um esnobe que olha de cima a baixo aqueles que não sabem apreciar artes requintadas."},
   {"Eu sempre quero aprender como as coisas funcionam e o que deixa as pessoas motivadas."},
   {"Eu sou cheio de aforismos espirituosos e tenho um proverbio para cada ocasião."},
   {"Eu sou grosso com as pessoas que não tem o mesmo comprometimento que eu com o trabalho duro e honesto."},
   {"Eu gosto de falar longamente sobre minha profissão."},
   {"Eu não gasto meu dinheiro facilmente e vou barganhar incansavelmente para conseguir o melhor acordo possível."},
   {"Eu sou bem conhecido pelo meu trabalho e quero ter certeza que todos o apreciam. Eu sempre fico surpreso quando conheço pessoas que não ouviram falar de mim."}
   };
   artesao.ideal =
   {
   {"É dever de todo cidadão civilizado fortalecer os elos da comunidade e a segurança da civilização. (Leal)"},
   {"Meus talentos me foram dados para que eu pudesse usá-los para beneficiar o mundo. (Bom)"},
   {"Todos deveriam ser livres para perseguir seus próprios meios de vida. (Caótico)"},
   {"Eu só estou aqui pelo dinheiro. (Mau)"},
   {"Eu sou cometido com o povo com quem me importo, não com ideias. (Neutro)"},
   {"Eu trabalho duro para ser o melhor no meu ofício. (Qualquer)"}
   };
   artesao.vinculo =
   {
   {"A oficina onde aprendi meu negócio é o local mais importante do mundo pra mim."},
   {"Eu criei um trabalho incrível para alguém, mas descobri que ele não era merecedor de recebê-lo. Ainda estou à procura de alguém que seja merecedor."},
   {"Eu tenho uma grande dívida para com minha guilda por fazer de mim a pessoa que sou hoje."},
   {"Eu busco riqueza para conseguir o amor de alguém."},
   {"Um dia eu voltarei para a minha guilda e provarei que sou o maior artesão dentre eles."},
   {"Eu irem me vingar das forças malignas que destruíram meu local de negócios e arruinaram meu estilo de vida."}
   };
   artesao.defeito =
   {
   {"Eu farei de tudo para pôr minha mãos em algo raro ou inestimável."},
   {"Eu rapidamente presumo que alguém está tentando me trapacear."},
   {"Ninguém nunca poderá saber que eu, certa vez, roubei dinheiro dos cofres da guilda."},
   {"Eu nunca estou satisfeito com o que tenho – eu sempre quero mais."},
   {"Eu mataria para adquirir um título de nobreza."},
   {"Eu sou terrivelmente invejoso com qualquer um que possa ofuscar meu ofício. Todo lugar que eu vou, estou cercado de rivais."}
   };
   artesao.tabela_extra =
   {
   {"Alquimistas e boticários"},
   {"Armeiros, chaveiros e ferreiros finos"},
   {"Cervejeiros, destiladores e viticultores"},
   {"Calígrafos, escribas e escrivães"},
   {"Carpinteiros, construtores de telhado e estucadores"},
   {"Cartógrafos, agrimensores e desenhistas"},
   {"Remendões e sapateiros"},
   {"Cozinheiros e padeiros"},
   {"Vidraceiros e escultores"},
   {"Joalheiros e lapidários"},
   {"Coureiros, peleiros e curtidores"},
   {"Pedreiros e marceneiros"},
   {"Pintores, iluminadores e construtores de placas"},
   {"Oleiros e telheiros"},
   {"Armadores e veleiros"},
   {"Ferreiros e forjadores"},
   {"Funileiros, latoeiros e galheteiros"},
   {"Fabricantes de carroças e fabricantes de rodas"},
   {"Tecelões e tintureiros"},
   {"Entalhadores, tanoeiros e construtores de arcos"}
   };


   artista.nome = "Artista";
   artista.personalidade =
   {
   {"Eu conheço uma história relevante de praticamente todas as situações."},
   {"Sempre que eu chego em um lugar novo, eu coleto os rumores locais e espalho fofocas."},
   {"Eu sou um romântico incorrigível, sempre em busca daquele “alguém especial.”"},
   {"Ninguém fica com raiva de mim ou perto de mim por muito tempo, já que eu posso acabar com qualquer tipo de tensão."},
   {"Eu amo um bom insulto, até os direcionados a mim."},
   {"Eu fico sentido se eu não for o centro das atenções."},
   {"Eu não vou me contentar com nada menos que a perfeição."},
   {"Eu mudo de ânimo ou de pensamento tão rápido quando mudo eu mudo de nota em uma canção."}
   };
   artista.ideal =
   {
   {"Quando eu atuo, eu torno o mundo um lugar melhor. (Bom)"},
   {"As histórias, lendas e canções do passado nunca devem ser esquecidas, pois elas nos ensinam quem nós somos. (Leal)"},
   {"O mundo precisa de novas ideias e ações ousadas. (Caótico)"},
   {"Eu só estou aqui pelo dinheiro e pela fama. (Mau)"},
   {"Eu gosto de ver os sorrisos nos rostos das pessoas quando eu atuo. Isso é tudo que importa. (Neutro)"},
   {"A arte deve refletir a alma; ela deve vir de dentro e revelar quem realmente somos. (Qualquer)"}
   
   };
   artista.vinculo =
   {
   {"Meu instrumento é meu bem mais valioso e ele me lembra de alguém que eu amo."},
   {"Alguém roubou meu precioso instrumento e, algum dia, eu vou pegá-lo de volta."},
   {"Eu quero ser famoso, custe o que custar."},
   {"Eu idolatro um herói dos contos antigos e mensuro meus feitos baseados nessa personalidade."},
   {"Eu vou fazer tudo para provar que sou superior eu meu odiado rival."},
   {"Eu faria qualquer coisa pelos membros da minha antiga trupe."}
   
   };
   artista.defeito =
   {
   {"Eu farei de tudo para ganhar fama e renome."},
   {"Eu viro um idiota quando vejo um rosto bonito."},
   {"Um escândalo me impede de voltar para casa novamente. Esse tipo de problema parece me perseguir por ai."},
   {"Eu, certa vez, satirizei um nobre que ainda quer minha cabeça. Foi um erro que eu adoraria repetir."},
   {"Eu tenho problemas em esconder meus verdadeiros sentimentos. Minha língua afiada me mete em confusão."},
   {"Apesar dos meus melhores esforços, meus amigos não me consideram confiável."}
   
   };
   artista.tabela_extra =
   {
   {"Acrobata"},
   {"Ator"},
   {"Bufão"},
   {"Cantor"},
   {"Dançarino"},
   {"Engolidor de fogo"},
   {"Instrumentista"},
   {"Malabarista"},
   {"Narrador"},
   {"Poeta"}
   };

   charlatao.nome = "Charlatão";
   charlatao.personalidade =
   {
   {"Eu me apaixono e desapaixono facilmente, e estou sempre em busca de alguém."},
   {"Eu tenho uma piada para cada ocasião, especialmente ocasiões em que o humor é inapropriado."},
   {"Bajulação é meu truque predileto para conseguir o que eu quero."},
   {"Eu sou um jogador nato que não consegue resistir a se arriscar por uma possível recompensa."},
   {"Eu minto sobre quase tudo, mesmo quando não existe qualquer boa razão."},
   {"Sarcasmo e insultos são minhas armas prediletas."},
   {"Eu tenho vários símbolos sagrados comigo, e invoco a divindade que seja mais útil em cada dado momento."},
   {"Eu furto qualquer coisa que eu vejo que possa ter algum valor."}
   
   };
   charlatao.ideal =
   {
   {"Sou um espirito livre ninguém me diz o que fazer. (Caótico)"},
   {"Eu nunca roubo de pessoas que não podem perder algumas moedas. (Leal)"},
   {"Eu distribuo o dinheiro que adquiro com as pessoas que realmente precisam. (Bom)"},
   {"Eu nunca faço a mesma trapaça duas vezes. (Caótico)"},
   {"Bens materiais vem e vão. Os laços de amizade duram pra sempre. (Bom)"},
   {"Eu estou determinado a fazer algo por mim mesmo. (Qualquer)"}
   
   };
   charlatao.vinculo =
   {
   {"Eu extorqui a pessoa errada e devo trabalhar para que esse indivíduo nunca mais cruze meu caminho ou o das pessoas com quem me importo."},
   {"Eu devo tudo ao meu mentor – uma pessoa terrível que, provavelmente, está apodrecendo na cadeia em algum lugar."},
   {"Em algum lugar por ai, eu tenho um filho que não me conhece. Eu estou tornando o mundo melhor para ele."},
   {"Eu vim de uma família nobre e, um dia, irei reivindicar minhas terras e título daqueles que o roubaram de mim."},
   {"Uma pessoa poderosa matou alguém que eu amava. Algum dia, em breve, terei minha vingança."},
   {"Eu enganei e arruinei a vida de uma pessoa que não merecia. Eu busco reparar meus erros, mas talvez nunca seja capaz de me perdoar."}
   
   };
   charlatao.defeito =
   {
   {"Não resisto um rostinho bonito."},
   {"Estou sempre com dividas. Eu gasto meus lucros ilícitos com luxurias decadentes mais rápido do que os ganho..."},
   {"Estou convencido que ninguém pode me enganar da forma que eu engano os outros."},
   {"Eu sou ganancioso demais pra meu próprio bem. Eu não consigo resistir a me arriscar se tiver dinheiro envolvido."},
   {"Eu não resisto a enganar pessoas que são mais poderosas que eu."},
   {"Eu odeio admitir e vou me odiar por isso, mas, eu vou correr e salvar minha própria pele se as coisas engrossarem."}
   
   };
   charlatao.tabela_extra =
   {
   {"Eu trapaceio em jogos de azar."},
   {"Eu falsifico moedas ou forjo documentos."},
   {"Eu me infiltro na vida das pessoas para descobrir suas fraquezas e ficar com suas fortunas."},
   {"Eu troco de identidade como troco de roupa."},
   {"Eu faço furtos rápidos nas esquinas das ruas."},
   {"Eu convenço as pessoas que tranqueiras inúteis valem seu suado dinheiro."}
   
   };

   criminoso.nome = "Criminoso";
   criminoso.personalidade =
   {
   {"Eu sempre tenho um plano para quando as coisas dão errado."},
   {"Eu estou sempre calmo, não importa a situação. Eu nunca levanto minha voz ou deixo minhas emoções me controlarem."},
   {"A primeira coisa que faço ao chegar a um novo local é decorar a localização de coisas valiosas – ou onde essas coisas podem estar escondidas."},
   {"Eu prefiro fazer um novo amigo a um novo inimigo."},
   {"Eu sou incrivelmente receoso em confiar. Aqueles que parecem mais amigáveis geralmente têm mais a esconder."},
   {"Eu não presto atenção aos riscos envolvidos em uma situação, nunca me alerte sobre as probabilidades de fracasso."},
   {"A melhor maneira de me levar a fazer algo é dizendo que eu não posso fazer."},
   {"Eu explodo ao menor insulto."}
   };
   criminoso.ideal =
   {
   {"Eu não roubo de irmãos de profissão. (Leal)"},
   {"Correntes foram feitas para serem partidas, assim como aqueles que as forjaram. (Caótico)"},
   {"Eu roubo dos ricos para dar aos que realmente precisam. (Bom)"},
   {"Eu farei qualquer coisa para me tornar rico. (Mal)"},
   {"Eu sou leal aos meus amigos, não a qualquer ideal, e todos sabem que posso viajar até o Estige por aqueles que me importo. (Neutro)"},
   {"Há uma centelha de bondade em todo mundo. (Bom)"}
   };
   criminoso.vinculo =
   {
   {"Eu estou tentando quitar uma dívida que tenho com um generoso benfeitor."},
   {"Meus ganhos, honestos ou não, são para sustentar minha família."},
   {"Algo importante foi roubado de mim, e eu vou recuperá-lo."},
   {"Eu me tornarei o maior ladrão que já existiu."},
   {"Eu sou culpado por um terrível crime, espero algum dia poder me redimir."},
   {"Alguém que amo morreu por causa de um erro que cometi. Isso nunca acontecerá novamente."}
   };
   criminoso.defeito =
   {
   {"Quando vejo algo valioso, não consigo pensar em mais nada, além de roubá-lo."},
   {"Quando confrontado com uma escolha entre dinheiro e amigo, eu bem que escolho o dinheiro."},
   {"Se há um plano, eu vou esquecê-lo. Se eu não esquecê-lo, vou ignorá-lo."},
   {"Eu tenho um 'tique' que revela se estou mentindo."},
   {"Eu viro as costas e corro quando as coisas começam a ficar ruins."},
   {"Um inocente foi preso por um crime que eu cometi. Por mim tudo bem."}
   };
   criminoso.tabela_extra =
   {
   {"Assaltante"},
   {"Assassino de aluguel"},
   {"Batedor de carteira"},
   {"Chantagista"},
   {"Contrabandista"},
   {"Executor"},
   {"Ladrão de estrada"},
   {"Receptador"}
   };

   eremita.nome = "Eremita";
   eremita.personalidade =
   {
   {"Eu fiquei tanto tempo isolado que raramente falo, preferindo gestos e grunhidos ocasionais."},
   {"Eu sou absurdamente sereno, mesmo em face do desespero."},
   {"O líder da minha comunidade tem algo sábio a dizer sobre cada tópico, eu estou ansioso para partilhar dessa sabedoria."},
   {"Eu sinto uma empatia tremenda por todos que sofrem."},
   {"Eu estou alheio a etiqueta e expectativas sociais."},
   {"Eu relaciono tudo que acontece comigo a um grande plano cósmico."},
   {"Eu, muitas vezes, me perco em meus pensamentos e contemplação me tornando alheio ao meu redor."},
   {"Eu estou trabalhando em uma grande teoria filosófica e adoro partilhar minhas ideias."}
   };
   eremita.ideal =
   {
   {"Meus dons devem ser partilhados com todos, não usados em benefício próprio (Bom)"},
   {"Emoções não podem obscurecer meus sentidos do que é certo e verdade, ou meu pensamento lógico. (Leal)"},
   {"Questionamentos e curiosidade são os pilares do progresso. (Caótico)"},
   {"Isolamento e contemplação são caminhos para poderes místicos e mágicos. (Mau)"},
   {"Se intrometer nos assuntos dos outros só traz problemas. (Neutro)"},
   {"Se você conhece a si mesmo, não a mais nada para saber. (Qualquer)"}
   };
   eremita.vinculo =
   {
   {"Nada é mais importante que os outros membros do eremitério, ordem ou associação."},
   {"Eu entrei em reclusão para me esconder daqueles que ainda devem estar me caçando. Algum dia irei confrontálos."},
   {"Eu ainda busco o esclarecimento que eu perseguia durante meu isolamento e continuo a me iludir."},
   {"Eu entrei em reclusão porque eu amava alguém que eu não podia ter."},
   {"Se minha descoberta vir à tona, ela poderá trazer destruição ao mundo."},
   {"Meu isolamento me deu grande discernimento sobre um grande mal que apenas eu posso destruir."}
   };
   eremita.defeito =
   {
   {"Agora que voltei ao mundo, eu desfruto de seus prazeres um pouco demais."},
   {"Eu escondo nas sombras, pensamentos sanguinários que meu isolamento e meditação não conseguiram apagar."},
   {"Eu sou dogmático em meus pensamentos e filosofia."},
   {"Eu deixo meu desejo de vencer discussões ofuscar amizades e harmonia."},
   {"Eu me arrisco muito para descobrir um pouco de conhecimento perdido."},
   {"Eu gosto de guardar segredos e não os partilho com ninguém."}
   };
   eremita.tabela_extra =
   {
   {"Eu estava em busca de esclarecimento espiritual."},
   {"Eu estava participando da vida comunal de acordo com os ditames de uma ordem religiosa."},
   {"Eu fui exilado por um crime que não cometi."},
   {"Eu me afastei da sociedade após um evento que mudou minha vida."},
   {"Eu precisava de um lugar tranquilo para trabalhar minha arte, literatura, música ou manifesto."},
   {"Eu precisava comungar com a natureza, longe da civilização."},
   {"Eu era o guardião de uma ruina ou relíquia antiga."},
   {"Eu era um peregrino em busca de uma pessoa, lugar ou relíquia de grande significância espiritual."}
   };

   forasteiro.nome = "Forasteiro";
   forasteiro.personalidade =
   {
   {"Eu fui guiado por uma sede de viagens que me levou a abandonas meu lar."},
   {"Eu cuido dos meus amigos como se eles fossem filhotes recém-nascidos."},
   {"Certa vez, eu corri quarenta quilômetros sem parar alertar meu clã da aproximação de uma horda orc. Eu faria de novo se fosse necessário."},
   {"Eu tenho uma lição pra cada situação, aprendida observando a natureza."},
   {"Eu não vejo lugar para o povo rico e educado. Dinheiro e modos não vão salvá-lo de um urso-coruja faminto."},
   {"Estou sempre pegando coisas, distraidamente brincando com elas e, às vezes, quebrando-as."},
   {"Eu me sinto muito mais confortável entre animais que entre pessoas."},
   {"Eu fui, de fato, criado por lobos."}
   };
   forasteiro.ideal =
   {
   {"A vida é como as estações, em constante mudança, e nós devemos mudar com ela. (Caótico)"},
   {"É responsabilidade de todos trazer a maior felicidade para toda a tribo. (Bom)"},
   {"Se eu me desonrar, eu desonrarei todo o meu clã. (Leal)"},
   {"O mais forte deve governar. (Mau)"},
   {"O mundo natural é mais importante que todas as construções da civilização. (Neutro)"},
   {"Eu devo adquirir gloria em batalha, para mim e para meu clã. (Qualquer)"}
   };
   forasteiro.vinculo =
   {
   {"Minha família, clã ou tribo é a coisa mais importante na minha vida, mesmo quando eles estão longe."},
   {"Uma ofensa a natureza intocada do meu lar é uma ofensa a mim."},
   {"Eu trarei uma fúria terrível aos malfeitores que destruíram minha terra natal."},
   {"Eu sou o último da minha tribo e cabe a mim garantir que seus nomes façam parte das lendas."},
   {"Eu sofro de visões terríveis de um desastre vindouro, e farei qualquer coisa para impedi-lo."},
   {"É meu dever prover filhos para sustentar minha tribo."}
   };
   forasteiro.defeito =
   {
   {"Sou muito apaixonado por cerveja, vinho e outras bebidas."},
   {"Não existe lugar para precaução em uma vida vivida ao máximo."},
   {"Eu lembro de cada insulto que sofri e nutro um ressentimento silencioso contra qualquer um que já tenha me insultado"},
   {"Eu tenho dificuldade em confiar em membros de outras raças, tribos ou sociedades."},
   {"A violência é minha resposta para quase todos os obstáculos."},
   {"Não espere que eu salve aqueles que não conseguem se virar sozinhos. É a lei da natureza que os fortes prosperem e os fracos pereçam."}
   };
   forasteiro.tabela_extra =
   {
   {"Assentado"},
   {"Armadilheiro"},
   {"Caçador de recompensa"},
   {"Exilado ou pária"},
   {"Forrageador"},
   {"Guia"},
   {"Mateiro"},
   {"Nômade tribal"},
   {"Peregrino"},
   {"Saqueador tribal"}
   };

   heroi.nome = "Heroi do Povo";
   heroi.personalidade =
   {
   {"Eu julgo as pessoas por suas ações, não por suas palavras."},
   {"Se alguém está em apuros, eu estou sempre pronto para ajudar."},
   {"Quando eu fixo minha mente em algo, eu sigo esse caminho, não importa o que fique no caminho."},
   {"Eu possuo um forte senso de justiça e sempre tento encontrar a solução mais equilibrada para as discussões."},
   {"Eu confio em minhas habilidades e farei o que for necessário para que os outros confiem também."},
   {"Pensar é para os outros, eu prefiro agir."},
   {"Eu abuso de palavras longas na tentativa de soar inteligente."},
   {"Eu me entedio fácil. Para onde devo ir para me encontrar com meu destino?"}
   };
   heroi.ideal =
   {
   {"As pessoas merecem ser tratadas com dignidade e respeito. (Bom)"},
   {"Ninguém merece tratamento diferenciado perante a lei, muito menos estar acima dela. (Leal)"},
   {"Não pode haver permissão para tiranos oprimirem o povo. (Caótico)"},
   {"Se eu ficar forte, eu posso pegar tudo o que eu quiser o que eu desejar. (Mal)"},
   {"Não há nada de bom em fingir ser algo que não sou. (Neutro)"},
   {"Nada, nem ninguém, pode me manter longe do meu chamado. (Qualquer)"}
   };
   heroi.vinculo =
   {
   {"Eu tenho família, embora não faça a mínima ideia de onde eles estão, espero encontrá-los um dia."},
   {"Eu trabalho a terra, eu amo a terra e eu vou defender a terra."},
   {"Um nobre orgulhoso me deu uma bela surra, e eu vou ter minha vingança em qualquer valentão que encontrar."},
   {"Minhas ferramentas são símbolo de minha vida passada, eu as carregarei para nunca me esquecer de minhas origens."},
   {"Eu devo proteger aqueles que não podem se defender."},
   {"Gostaria que meu amor viesse comigo para seguir meu destino."}
   };
   heroi.defeito =
   {
   {"O tirano que comanda minha terra não vai parar até ver meu cadáver."},
   {"Eu estou convencido sobre o significado do meu destino, e cego aos riscos e falhas."},
   {"As pessoas que me conhecem desde criança sabem de um vergonhoso segredo meu, eu não poderei voltar para casa nunca."},
   {"Eu tenho uma fraqueza pelos vícios da cidade, especialmente a bebedeira."},
   {"Secretamente, eu acredito que as coisas estariam melhores se algum tirano comandasse a região."},
   {"Eu tenho dificuldades em confiar em meus aliados."}
   };
   heroi.tabela_extra =
   {
   {"Eu me opus contra agentes de um tirano."},
   {"Eu salvei pessoas durante um desastre natural."},
   {"Eu enfrentei sozinho um terrível monstro."},
   {"Eu roubei de um mercador corrupto para ajudar os pobres."},
   {"Eu liderei uma milícia na batalha contra um exército."},
   {"Eu invadi o castelo de um tirano e roubei armas para entregar ao povo."},
   {"Eu treinei os camponeses no uso de ferramentas do campo como armas para enfrentar soldados de um tirano."},
   {"Um lorde rescindiu um decreto que desfavorecia o povo após eu protestar contra ele."},
   {"Um ser celestial, feérico, ou similar, deu-me uma bênção ou revelou minha origem secreta."},
   {"Recrutado para o exército de um lorde, eu prevaleci na liderança e fui condecorado por heroísmo."}
   };

   marinheiro.nome = "Marinheiro";
   marinheiro.personalidade =
   {
   {"Meus amigos sabem que podem contar comigo pro que der e vier."},
   {"Eu trabalho duro para que possa me divertir muito quando o trabalho estiver pronto."},
   {"Eu gosto de navegar para novos portos e fazer novas amizades acompanhado de uma jarra de cerveja."},
   {"Eu modifico alguns fatos para o bem de uma boa história."},
   {"Pra mim, uma briga de taverna é uma ótima forma de conhecer uma nova cidade."},
   {"Eu nunca deixo passar uma aposta amigável."},
   {"Meu vocabulário é tão sujo quanto o covil de um otyugh."},
   {"Eu gosto de trabalhos bem feitos, especialmente se eu puder convencer alguém a fazê-los."}
   };
   marinheiro.ideal =
   {
   {"A coisa que mantem um navio unido é o respeito mútuo entre o capitão e a tripulação. (Bem)"},
   {"Todos nós fazemos o trabalho, portanto, todos partilhamos os espólios. (Leal)"},
   {"O mar é liberdade a liberdade de ir aonde quiser. (Caótico)"},
   {"Eu sou um predador e os outros navios no mar são minhas presas. (Mau)"},
   {"Eu sou apegado aos meus companheiros de tripulação, não a ideais. (Neutro)"},
   {"Algum dia eu serei dono do meu próprio navio e traçarei meu próprio destino. (Qualquer)"}
   };
   marinheiro.vinculo =
   {
   {"Eu sou leal ao meu capitão, primeiramente, o resto vem em segundo."},
   {"O navio é o mais importante – tripulantes e capitães vem e vão."},
   {"Eu sempre me lembrarei do meu primeiro navio."},
   {"Em uma cidade portuária, eu tenho uma amante que quase me roubou do mar."},
   {"Eu fui enganado na divisão dos espólios e eu quero o que me é devido."},
   {"Cruéis piratas mataram meu capitão e companheiros de tripulação, saquearam nosso navio e me deixaram para morrer. A vingança será minha."}
   };
   marinheiro.defeito =
   {
   {"Eu sigo ordens, mesmo que eu ache que estão erradas."},
   {"Eu direi qualquer coisa para evitar trabalho extra."},
   {"Certa vez, alguém duvidou da minha coragem, eu nunca recuo, não importa o quão perigosa seja a situação."},
   {"Quando começo a beber, é difícil pra mim parar."},
   {"Eu não resisto a uma sacolinha de moedas dando sopa ou outras bugigangas que encontro."},
   {"Meu orgulho provavelmente levará a minha destruição."}
   };

   nobre.nome = "Nobre";
   nobre.personalidade =
   {
   {"Minha bajulação eloquente faz com que todos com quem eu converse se sintam a pessoa mais maravilhosa e importante do mundo."},
   {"As pessoas comuns me amam por minha bondade e generosidade."},
   {"Ninguém pode duvidar, olhando para o meu porte real, que estou acima das massas plebeias."},
   {"Eu tenho grande cuidado de sempre estar no meu melhor e seguir as últimas modas."},
   {"Eu não gosto de sujar minhas mãos, e eu não vou ser pego em acomodações inadequadas."},
   {"Apesar da minha origem nobre, eu não estou acima dos outros. O sangue é um só."},
   {"Meu apoio, uma vez perdido, não volta."},
   {"Se você me ferir, eu irei esmagá-lo, arruinar seu nome, e salgar seus campos."}
   };
   nobre.ideal =
   {
   {"O respeito a mim é devido por causa da minha posição, mas todas as pessoas, independentemente da posição merecem ser tratados com dignidade. (Bom)"},
   {"É o meu dever respeitar a autoridade daqueles acima de mim, assim como aqueles abaixo de mim devem me respeitar. (Leal)"},
   {"Devo provar que posso me cuidar sem os mimos da minha família. (Caótico)"},
   {"Se eu puder alcançar mais poder, ninguém vai me dizer o que fazer. (Mau)"},
   {"O sangue corre mais grosso que a água. (Qualquer)"},
   {"É o meu dever proteger e cuidar das pessoas abaixo de mim. (Bom)"}
   };
   marinheiro.vinculo =
   {
   {"Eu vou encarar qualquer desafio para ganhar a aprovação da minha família."},
   {"A aliança da minha casa com outra família nobre deve ser mantida a todo custo."},
   {"Nada é mais importante do que os outros membros da minha família."},
   {"Eu sou apaixonado pela herdeira de uma família que a minha família despreza."},
   {"Minha lealdade ao meu soberano é inabalável."},
   {"As pessoas comuns devem me ver como um herói do povo."}
   };
   marinheiro.defeito =
   {
   {"Eu secretamente acredito que todos estão abaixo de mim."},
   {"Eu escondo um segredo verdadeiramente escandaloso que poderia arruinar minha família para sempre."},
   {"Muitas vezes eu ouço insultos e ameaças veladas em cada palavra dirigida a mim, e me irrito muito rápido."},
   {"Eu tenho um desejo insaciável por prazeres carnais."},
   {"Na verdade, o mundo gira ao meu redor."},
   {"Pelas minhas palavras e ações, muitas vezes, envergonho minha família."}
   };

   orfao.nome = "Órfão";
   orfao.personalidade =
   {
   {"Eu escondo pedaços de comida e bugigangas em meus bolsos."},
   {"Eu pergunto um monte e coisas."},
   {"Eu gosto de me espremer em locais pequenos onde ninguém possa me alcançar."},
   {"Eu durmo encostado em um muro ou árvore, abraçado com todas as minhas posses."},
   {"Eu como feito um porco e tenho maus modos."},
   {"Eu acho que todos que são gentis comigo tem segundas intenções."},
   {"Eu não gosto de tomar banho."},
   {"Eu digo na cara o que as outras pessoas insinuam ou escondem."}
   };
   orfao.ideal =
   {
   {"Todas as pessoas, ricas ou pobres, merecem respeito. (Bom)"},
   {"Nós temos que tomar conta uns dos outros, porque ninguém mais o fará. (Leal)"},
   {"Os baixos se erguerão e os altos irão tombar. A mudança é a natureza das coisas. (Caótico)"},
   {"Os ricos precisam ver como a vida e morte é nas sarjetas. (Mau)"},
   {"Eu ajudo as pessoas que me ajudam – é isso que nos mantem vivos. (Neutro)"},
   {"Eu vou provar que sou merecedor de uma vida melhor. (Qualquer)"}
   };
   orfao.vinculo =
   {
   {"Minha cidade ou vila é meu lar, e eu vou lutar para defendê-lo."},
   {"Eu patrocino um orfanato para que outros não passem pelo que fui forçado a passar."},
   {"Eu devo minha sobrevivência a outros órfão que me ensinou a vida nas ruas."},
   {"Eu tenho uma dívida que nunca poderei pagar com uma pessoa que teve pena de mim."},
   {"Eu sai da minha vida de pobreza roubando uma pessoa importante, eu sou procurado por isso."},
   {"Ninguém deveria ter suportar as dificuldades pelas quais passei."}
   };
   orfao.defeito =
   {
   {"Se eu estiver em desvantagem, eu vou fugir de uma briga."},
   {"Ouro parece ser muito dinheiro pra mim, e eu faria praticamente qualquer coisa por mais dele."},
   {"Eu nunca vou confiar em ninguém plenamente, além de mim mesmo."},
   {"Eu prefiro matar alguém enquanto dorme que uma luta justa."},
   {"Não é roubo se eu preciso mais que outra pessoa."},
   {"As pessoas que não podem se virar sozinhas, tem o que merecem."}
   };

   sabio.nome = "Sábio";
   sabio.personalidade =
   {
   {"Eu escondo pedaços de comida e bugigangas em meus bolsos."},
   {"Eu pergunto um monte e coisas."},
   {"Eu gosto de me espremer em locais pequenos onde ninguém possa me alcançar."},
   {"Eu durmo encostado em um muro ou árvore, abraçado com todas as minhas posses."},
   {"Eu como feito um porco e tenho maus modos."},
   {"Eu acho que todos que são gentis comigo tem segundas intenções."},
   {"Eu não gosto de tomar banho."},
   {"Eu digo na cara o que as outras pessoas insinuam ou escondem."}
   };
   sabio.ideal =
   {
   {"Todas as pessoas, ricas ou pobres, merecem respeito. (Bom)"},
   {"Nós temos que tomar conta uns dos outros, porque ninguém mais o fará. (Leal)"},
   {"Os baixos se erguerão e os altos irão tombar. A mudança é a natureza das coisas. (Caótico)"},
   {"Os ricos precisam ver como a vida e morte é nas sarjetas. (Mau)"},
   {"Eu ajudo as pessoas que me ajudam é isso que nos mantem vivos. (Neutro)"},
   {"Eu vou provar que sou merecedor de uma vida melhor. (Qualquer)"}
   };
   sabio.vinculo =
   {
   {"Minha cidade ou vila é meu lar, e eu vou lutar para defendê-lo."},
   {"Eu patrocino um orfanato para que outros não passem pelo que fui forçado a passar."},
   {"Eu devo minha sobrevivência a outros órfão que me ensinou a vida nas ruas."},
   {"Eu tenho uma dívida que nunca poderei pagar com uma pessoa que teve pena de mim."},
   {"Eu sai da minha vida de pobreza roubando uma pessoa importante, eu sou procurado por isso."},
   {"Ninguém deveria ter suportar as dificuldades pelas quais passei."}
   };
   sabio.defeito =
   {
   {"Se eu estiver em desvantagem, eu vou fugir de uma briga."},
   {"Ouro parece ser muito dinheiro pra mim, e eu faria praticamente qualquer coisa por mais dele."},
   {"Eu nunca vou confiar em ninguém plenamente, além de mim mesmo."},
   {"Eu prefiro matar alguém enquanto dorme que uma luta justa."},
   {"Não é roubo se eu preciso mais que outra pessoa."},
   {"As pessoas que não podem se virar sozinhas, tem o que merecem."}
   };
   sabio.tabela_extra =
   {
   {"Acadêmico desacreditado"},
   {"Alquimista"},
   {"Aprendiz de mago"},
   {"Astrônomo"},
   {"Bibliotecário"},
   {"Escriba"},
   {"Pesquisador"},
   {"Professor"}
   };

   soldado.nome = "Soldado";
   soldado.personalidade =
   {
   {"Eu sou sempre polido e respeitoso."},
   {"Eu sou assombrado pelas memórias da guerra. Não consigo tirar aquelas imagens da minha cabeça."},
   {"Eu perdi muitos amigos, e sou muito devagar para fazer novos."},
   {"Eu tenho muitas histórias de inspiração e cautela da época de minha experiência militar que são relevantes em todas as situações de combate."},
   {"Eu não consigo encarar um cão infernal sem vacilar."},
   {"Eu gosto de ser forte e de quebrar coisas."},
   {"Eu tenho um senso de humor grosseiro."},
   {"Eu enfrento os problemas de frente. Uma solução direta é o melhor caminho para o sucesso."}
   };
   soldado.ideal =
   {
   {"Nosso destino é dar nossas vidas em defesa de terceiros. (Bom)"},
   {"Eu faço o que tenho que fazer e obedeço apenas a autoridade. (Leal)"},
   {"Quando pessoas seguem ordens cegas elas apoiam um tipo de tirania. (Caótico)"},
   {"A vida é como uma guerra, o mais forte vence. (Mau)"},
   {"Ideais não valem a pena se você matar, ou for à guerra por eles. (Neutro)"},
   {"Minha cidade, nação ou meu povo, são tudo o que importa para mim. (Qualquer)"}
   };
   soldado.vinculo =
   {
   {"Eu ainda daria a minha vida pelas pessoas com quem servi."},
   {"Alguém salvou minha vida no campo de batalha. Desde aquele dia eu nunca deixo nenhum amigo para trás."},
   {"Minha honra é minha vida."},
   {"Eu nunca esquecerei a destruidora derrota que minha companhia sofreu ou os inimigos que a causaram."},
   {"Aqueles que lutam ao meu lado são aqueles por quem vale a pena morrer."},
   {"Eu luto por aqueles que não podem lutar por si mesmos."}
   };
   soldado.defeito =
   {
   {"O inimigo monstruoso que enfrentei em uma batalha ainda me deixa tremendo de medo."},
   {"Eu tenho pouco respeito por aqueles que não se provam bons combatentes."},
   {"Eu cometi um terrível erro em batalha, o que custou muitas vidas eu farei de tudo para manter esse erro em segredo."},
   {"Meu ódio por meus inimigos é cego e irracional."},
   {"Eu obedeço a lei, mesmo se a lei trouxer a angústia."},
   {"Eu prefiro comer minha armadura a admitir que estou errado."}
   };
   soldado.tabela_extra =
   {
   {"Batedor"},
   {"Cavaleiro"},
   {"Contramestre"},
   {"Equipe de apoio (cozinheiro, ferreiro)"},
   {"Infantaria"},
   {"Médico"},
   {"Oficial"},
   {"Porta-estandarte"}
   }; */

   rand_tipo = rand() % (QTD_TIPOS -1);
   rand_nomes_m = rand() % (QTD_NOMES_M -1);
   rand_nomes_f = rand() % (QTD_NOMES_F -1);
   rand_antecedente = rand() % (QTD_ANTECEDENTE -1);


   for(int i=0;i<1;i++){
      printf("Profissão: %s \n",tipos[rand_tipo]);
      printf("Antecedente: %s \n", antecedente[rand_antecedente]);
      printf("Nome M: %s \n",Nomes_M[rand_nomes_m]);
      printf("Nome F: %s \n",Nomes_F[rand_nomes_f]);
   }

}

