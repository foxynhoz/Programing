#include <stdio.h>
#include<math.h>

int main(){

float a, b;
char sinal;

printf("Digite o primeiro numero:\n");
scanf("%f",&a);

printf("Digite o sinal da equação: (+, -, , /) \n");
getchar();
scanf("%c",&sinal);

printf("Digite o segundo numero:\n");
scanf("%f",&b);

if (sinal == '+'){
 a=a+b;
printf("A soma dos dois numeros e:%.2f", a);
}
else if(sinal == '-'){
 a=a-b;
printf("A subtração dos dois numeros e:%.2f",a);
}
else if(sinal == '*'){
a=a*b;
printf("A multiplicação dos dois numeros e:%.2f",a);
}
else if(sinal == '/'){
  if(b == 0){
printf("Impossivel dividir por 0");
 return 0;
}
a=a/b;
printf("A divisão dos dois numeros e:%.2f",a);

return 0;
}
}
