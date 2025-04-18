#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main() {
//Global_Variable
    int language;
 //Variables
    int code;
    bool gameOver = false;
    int room_side = 1;
    int choice = 0;
    bool isWindowOpen = false;
    bool isVaultOpen = false;
    bool hasKey = false;

while (language != 1 || language != 2) {
    printf("Select your language (Type the number and press enter):\n\n1 - English\n2 - Portuguese\n\n>> ");
    scanf("%d", &language);
    if (language > 2) {
        printf("Invalid language\n");
    }
    if (language <= 2) {
        break;
    }
}
if (language == 2) {

    printf("+++++STOOPID ROOM+++\n++++++THE GAME++++++\n\nDigite o numero correspondente a opcao desejada para executar a ação\n\n");

    sleep(2);

    printf("\n\nVoce acorda em uma sala estranha, voce se sente confuso sobre o que isso se trata\n\n");
    sleep(2);
while (gameOver == false) {
    //MAIN LOOP
    while (room_side == 1) {
        printf("\n╔══╝---╚══◙◙════╗\n"
                "║                 ║\n"
                "║⑊              〢║\n"
                "║⑊      ▲       〢║\n"
                "║⑊              〢║\n"
                "║                 ║\n"
                "╚════𝄃𝄃𝄀𝄃════╝\n");
        printf("\nOlhando em volta, voce ve uma porta com um cofre ao lado\nO que voce faz?\n\n1 - Inspeciona a porta\n2 - Inspeciona o cofre\n3 - Virar para a esquerda\n4 - Virar para a direita\n\n>> ");
        scanf("%d", &choice);

        //DOOR ROUTE
        if (choice == 1) {
            printf("\n╔══╝---╚══◙◙═══════╗\n"
                     "║    ▲               ║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║                    ║\n"
                     "╚════𝄃𝄃𝄀𝄂𝄃═════╝\n");
            printf("\nVoce inspeciona a porta de ferro, ela parece estar trancada por uma chave\nO que voce faz?\n\n1 - Abrir cadeado\n2 - Voltar\n\n>> ");
            scanf("%d", &choice);
            if (choice == 1 && hasKey == true) {
                printf("\nA porta se abre, voce sai da sala.\n\nMas logo percebe que está no Brasil, e o Lula eh presidente.\nVoce ganhou o jogo, mas a que custo?\n\nFIM\n");
                gameOver = true;
                return 0;
            }
            else if (choice == 1 && hasKey == false) {
                printf("\nVocê tenta abrir o cadeado\nMas nao tem forças o suficiente pra isso\nIsso seria bem mais facil se voce tivesse uma chave\nO que voce faz?\n\n1 - Voltar\n\n>>");
                scanf("%d", &choice);
                if (choice == 1) {
                    continue;
                }
            }
        if (choice == 2) {
            continue;
        }
        }

        //VAULT ROUTE
        if (choice == 2) {
            printf("\n╔══╝---╚══◙◙═══════╗\n"
                     "║          ▲         ║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║                    ║\n"
                     "╚════𝄃𝄃𝄀𝄂𝄃═════╝\n");
            sleep(2);
            printf("\n╔════════════════════════╗\n"
                     "║╭━━━╮╭━━━╮╭━━━╮║  ║\n"
                     "║┃╭━╮┃┃╭━╮┃┃╭━╮┃║  ║\n"
                     "║┃╰━╯┃┃╰━╯┃┃╰━╯┃║  ║\n"
                     "║╰━━━╯╰━━━╯╰━━━╯║  ║\n"
                     "╚════════════════════════╝\n");
            if (isVaultOpen == false) {
                printf("\nVoce inspeciona o cofre... ele pede um codigo de 3 digitos\nDigite o codigo: ");
                scanf("%d", &code);
                if (code == 420) {
                    hasKey = true;
                    isVaultOpen = true;
                    printf("\nooo,    .---.\n"
                        " o` o  /     |_________________\n"
                        "o`'oooo  ()    ________   _   _)\n"
                        "`ooo`  |     |/        | | |_|\n"
                        "`ooo'   `---'         "" |_|\n"
                        "\n");
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
        if (choice == 2) {
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
    while (room_side == 2) {
        printf("\n╔══╝---╚══◙◙════╗\n"
                "║                  ║\n"
                "║⑊               〢║\n"
                "║⑊      ▶        〢║\n"
                "║⑊               〢║\n"
                "║                  ║\n"
                "╚════𝄃𝄃𝄀══════╝\n");
        printf("Voce ve uma pintura de uma criatura amarela na parede\nO que voce faz?\n\n1 - Inspecionar a pintura\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
        scanf("%d", &choice);
        //PAINTING ROUTE
        if (choice == 1)
            printf("\n╔══╝---╚══◙◙════╗\n"
                     "║                 ║\n"
                     "║⑊              〢║\n"
                     "║⑊            ▶ 〢║\n"
                     "║⑊              〢║\n"
                     "║                 ║\n"
                     "╚════𝄃𝄃𝄃═════╝\n");
            printf("Voce inspeciona a pintura, e atraz dela, voce encontra um texto enigmatico que diz:\n\nhttps://imgur.com/a/bSdx0Y2\n\nVoce nao sabe o que isso significa, mas reconhece onde poderia ser util ;)\nVoce volta ao centro da sala e\n");
        //SIDE CHANGE
        if (choice == 2) {
            room_side = 1;
        }
        if (choice == 3) {
            room_side = 3;
        }
    }
    //WINDOW SIDE
    while (room_side == 3) {
        //WINDOW ROUTE
        if (isWindowOpen == false) {
            printf("\n╔══╝---╚══◙◙════╗\n"
                    "║                  ║\n"
                    "║⑊               〢║\n"
                    "║⑊      ▼        〢║\n"
                    "║⑊               〢║\n"
                    "║                  ║\n"
                    "╚════𝄃𝄃𝄀══════╝\n");
            printf("Voce ve uma janela fechada por uma cortina\nO que voce faz?\n\n1 - Abrir a cortina\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
            scanf("%d", &choice);
            if (choice == 1) {
                isWindowOpen = true;
                break;
            }
        }
        if (isWindowOpen == true) {
            printf("\n╔══╝---╚══◙◙════╗\n"
                    "║                  ║\n"
                    "║⑊               〢║\n"
                    "║⑊      ▼        〢║\n"
                    "║⑊               〢║\n"
                    "║                  ║\n"
                    "╚════𝄃𝄃𝄀══════╝\n");
            printf("Voce ve uma janela com grades, e no fundo, uma arvore \nO que voce faz?\n\n1 - Inspecionar la fora\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
            scanf("%d", &choice);
            }
           if (choice == 1) {
                printf("Voce olha para fora, e ve uma arvore\nNela, voce ve dois caracteres\n\nC0\n\nVoce se pergunta o que isso quer dizer...\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                scanf("%d", &choice);
                if (choice == 1) {
                    break;
                }
            }

        //SIDE CHANGE
        if (choice == 2) {
            room_side = 2;
        }
        if (choice == 3) {
            room_side = 4;
        }
    }
    //BLOOD SIDE
    while (room_side == 4) {
        printf("\n╔══╝---╚══◙◙════╗\n"
                 "║                 ║\n"
                 "║⑊              〢║\n"
                 "║⑊      ◀       〢║\n"
                 "║⑊              〢║\n"
                 "║                 ║\n"
                 "╚════𝄃𝄃𝄀═════╝\n");
        printf("Voce ve uma manchas escuras enormes na parede\nO que voce faz?\n\n1 - Inspecionar as manchas\n2 - Virar a esquerda\n3 - Virar a direita\n\n>> ");
        scanf("%d", &choice);
        //BLOOD ROUTE
        if (choice == 1) {
            if (isWindowOpen == false) {
                printf("\n╔══╝---╚══◙◙════╗\n"
                 "║                 ║\n"
                 "║⑊              〢║\n"
                 "║⑊ ◀            〢║\n"
                 "║⑊              〢║\n"
                 "║                 ║\n"
                 "╚════𝄃𝄃𝄀═════╝\n");
                printf("Voce inspeciona as manchas, porem\nestá muito escuro para ver direito o que elas são\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                scanf("%d", &choice);
                if (choice == 1) {
                    break;
            }
            }
        if (choice == 1) {
            if (isWindowOpen == true) {
                printf("\n╔══╝---╚══◙◙════╗\n"
                 "║                 ║\n"
                 "║⑊              〢║\n"
                 "║⑊ ◀            〢║\n"
                 "║⑊              〢║\n"
                 "║                 ║\n"
                 "╚════𝄃𝄃𝄀═════╝\n");
                printf("Voce inspeciona as manchas\nForam pintadas ali com sangue\nmas voce consegue claramente distinguir\ndois caracteres escritos\n\nA4\n\nO que voce faz?\n\n1 - Voltar\n\n>> ");
                    scanf("%d", &choice);
                    if (choice == 1) {
                        break;
                }
            }
            }
        }

        //SIDE CHANGE
        if (choice == 2) {
            room_side = 3;
        }
        if (choice == 3) {
            room_side = 1;
        }
    }
}
}
if (language == 1) {

        printf("+++++STOOPID ROOM+++\n++++++THE GAME++++++\n\nType the corresponding number to execute the desired action.\n\n");

        sleep(2);

        printf("\n\nYou wake up on a strange room, feeling confused on what is happening\n\n");
        sleep(2);
    while (gameOver == false) {
        //MAIN LOOP
        while (room_side == 1) {
            printf("\n╔══╝---╚══◙◙════╗\n"
                "║                 ║\n"
                "║⑊              〢║\n"
                "║⑊      ▲       〢║\n"
                "║⑊              〢║\n"
                "║                 ║\n"
                "╚════𝄃𝄃𝄀𝄃════╝\n");
            printf("\nLooking around you see a door, with a vault by its side\nWhat do you do?\n\n1 - Inspect the door\n2 - Inspect the vault\n3 - Turn Left\n4 - Turn Right\n\n>> ");
            scanf("%d", &choice);

            //DOOR ROUTE
            if (choice == 1) {
                printf("\n╔══╝---╚══◙◙═══════╗\n"
                     "║    ▲               ║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║                    ║\n"
                     "╚════𝄃𝄃𝄀𝄂𝄃═════╝\n");
                printf("\nYou inspect the heavy iron door, it's locked with a padlock\nWhat do you do?\n\n1 - Open Padlock\n2 - Go back\n\n>> ");
                scanf("%d", &choice);
                if (choice == 1 && hasKey == true) {
                    printf("\nThe door opens wide.\n\nBut soon you realize you are in the US paying for Taxes and Health Insurance.\nYou won the game, but at what cost?\n\nFIM\n");
                    gameOver = true;
                    return 0;
                }
                else if (choice == 1 && hasKey == false) {
                    printf("\nYou try to open the padlock\nBut you don't have enough strength for that\nThis would be much easier if you had a key\nWhat do you do?\n\n1 - Go back\n\n>>");
                    scanf("%d", &choice);
                    if (choice == 1) {
                        continue;
                    }
                }
            if (choice == 2) {
                continue;
            }
            }

            //VAULT ROUTE
            if (choice == 2) {
                printf("\n╔══╝---╚══◙◙═══════╗\n"
                     "║          ▲         ║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║⑊                 〢║\n"
                     "║                    ║\n"
                     "╚════𝄃𝄃𝄀𝄂𝄃═════╝\n");
                sleep(2);
                printf("\n╔════════════════════════╗\n"
                     "║╭━━━╮╭━━━╮╭━━━╮║  ║\n"
                     "║┃╭━╮┃┃╭━╮┃┃╭━╮┃║  ║\n"
                     "║┃╰━╯┃┃╰━╯┃┃╰━╯┃║  ║\n"
                     "║╰━━━╯╰━━━╯╰━━━╯║  ║\n"
                     "╚════════════════════════╝\n");;
                if (isVaultOpen == false) {
                    printf("\nYou inspect the vault... it asks for a 3-digit code\nEnter the code: ");
                    scanf("%d", &code);
                    if (code == 420) {
                        hasKey = true;
                        isVaultOpen = true;
                        printf("\nooo,    .---.\n"
                            " o` o  /     |_________________\n"
                            "o`'oooo  ()    ________   _   _)\n"
                            "`ooo`  |     |/        | | |_|\n"
                            "`ooo'   `---'         "" |_|\n"
                            "\n");
                        sleep(2);
                        printf("\nThe vault opens, inside it there's a key\nYou take the key and return to the center of the room where\n");
                        break;
                    }
                    else {
                        printf("\nIncorrect code\n");
                        break;
                    }
                }
            }
            if (choice == 2) {
                if (isVaultOpen == true);
                    printf("\nYou inspect the vault... Now it's empty...\nWhat do you do?\n\n1 - Go back\n\n>> ");
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
        while (room_side == 2) {
            printf("\n╔══╝---╚══◙◙════╗\n"
                "║                  ║\n"
                "║⑊               〢║\n"
                "║⑊      ▶        〢║\n"
                "║⑊               〢║\n"
                "║                  ║\n"
                "╚════𝄃𝄃𝄀══════╝\n");
            printf("You see a painting of a yellow round creature on the wall\nWhat do you do?\n\n1 - Inspect the painting\n2 - Turn left\n3 - Turn right\n\n>> ");
            scanf("%d", &choice);
            //PAINTING ROUTE
            if (choice == 1)
                printf("\n╔══╝---╚══◙◙════╗\n"
                     "║                 ║\n"
                     "║⑊              〢║\n"
                     "║⑊            ▶ 〢║\n"
                     "║⑊              〢║\n"
                     "║                 ║\n"
                     "╚════𝄃𝄃𝄃═════╝\n");
                printf("You inspect the painting, and behind it, you find an enigmatic text that says:\n\nhttps://imgur.com/a/bSdx0Y2\n\nYou don't know what this means, but you recognize where it might be useful ;)\nYou return to the center of the room and\n");
            //SIDE CHANGE
            if (choice == 2) {
                room_side = 1;
            }
            if (choice == 3) {
                room_side = 3;
            }
        }
        //WINDOW SIDE
        while (room_side == 3) {
            //WINDOW ROUTE
            if (isWindowOpen == false) {
                printf("\n╔══╝---╚══◙◙════╗\n"
                    "║                  ║\n"
                    "║⑊               〢║\n"
                    "║⑊      ▼        〢║\n"
                    "║⑊               〢║\n"
                    "║                  ║\n"
                    "╚════𝄃𝄃𝄀══════╝\n");
                printf("You see a window covered by a curtain\nWhat do you do?\n\n1 - Open the curtain\n2 - Turn left\n3 - Turn right\n\n>> ");
                scanf("%d", &choice);
                if (choice == 1) {
                    isWindowOpen = true;
                    break;
                }
            }
            if (isWindowOpen == true) {
                printf("\n╔══╝---╚══◙◙════╗\n"
                    "║                  ║\n"
                    "║⑊               〢║\n"
                    "║⑊      ▼        〢║\n"
                    "║⑊               〢║\n"
                    "║                  ║\n"
                    "╚════𝄃𝄃𝄀══════╝\n");
                printf("You see a window with bars, and in the distance, a tree\nWhat do you do?\n\n1 - Inspect outside\n2 - Turn left\n3 - Turn right\n\n>> ");
                scanf("%d", &choice);
                }
               if (choice == 1) {
                    printf("You look outside and see a tree\nOn it, you see two characters\n\nC0\n\nYou wonder what this could mean...\nWhat do you do?\n\n1 - Go back\n\n>> ");
                    scanf("%d", &choice);
                    if (choice == 1) {
                        break;
                    }
                }

            //SIDE CHANGE
            if (choice == 2) {
                room_side = 2;
            }
            if (choice == 3) {
                room_side = 4;
            }
        }
        //BLOOD SIDE
        while (room_side == 4) {
            printf("\n╔══╝---╚══◙◙════╗\n"
                 "║                 ║\n"
                 "║⑊              〢║\n"
                 "║⑊      ◀       〢║\n"
                 "║⑊              〢║\n"
                 "║                 ║\n"
                 "╚════𝄃𝄃𝄀═════╝\n");
            printf("You see huge dark stains on the wall\nWhat do you do?\n\n1 - Inspect the stains\n2 - Turn left\n3 - Turn right\n\n>> ");
            scanf("%d", &choice);
            //BLOOD ROUTE
            if (choice == 1) {
                if (isWindowOpen == false) {
                    printf("\n╔══╝---╚══◙◙════╗\n"
                 "║                 ║\n"
                 "║⑊              〢║\n"
                 "║⑊ ◀            〢║\n"
                 "║⑊              〢║\n"
                 "║                 ║\n"
                 "╚════𝄃𝄃𝄀═════╝\n");
                    printf("You inspect the stains, but\nit's too dark to clearly see what they are\nWhat do you do?\n\n1 - Go back\n\n>> ");
                    scanf("%d", &choice);
                    if (choice == 1) {
                        break;
                }
                }
            if (choice == 1) {
                if (isWindowOpen == true) {
                    printf("\n╔══╝---╚══◙◙════╗\n"
                 "║                 ║\n"
                 "║⑊              〢║\n"
                 "║⑊ ◀            〢║\n"
                 "║⑊              〢║\n"
                 "║                 ║\n"
                 "╚════𝄃𝄃𝄀═════╝\n");
                    printf("You inspect the stains\nThey were painted there with blood\nbut you can clearly distinguish\ntwo characters written\n\nA4\n\nWhat do you do?\n\n1 - Go back\n\n>> ");
                        scanf("%d", &choice);
                        if (choice == 1) {
                            break;
                    }
                }
                }
            }

            //SIDE CHANGE
            if (choice == 2) {
                room_side = 3;
            }
            if (choice == 3) {
                room_side = 1;
            }
        }
    }
    }
}
