#ifndef MANUAL_H_INCLUDED
#define MANUAL_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


    char acolito_personalidade[7][255] = {
        {"Eu idolatro um herói particular da minha fé, e constantemente me refiro a seus feitos e exemplos."},
        {"Eu consigo encontrar semelhanças mesmo entre o inimigos mais violentos, com empatia e sempre trabalhando pela paz."},
        {"Eu vejo presságios em cada evento e ação. Os deuses estão falando conosco, nós apenas temos de ouvi-los."},
        {"Nada pode abalar minha atitude otimista."},
        {"Eu cito (corretamente ou não) textos sagrados e provérbios em quase qualquer situação."},
        {"Eu sou tolerante (ou intolerante) a qualquer outra fé, e respeito (ou condeno) a adoração a outros deuses."},
        {"Eu aprecio comida requintada, bebidas e a elite entre o alto escalão de meu templo. Uma vida dura me irrita."},
        {"Eu passei tanto tempo no templo que possuo pouca prática em lidar com as pessoas mundo a fora."}
    };
  
    char acolito_ideal[5][255] = {
        {"As tradições ancestrais de adoração e sacrifício devem ser preservadas e perpetradas. (Leal)"},
        {"Eu sempre tento ajudar aqueles em necessidade, não importando o custo pessoal. (Bom)"},
        {"Nós devemos ajudar a conduzir as mudanças que os deuses estão constantemente trabalhando para o mundo. (Caótico)"},
        {"Eu espero que um dia eu consiga chegar ao topo na hierarquia da minha religião. (Leal)"},
        {"Eu acredito que minha divindade guia minhas ações. Eu tenho fé que, se eu trabalhar duro, coisas boas acontecerão. (Leal)"},
        {"Aspiração. Eu busco ser digno da graça do meu deus ao corresponder minhas ações aos seus ensinamentos. (Qualquer)"}
    };

    char acolito_vinculo[5][255] = {
        {"Eu morreria para recuperar uma relíquia ancestral de minha fé, perdida há muito tempo."},
        {"Eu ainda terei minha vingança contra o templo corrupto que me acusou de heresia."},
        {"Eu devo minha vida ao sacerdote que me acolheu quando meus pais morreram."},
        {"Tudo o que faço, faço pelo povo."},
        {"Eu farei qualquer coisa para proteger o templo que sirvo."},
        {"Eu busco guardar um texto sagrado que meus inimigos dizem ser herético e tentam destruí-lo."}
    };

    char acolito_defeito[5][255] = {
        {"Eu julgo os outros severamente, e a mim mesmo mais ainda."},
        {"Eu deposito muita confiança naqueles que detêm o poder na hierarquia de meu templo."},
        {"Minha devoção é muitas vezes me cega perante aqueles que professam a fé do meu deus."},
        {"Meu pensamento é inflexível."},
        {"Eu suspeito de estranhos e sempre espero o pior deles."},
        {"Depois de escolher um objetivo, eu fico obcecado em cumpri-lo, até mesmo em detrimento de qualquer outra coisa em minha vida."}
    };




    char artesao_personalidade[7][255] = {
        {"Eu acredito que tudo que valha a pena fazer, vale a pena ser feito direito. Eu não posso evitar – Eu sou perfeccionista."},
        {"Eu sou um esnobe que olha de cima a baixo aqueles que não sabem apreciar artes requintadas."},
        {"Eu sempre quero aprender como as coisas funcionam e o que deixa as pessoas motivadas."},
        {"Eu sou cheio de aforismos espirituosos e tenho um proverbio para cada ocasião."},
        {"Eu sou grosso com as pessoas que não tem o mesmo comprometimento que eu com o trabalho duro e honesto."},
        {"Eu gosto de falar longamente sobre minha profissão."},
        {"Eu não gasto meu dinheiro facilmente e vou barganhar incansavelmente para conseguir o melhor acordo possível."},
        {"Eu sou bem conhecido pelo meu trabalho e quero ter certeza que todos o apreciam. Eu sempre fico surpreso quando conheço pessoas que não ouviram falar de mim."}
    };

    char artesao_ideal[5][255] =  
    {
        {"É dever de todo cidadão civilizado fortalecer os elos da comunidade e a segurança da civilização. (Leal)"},
        {"Meus talentos me foram dados para que eu pudesse usá-los para beneficiar o mundo. (Bom)"},
        {"Todos deveriam ser livres para perseguir seus próprios meios de vida. (Caótico)"},
        {"Eu só estou aqui pelo dinheiro. (Mau)"},
        {"Eu sou cometido com o povo com quem me importo, não com ideias. (Neutro)"},
        {"Eu trabalho duro para ser o melhor no meu ofício. (Qualquer)"}
    };

    char artesao_vinculo[5][255] =
    {
        {"A oficina onde aprendi meu negócio é o local mais importante do mundo pra mim."},
        {"Eu criei um trabalho incrível para alguém, mas descobri que ele não era merecedor de recebê-lo. Ainda estou à procura de alguém que seja merecedor."},
        {"Eu tenho uma grande dívida para com minha guilda por fazer de mim a pessoa que sou hoje."},
        {"Eu busco riqueza para conseguir o amor de alguém."},
        {"Um dia eu voltarei para a minha guilda e provarei que sou o maior artesão dentre eles."},
        {"Eu irem me vingar das forças malignas que destruíram meu local de negócios e arruinaram meu estilo de vida."}
    };

    char artesao_defeito[5][255] = 
    {
        {"Eu farei de tudo para pôr minha mãos em algo raro ou inestimável."},
        {"Eu rapidamente presumo que alguém está tentando me trapacear."},
        {"Ninguém nunca poderá saber que eu, certa vez, roubei dinheiro dos cofres da guilda."},
        {"Eu nunca estou satisfeito com o que tenho – eu sempre quero mais."},
        {"Eu mataria para adquirir um título de nobreza."},
        {"Eu sou terrivelmente invejoso com qualquer um que possa ofuscar meu ofício. Todo lugar que eu vou, estou cercado de rivais."}
    };

    char artesao_extra[19][255] =
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




    artista_personalidade[7][255] =
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
    

    artista_ideal[5][255] =
    {
        {"Quando eu atuo, eu torno o mundo um lugar melhor. (Bom)"},
        {"As histórias, lendas e canções do passado nunca devem ser esquecidas, pois elas nos ensinam quem nós somos. (Leal)"},
        {"O mundo precisa de novas ideias e ações ousadas. (Caótico)"},
        {"Eu só estou aqui pelo dinheiro e pela fama. (Mau)"},
        {"Eu gosto de ver os sorrisos nos rostos das pessoas quando eu atuo. Isso é tudo que importa. (Neutro)"},
        {"A arte deve refletir a alma; ela deve vir de dentro e revelar quem realmente somos. (Qualquer)"}
        
    };

    artista_vinculo[5][255] =
    {
        {"Meu instrumento é meu bem mais valioso e ele me lembra de alguém que eu amo."},
        {"Alguém roubou meu precioso instrumento e, algum dia, eu vou pegá-lo de volta."},
        {"Eu quero ser famoso, custe o que custar."},
        {"Eu idolatro um herói dos contos antigos e mensuro meus feitos baseados nessa personalidade."},
        {"Eu vou fazer tudo para provar que sou superior eu meu odiado rival."},
        {"Eu faria qualquer coisa pelos membros da minha antiga trupe."}
    };

    artista_defeito[5][255] =
    {
        {"Eu farei de tudo para ganhar fama e renome."},
        {"Eu viro um idiota quando vejo um rosto bonito."},
        {"Um escândalo me impede de voltar para casa novamente. Esse tipo de problema parece me perseguir por ai."},
        {"Eu, certa vez, satirizei um nobre que ainda quer minha cabeça. Foi um erro que eu adoraria repetir."},
        {"Eu tenho problemas em esconder meus verdadeiros sentimentos. Minha língua afiada me mete em confusão."},
        {"Apesar dos meus melhores esforços, meus amigos não me consideram confiável."}
    };

    artista_extra[9][255] =
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




    char charlatao_personalidade[7][255] = 
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

    char charlatao_ideal[5][255] = 
    {
        {"Sou um espirito livre ninguém me diz o que fazer. (Caótico)"},
        {"Eu nunca roubo de pessoas que não podem perder algumas moedas. (Leal)"},
        {"Eu distribuo o dinheiro que adquiro com as pessoas que realmente precisam. (Bom)"},
        {"Eu nunca faço a mesma trapaça duas vezes. (Caótico)"},
        {"Bens materiais vem e vão. Os laços de amizade duram pra sempre. (Bom)"},
        {"Eu estou determinado a fazer algo por mim mesmo. (Qualquer)"}
   
    };

    char charlatao_vinculo[5][255] = 
    {
        {"Eu extorqui a pessoa errada e devo trabalhar para que esse indivíduo nunca mais cruze meu caminho ou o das pessoas com quem me importo."},
        {"Eu devo tudo ao meu mentor – uma pessoa terrível que, provavelmente, está apodrecendo na cadeia em algum lugar."},
        {"Em algum lugar por ai, eu tenho um filho que não me conhece. Eu estou tornando o mundo melhor para ele."},
        {"Eu vim de uma família nobre e, um dia, irei reivindicar minhas terras e título daqueles que o roubaram de mim."},
        {"Uma pessoa poderosa matou alguém que eu amava. Algum dia, em breve, terei minha vingança."},
        {"Eu enganei e arruinei a vida de uma pessoa que não merecia. Eu busco reparar meus erros, mas talvez nunca seja capaz de me perdoar."}
   
    };

    char charlatao_defeito[5][255] = 
    {
        {"Não resisto um rostinho bonito."},
        {"Estou sempre com dividas. Eu gasto meus lucros ilícitos com luxurias decadentes mais rápido do que os ganho..."},
        {"Estou convencido que ninguém pode me enganar da forma que eu engano os outros."},
        {"Eu sou ganancioso demais pra meu próprio bem. Eu não consigo resistir a me arriscar se tiver dinheiro envolvido."},
        {"Eu não resisto a enganar pessoas que são mais poderosas que eu."},
        {"Eu odeio admitir e vou me odiar por isso, mas, eu vou correr e salvar minha própria pele se as coisas engrossarem."}
   
    };

    char charlatao_extra[5][255] = 
    {
        {"Eu trapaceio em jogos de azar."},
        {"Eu falsifico moedas ou forjo documentos."},
        {"Eu me infiltro na vida das pessoas para descobrir suas fraquezas e ficar com suas fortunas."},
        {"Eu troco de identidade como troco de roupa."},
        {"Eu faço furtos rápidos nas esquinas das ruas."},
        {"Eu convenço as pessoas que tranqueiras inúteis valem seu suado dinheiro."}
    };
    



    char criminoso_personalidade[][255] = 
    {

    };

    char criminoso_ideal[][255] = 
    {

    };

    char criminoso_vinculo[][255] = 
    {

    };

    char criminoso_defeito[][255] = 
    {

    };

    char criminoso_extra[][255] = 
    {

    };




    char eremita_personalidade[][255] = 
    {

    };

    char eremita_ideal[][255] = 
    {

    };

    char eremita_vinculo[][255] = 
    {

    };

    char eremita_defeito[][255] = 
    {

    };

    char eremita_extra[][255] = 
    {

    };




    char forasteiro_personalidade[][255] = 
    {

    };

    char forasteiro_ideal[][255] = 
    {

    };

    char forasteiro_vinculo[][255] = 
    {

    };

    char forasteiro_defeito[][255] = 
    {

    };

    char forasteiro_extra[][255] = 
    {

    };




    char heroi_personalidade[][255] = 
    {

    };

    char heroi_ideal[][255] = 
    {

    };

    char heroi_vinculo[][255] = 
    {

    };

    char heroi_defeito[][255] = 
    {

    };

    char heroi_extra[][255] = 
    {

    };


#endif // MANUAL_H_INCLUDED
