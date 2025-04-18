
#include <stdio.h>
#include <stdlib.h>

int valor, aumento;

void UI(int valor){
    printf("===============\n======%d=======\n===============", valor);
}

int main()
{
    valor = 12;
    valor = valor + 12;

    UI(valor);
    return 0;
}
