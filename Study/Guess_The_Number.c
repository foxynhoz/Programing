#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNum;
int chances;
int x;
int dificulty;

int gerador(int a);

int main()
{
    x = gerador(x);

    printf("ESCOLHA A DIFICULDADE\n1 - Facil\n2 - Medio\n3 - Dificil\n\n>>");
    scanf("%d", &dificulty);

    switch (dificulty)
    {
        case 1:
            chances = 10;
            break;
        case 2:
            chances = 5;
            break;
        case 3:
            chances = 3;
            break;
        default:
            printf("Nope\n\n");
            main();
    }


    while (chances != 0)
    {
        printf("\n\nADVINHE O NUMERO - VOCE TEM %d CHANCES\nDigite um numero de 1 a 100: ", chances);
        scanf("%d", &randomNum);

        if (x == randomNum)
        {
            printf("VOCE GANHOU\n");
            return 0;
        }
        else if (randomNum > x)
        {
            printf("<<<<<MENOS");
            chances--;
        }
        else if (randomNum < x)
        {
            printf(">>>>>MAIS");
            chances--;
        }
    }
    printf("\n\nVOCE PERDEU\nO numero secreto era %d\n",x);
}

int gerador(int a){
    int numero;
    srand(time(NULL));
    a = numero = (rand() % 100) + 1;
    return a;
}

