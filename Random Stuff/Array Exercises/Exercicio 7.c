#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int chave;
    bool encontrado = false;

    scanf("%d", &chave);

    for(int i = 0; i < 10; i++){
        if(chave == arr[i]){
            encontrado = true;
        }

    }

    printf("%s\n", encontrado ? "Encontrado" : "Não encontrado");

    return 0;
}
