// Daniel Freitas do Amaral
// Exercicio 2 - Calculadora
// 11-04-25
// Atividade 1

#include <stdio.h>

int main() {

    float valor1;
    float valor2;
    char operacao;

    printf("Digite o primeiro valor\n>> ");
    scanf("%f", &valor1);

while (operacao != '+' || operacao != '-' || operacao != '*' || operacao != '/')  {

    getchar();
    printf("\nDigite a opera��o a ser realizada\n( +, -, * ou /)\n>> ");
    scanf("%c", &operacao);

    if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/') {
        break;
    }
    else {
        printf("\nOpera��o invalida");
    }
}

    printf("\nDigite o segundo valor: ");
    scanf("%f", &valor2);

switch (operacao) {
        case '+':
            printf("A soma entre %.f e %.f eh igual a %.f", valor1,valor2,valor1+valor2);
            break;
        case '-':
            printf("A subtra�ao entre %.f e %.f eh igual a %.f", valor1,valor2,valor1-valor2);
            break;
        case '*':
            printf("A Multiplica��o entre %.f e %.f eh igual a %.f", valor1,valor2,valor1*valor2);
            break;
        case '/':
            printf("A divis�o entre %.2f e %.2f eh igual a %.2f", valor1,valor2,valor1/valor2);
            break;
}
    return 0;
}
