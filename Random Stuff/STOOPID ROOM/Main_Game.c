#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
/*
    WIP
    Novas salas
    Randomização de codigo
    Enigmas Off-Script
    Reworking Languages
    Achievements

*/
//Variables
    int code;
    bool gameOver = false;
    int room_side = 1;
    int choice = 0;
    bool isWindowOpen = false;
    bool isVaultOpen = false;
    bool hasKey = false;

int main()
{

    printf("+++++STOOPID ROOM+++\n++++++THE GAME++++++\n\nDigite o numero correspondente a opcao desejada para executar a ação\n\n");
        sleep(2);

        printf("\n\nVoce acorda em uma sala estranha, voce se sente confuso sobre o que isso se trata\n\n");
        sleep(2);
        while (gameOver == false){
            //MAIN LOOP
            while (room_side == 1){
                printf("\nOlhando em volta, voce ve uma porta com um cofre ao lado\nO que voce faz?\n\n1 - Inspeciona a porta\n2 - Inspeciona o cofre\n3 - Virar para a esquerda\n4 - Virar para a direita\n\n>> ");
                scanf("%d", &choice);

                //DOOR ROUTE
                if (choice == 1){
                    printf("\nVoce inspeciona a porta de ferro, ela parece estar trancada por uma chave\nO que voce faz?\n\n1 - Abrir cadeado\n2 - Voltar\n\n>> ");
                    scanf("%d", &choice);
                    if (choice == 1 && hasKey == true)  {
                        printf("\nA porta se abre, voce sai da sala.\n\nMas logo percebe que está no Brasil, e o Lula eh presidente.\nVoce ganhou o jogo, mas a que custo?\n\nFIM\n");
                        gameOver = true;
                        return 0;
                    }
                    else if (choice == 1 && hasKey == false){
                        printf("\nVocê tenta abrir o cadeado\nMas nao tem forças o suficiente pra isso\nIsso seria bem mais facil se voce tivesse uma chave\nO que voce faz?\n\n1 - Voltar\n\n>>");
                        scanf("%d", &choice);
                        if (choice == 1){
                            continue;
                        }
                    }
                    if (choice == 2){
                        continue;
                    }
                }

                //VAULT ROUTE
                if (choice == 2){
                    sleep(2);
                    if (isVaultOpen == false){
                        printf("\nVoce inspeciona o cofre... ele pede um codigo de 3 digitos\nDigite o codigo: ");
                        scanf("%d", &code);
                        if (code == 420) {
                            hasKey = true;
                            isVaultOpen = true;
                            sleep(2);
                            printf("\nO cofre se abre, dentro dele ha uma chave\nVoce pega a chave e volta ao centro da sala onde\n");
                            break;
                        }
                        else {
                            printf("\nSenha incorreta\n");
                            break;
                        }
                    }
                }
                if (choice == 2)  {
                    if (isVaultOpen == true);
                    printf("\nVoce inspeciona o cofre...Agora está vazio...\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                    scanf("%d", &choice);
                }
                //SIDE CHANGE
                if (choice == 3) {
                    room_side = 4;
                }
                if (choice == 4) {
                    room_side = 2;
                }
            }
            //PAINTING SIDE
            while (room_side == 2){
                printf("Voce ve uma pintura de uma criatura amarela na parede\nO que voce faz?\n\n1 - Inspecionar a pintura\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
                scanf("%d", &choice);
                //PAINTING ROUTE
                if (choice == 1){
                    printf("Voce inspeciona a pintura, e atraz dela, voce encontra um texto enigmatico que diz:\n\nhttps://imgur.com/a/bSdx0Y2\n\nVoce nao sabe o que isso significa, mas reconhece onde poderia ser util ;)\nVoce volta ao centro da sala e\n");
                }
                //SIDE CHANGE
                if (choice == 2){
                    room_side = 1;
                }
                if (choice == 3){
                    room_side = 3;
                }
            }
            //WINDOW SIDE
            while (room_side == 3){
                //WINDOW ROUTE
                if (isWindowOpen == false){
                    printf("Voce ve uma janela fechada por uma cortina\nO que voce faz?\n\n1 - Abrir a cortina\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
                    scanf("%d", &choice);
                    if (choice == 1){
                        isWindowOpen = true;
                        break;
                    }
                }
                if (isWindowOpen == true){
                    printf("Voce ve uma janela com grades, e no fundo, uma arvore \nO que voce faz?\n\n1 - Inspecionar la fora\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
                    scanf("%d", &choice);
                }
                if (choice == 1) {
                    printf("Voce olha para fora, e ve uma arvore\nNela, voce ve dois caracteres\n\nC0\n\nVoce se pergunta o que isso quer dizer...\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                    scanf("%d", &choice);
                    if (choice == 1){
                        break;
                    }
                }

                //SIDE CHANGE
                if (choice == 2){
                    room_side = 2;
                }
                if (choice == 3){
                    room_side = 4;
                }
            }
            //BLOOD SIDE
            while (room_side == 4) {
                printf("Voce ve uma manchas escuras enormes na parede\nO que voce faz?\n\n1 - Inspecionar as manchas\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
                scanf("%d", &choice);
                //BLOOD ROUTE
                if (choice == 1) {
                    if (isWindowOpen == false) {
                        printf("Voce inspeciona as manchas, porem\nestá muito escuro para ver direito o que elas são\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                        scanf("%d", &choice);
                        if (choice == 1){
                            break;
                        }
                    }
                    if (choice == 1) {
                        if (isWindowOpen == true) {
                            printf("Voce inspeciona as manchas\nForam pintadas ali com sangue\nmas voce consegue claramente distinguir\ndois caracteres escritos\n\nA4\n\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                            scanf("%d", &choice);
                            if (choice == 1) {
                                break;
                            }
                        }
                    }
                }

                //SIDE CHANGE
                if (choice == 2){
                    room_side = 3;
                }
                if (choice == 3) {
                    room_side = 1;
                }
            }
        }
}
