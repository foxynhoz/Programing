#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){

    system("color 1F");
    int numeros[10];
    int soma;

    for (int i = 0; i < 10; i++){

        scanf("%d", &numeros[i]);
        soma += + numeros[i];

    }

    system("color 0A");
    printf("%d", soma);
    return 0;
}
