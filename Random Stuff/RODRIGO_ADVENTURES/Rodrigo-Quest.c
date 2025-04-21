#include <stdio.h>
#include <stdlib.h>

int escolha;

int codigoBruno();
int codigoGustavin();
int codigoGabrielzin();
int codigoGustavo();

int main(){

    printf("RODRIGO - O TIMIDO\nTHE GAME\nUma historia confusa de amor (ou nao)\n\n\n\n");

    printf("Rodrigo esta andando no corredor do SENAI\nquando uma mulher bonita veio em sua direcao\n\nO que ele faz?\n\n");
    printf("1 - Ele tenta cumprimenta-la\n2 - Ele tenta dar uma cantada\n3 - Ele tenta se esconder\n4 - Ele tenta segui-la\n\n>> ");
    scanf("%d", &escolha);

    if (escolha == 1){
        codigoBruno();
        return 0;
    }
    if (escolha == 2){
        codigoGustavin();
        return 0;
    }
    if (escolha == 3){
        codigoGabrielzin();
        return 0;
    }
    if (escolha == 4){
        codigoGustavo();
        return 0;
    }

    return 0;
}

int codigoBruno(){
    printf("Bom dia\n\nO que deve acontecer em seguida:\n\n1_ela comprimenta\n2_chega outra na conversa\n3_ela ignora\n4_ele escorrega\n\n");
        scanf("%d",&escolha);

        //CODIGO DO HIGOR
        if (escolha == 1){

            printf("SE ELA COMPRIMENTAR ELE:\n\n");

            printf("1_ele agarra ela sem ela querer\n");
            printf("2_ele troca uma ideia da hora com ela\n");
            printf("3_ele chama ela pra sair\n");
            printf("4_ela fala da sua 'beleza'\n");
            scanf("%d",&escolha);

            if (escolha==1){
                printf("\nele agarra ela sem ela querer, ela mete um tapasso na nuca dele que manda ele pra cadeia\ngame over\n");
                return 0;
            }
            if (escolha==2) {
                printf("\nele troca uma ideia da hora com ela\nAmbos se conhecem, vao no cinema, se casam e vao morar na irlanda com seus 2 filhos\nFinal feliz\n");
                return 0;
            }

            if (escolha==3)  {
                printf("\nele chama ela pra sair, ela aceita, porem ela decide o lugar\nAmbos acabam parando numa praia de nudismo\nVitoria??N sei\n");
                return 0;
            }

            if (escolha==4) {
                printf("\nela fala da sua 'beleza'\nOu no caso, a falta dela, vira as costas, e vai embora\nGame Over\n");
                return 0;
            }

        }

        //CODIGO DO LORRANS
        if (escolha == 2){
            printf("chega outro na conversa\n");

            printf("Quem e a misteriosa figura que pode frustar os planos de Rodrigo?\n\n");
            printf("1 Era um homem romantico com flores\n");
            printf("2 uma amiga\n");
            printf("3 um anao de bicicleta\n");
            printf("4 um extraterrestre caolho pirata em uma nave navio\n");
            scanf("%d", &escolha);

            if (escolha==1){
                printf("game over");
                return 0;
            }
            if (escolha==2){
                printf("game over");
                return 0;
            }
            if (escolha==3){
                printf("game over");
                return 0;
            }
            if (escolha==4){
                printf("ganhou");
                return 0;
            }
        }

        //CODIGO DO HIGOR
        if (escolha == 3){

            printf("ELA IGNORA ELE:\n\n");

            printf("1_ele comeca a xingar ela\n\n");

            printf("2_ele comeca a chorar\n\n");

            printf("3_ele fala que, ela esta perdendo o amor da vida dela\n\n");

            printf("4_ele desiste de mulheres\n\n");

            scanf("%d",&escolha);

            if (escolha==1){
                printf("\ele comeca a xingar ela\n\n");
            }
            if (escolha==2) {
                printf("\ele comeca a chorar\n\n");
            }
            if (escolha==3)  {
                printf("\ele fala que, ela esta perdendo o amor da vida dela\n\n");
            }
            if (escolha==4) {
        printf("\4_ele desiste de mulheres\n\n");
            }
        }

        if (escolha == 4){
        //CODIGO DO LORRANS
            printf("Apos um ato desesperado e maluco ele corre e escorrega,o que vai acontecer a seguir?\n");


            printf("1 cai e quebra a perna em tres lugares diferentes\n");
            printf("2 e tropeca na merendeira e deixa cair a panela de feijao\n");
            printf("3 ele cai nos bracos da garota e ela se apaixona loucamente por ele\n");
            printf("4 ele cai em outra dimensao onde capivaras dominam o mundo\n");
            scanf("%d", &escolha);

            if (escolha==1){
                printf("game over");
                return 0;
            }
            if (escolha==2){
                printf("game over");
                return 0;
            }
            if (escolha==3){
                printf("ganhou");
                return 0;
            }
            if (escolha==4){
                printf("ganhou");
                return 0;
            }
        }
}
int codigoGustavin(){
    printf("\n1_Seu pai e padero? \n2_Voce trabalha na Horta? \n3_Voce vem sempre aqui? \n4_Voce come racao? \n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha);

    //CODIGO DO GABRIEL M
    if (escolha == 1){
        printf("nao_disse ela\nrodrigo porque voce eh um sonho\n\n escolha o que ela deve fazer:\n\n1_ela gosta da cantanda e pergunta seu nome\n2_ela odeia a cantada\n3_ela ignora ele e finge que nao ouviu nada\n4_ela pergunta se ele passa fome\n");

        scanf("%d",&escolha);

        if (escolha ==1){
            printf("eles trocam assunto e se cohecem melhor");
            return 0;
        }
        if (escolha == 2){
            printf("simplesmente xinga ele por uma cantada");
            return 0;
        }
        if (escolha ==3){
            printf("ele vai embora correndo por ser ignorada e tropeca e cai");
            return 0;
        }
        if (escolha ==4){
            printf("ela oferece um salgado pra ele, pois parecia estar sem comer");
            return 0;
        }
    }
    //CODIGO DO GABRIEL M
    if (escolha == 2){
        printf("nao_disse ela\nrodrigo porque voce fez meu pepino crescer\n\n escolha o que ela deve fazer:\n\n1_ela gosta da cantanda\n2_ela odeia a cantada\n3_ela ignora ele e finge que nao ouviu nada\n4_ela acha que ele tem problemas mentais\n");

        scanf("%d",&escolha);

        if (escolha ==1){
            printf("por algum milagre do destino ela gosta da pessima piada e pede ele em namoro");
            return 0;
        }
        if (escolha == 2){
            printf("ela acha a cantada uma bosta e chama o irmao dela pra te dar uma surra");
            return 0;
        }
        if (escolha ==3){
            printf("ela ignora ele e apenas o olha com pena");
            return 0;
        }

        if (escolha ==4){
            printf("ela te acha maluco e chama a policia para te prender por assedio");
            return 0;
        }
    }
    //CODIGO BRUNO 2
    if (escolha == 3){
        printf("aqui onde_disse ela\rodrigo no senai\n\n escolha o que ela deve fazer:\n\n1_pisar no pe dele\n2_rir da cara dele\n3_da um soco nele\n4_da uma chance a ele\n");

        scanf("%d",&escolha);

        if (escolha == 1){
            printf("ela pisa no pe de rodrigo, rodrigo sai rolando de dor eterna");
            return 0;
        }
        if (escolha == 2){
            printf("rodrigo sai de finin constrangido");
            return 0;
        }
        if (escolha == 3){
            printf("rodrigo perde um dente e desmaia");
            return 0;
        }
        if (escolha == 4){
            printf("rodrigo marca um encontro com sucesso curte pra parte 2");
            return 0;
        }
    }
    //CODIGO BRUNO 2
    if (escolha == 4){
        printf("nao_disse ela\nrodrigo porqur voce e uma gata\n\n escolha o que ela deve fazer:\n\n1_chamar a policia\n2_olhar com raiva pra ele\n3_sai correndo\n4_figir que ele nao existe\n");

        scanf("%d",&escolha);

        if (escolha ==1){
            printf("a policia leva rodrigo para prisao onde ele vivi feliz com latreu");
            return 0;
        }
        if (escolha == 2){
            printf("ela solta raio lazer fritando ele ate a morte");
            return 0;
        }
        if (escolha ==3){
            printf("ela sai correndo nunca mais sendo vista por niquem");
            return 0;
        }
        if (escolha ==4){
            printf("ela fica invisivel e nunca mais e vista");
            return 0;
        }
    }
}
int codigoGabrielzin(){
    printf("Rodrigo escondeu da menina \no que acontece em seguida\n\n");

    printf("1 - Rodrigo cai\n");
    printf("2 - Rodrigo tampa seu rosto com o cabelo\n");
    printf("3 - Rodrigo se joga na moita\n");
    printf("4 - Rodrigo corre para o banheiro\n");

    scanf("%d",&escolha);

    if (escolha == 1){
        printf("RODRIGO CAI\n\n");

        printf("Apos a queda na frente da bela garota, Rodrigo imediatamente tenta se recompor,\nmas acaba apoiando nela, assim derrubando os dois juntos.\n");
        printf("=============================================================================\n");
        printf("O que o Rodrigo devera a fazer a seguir com essa situacao constrangedora?\nEscolha uma dessas quatro opcoes abaixo:\n\n");

        printf("1.Pedir desculpas\n2.Ajudar ela\n3.Ignorar ela\n4.Ir embora\n\n");

        scanf("%d", &escolha);

        if (escolha == 1){
            printf("\nA garota aceita as desculpas de desespero e vergonha de Rodrigo, mas ela nunca\nquer ver o Rodrigo novamente\n\n");
            return 0;
        }
        if (escolha == 2){
            printf("\nRodrigo ajuda a garota, e se desculpando a mil por hora, acabando que a garota\nperdoa ele com um simples abraco\n\n");
            return 0;
        }
        if (escolha == 3){
            printf("\nA garota fica furiosa com o Rodrigo e comeca a espancar e deitar na porrada ate ele desmaiar\n\n");
            return 0;
        }
        if (escolha == 4){
            printf("\nRodrigo sai correndo de medo e das cosequencias que esperava por ele, apenas\ndeixando a garota sozinho largada no chao\n\n");
            return 0;
        }
    }
    if (escolha == 2){
        printf("RODRIGO TAMPA SEU ROSTO COM O CABELO\n\n");

        printf("Rodrigo com muita vergonha nao sabendo lidar com seus sentimenots, fica ali\nparado na frente da garota com muita vergonha. Ela comeca a estranhar.\n");
        printf("=============================================================================\n");
        printf("O que o Rodrigo devera a fazer a seguir com essa situacao constrangedora?\nEscolha uma dessas quatro opçoes abaixo:\n\n");

        printf("1.Bater no peito e ter coragem de falar com ela\n2.Ficam ali parados mesmo\n3.Sair andando de fininho\n4.Comeca a ter crise de ansiedade\n\n");

        scanf("%d", &escolha);
        if (escolha == 1){
            printf("\nRodrigo derrepente determinado, comeca a falar com a garota normalmente, assim\nganhando muita aura em sua cabeca. No final ele consegue pegar o numero dela de telefone, mas em menos de 1 semana nunca mais se fala dela.\n\n");
            return 0;
        }
        if (escolha == 2){
            printf("\nCom um grande grito de silencio, com o momento mais constrangedora e sem sentido ocorrendo com os 2, a garota simplesmente sai de perto dele, pois ele estava\ncomecando a suar demais e por um breve momento achar que ele era uma estatua no\nperiodo classica grega de tao rigido que era.\n\n");
            return 0;
        }
        if (escolha == 3){
            printf("\nRodrigo timidamente comeca a sair passino por passinho, ate ter a distancia o\nsuficiente para poder andar tranquilamente.\n\n");
            return 0;
        }
        if (escolha == 4){
            printf("\nCom a ansiedade a mil, Rodrigo comeca a ter uma crise muita alta, fazendo ele\nter um ataque no coracao e indo dreto no hospital.\n\n");
            return 0;
        }
    }
    if (escolha == 3){

        printf("RODRIGO TAMPA SEU ROSTO COM O CABELO\n\n");

        printf("Rodrigo com muita vergonha nao sabendo lidar com seus sentimenots, fica ali\nparado na frente da garota com muita vergonha. Ela comeca a estranhar.\n");
        printf("=============================================================================\n");
        printf("O que o Rodrigo devera a fazer a seguir com essa situacao constrangedora?\nEscolha uma dessas quatro opçoes abaixo:\n\n");

        printf("1.Bater no peito e ter coragem de falar com ela\n2.Ficam ali parados mesmo\n3.Sair andando de fininho\n4.Comeca a ter crise de ansiedade\n\n");

        scanf("%d", &escolha);
        if (escolha == 1){
            printf("\nRodrigo derrepente determinado, comeca a falar com a garota normalmente, assim\nganhando muita aura em sua cabeca. No final ele consegue pegar o numero dela de telefone, mas em menos de 1 semana nunca mais se fala dela.\n\n");
            return 0;
        }
        if (escolha == 2){
            printf("\nCom um grande grito de silencio, com o momento mais constrangedora e sem sentido ocorrendo com os 2, a garota simplesmente sai de perto dele, pois ele estava\ncomecando a suar demais e por um breve momento achar que ele era uma estatua no\nperiodo classica grega de tao rigido que era.\n\n");
            return 0;
        }
        if (escolha == 3){
            printf("\nRodrigo timidamente comeca a sair passino por passinho, ate ter a distancia o\nsuficiente para poder andar tranquilamente.\n\n");
            return 0;
        }
        if (escolha == 4){
            printf("\nCom a ansiedade a mil, Rodrigo comeca a ter uma crise muita alta, fazendo ele\nter um ataque no coracao e indo dreto no hospital.\n\n");
            return 0;
        }
    }
    if (escolha == 4){
        printf("RODRIGO CORRE PARA O BANHEIRO\n\n");

        printf("Rodrigo com muita adrenalina corre para o banheiro desesperado para se esconder de tanta ansiedade, mas acaba que ele entra no banheiro errado, acabando\nentrando no banheiro feminino.\n");
        printf("=============================================================================\n");
        printf("O que o Rodrigo devera a fazer a seguir com essas sircunstancias extremas?\nEscolha uma dessas quatro opçoes abaixo:\n\n");

        printf("1.Entrando normalmente se achando como uma delas\n2.Sai correndo no banheiro\n3.Diz que se considera como uma mulher tambem\n4.Pula pela janela\n\n");

        scanf("%d", &escolha);
        if (escolha == 1){
            printf("\nRodrigo com seus planos mirabolantes, ele anda serenamente dentro no banheiro e se misturando como uma delas, usando o banheiro como se fosse nada, mas nem deu menos de 10 segundos que ele foi apenas crucificado dentro do banheiro.\n\n");
            return 0;
        }
        if (escolha == 2){
            printf("\nRodrigo ao perceber o seu grande erro, instantaneamente corre para fora do\nbanheiro Com isso ele corre sem parar e acidentalmente nao percebe que ja estava na estrada e acaba sendo atropelado.\n\n");
            return 0;
        }
        if (escolha == 3){
            printf("\nRodrigo usa como desculpa para as outras mulheres no mesmo local, avisando que\nse considera como mulher por ser tran, mas nao tao surpreendentemente as outras comecam a realizar o procedimento de deixar ele realmente trans. Assim o Rodrigo agora, consegue a partir de agora poder usar o banheiro feminino tanto\nmasculino.\n\n");
            return 0;
        }
        if (escolha == 4){
            printf("\nRodrigo rapidamente por meio de seu instinto para situacoes como essa, sai\ncorrendo em direcao a janela a 2 metros de altura, assim voando e quebrando a\njanela, porem o Rodrigo foi tao rapido mais tao rapido que acaba voando ate voa ate em Mato Grosso do Sul, vendo um ser bem diferente, magrelo e verde, apenas\ndizendo para buscarem conhecimento.\n\n");
            return 0;
        }
    }
}
int codigoGustavo(){
    printf("1.Ele segue ela ate a porta do banheiro\n");
    printf("2.Ele segue ela nas redes sociais\n");
    printf("3.Ele segue ela ate a casa dela\n");
    printf("4.Ele ve um homem beijando ela\n");

    printf("Escolha oque fazer.");
    scanf("%d",&escolha);

    if (escolha == 1 ){

        printf("o rodrigo segue ela!\n");
        printf("1 ela entra e ele fica fora\n");
        printf("2 ela ve ele e o ignora\n");
        printf("3 ela pergunta voce esta me seguindo?\n");
        printf("4 ela chama o seguranca\n");
        scanf("%d",&escolha);

        if (escolha==1){
            printf("ela entra e ele fica fora\nGAME OVER");
            return 0;
        }
        if (escolha==2){
            printf("ela ve ele e o ignora\nGAME OVER");
            return 0;
        }
        if (escolha==3){
            printf("ela pergunta voce esta me seguindo?\nGAME OVER");
            return 0;
        }
        if (escolha==4){
            printf("ela chama o seguranca\nGAME OVER");
            return 0;
        }
    }
    if (escolha == 2 ){
        printf("Ele segue ela nas redes sociais\n\n o que rodrigo deve fazer\n\n1_fazer um perfil fake\n2_chantagear o pai dela\n3_desbrir onde ela mora\n4_ve o status dela\n\n");
        scanf("%d",&escolha);

        if (escolha ==1){
            printf("ele faiz um perfil como mulher onde marca um encontro,acaba tapiado e encontra latreu,ele acaba seguestrado e vivem felizes ate hoje\n");
            return 0;
        }
        if (escolha ==2){
            printf("o pai dela e do fbi, ele acha voce e te espanca ate a morte");
            return 0;
        }
        if (escolha ==3){
            printf("voce vai ate a casa entra a mae dela ve voce ela,pega uma espigarda e atira na sua cara");
            return 0;
        }
        if (escolha ==4){
            printf("voce ve que ela e casada e se suicida");
            return 0;
        }
    }
    if (escolha == 3 ){
        printf("Ele segue ela ate a casa dela\n\n o que rodrigo deve fazer\n\n1_fazer uma serenata\n2_bater no pai dela\n3_ficar pelado\n4_roubar o gato dela\n\n");
        scanf("%d",&escolha);

        if (escolha ==1){
            printf("ele leva um balde de agua gelada onde ele fica preso com o balde na cabeça e morre\n");
        }

        if (escolha ==2){
            printf("ele e lutador de WWE e te espanca ate a morte\n");

        }
        if (escolha ==3){
            printf("ele e mandado pro manicomio onde onde vive feliz pra sempre\n ");
        }
        if (escolha ==4){
            printf("se casada com o gato e acaba morrendo de alegria\n");
        }
    }
    if (escolha == 4 ){
        printf("ele ve um homen beijando ela!\n");

        printf("1 ele fica furioso\n");
        printf("2 ele chora igual uma crianca\n");
        printf("3 ele chama ele para virar amigo\n");
        printf("4 ele grita bem alto 'naaaaoooo'\n");

        scanf("%d",&escolha);

        if (escolha==1){
            printf("ele fica furioso");
        }
        if (escolha==2){
            printf("ele chora igual uma crianca");
        }
        if (escolha==3){
            printf("ele chama ele para virar amigo");
        }
        if (escolha==4){
            printf("ele grita bem alto 'naaaaoooo'");
        }
    }
}
