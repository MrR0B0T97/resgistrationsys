#include <stdio.h>
#include <stdlib.h>

float soma (float a, float b);
float subtracao (float a, float b);
float divisao (float a, float b);
float multiplicacao (float a, float b);

int main (){
    int menu;
    float valor1,valor2,resultado;
    printf ("Informe dois valores a serem calculados: ");
    fflush(stdin);
    scanf ("%f%f", &valor1, &valor2);
    printf ("Informe qual a operação a ser realizada: \n");
    printf ("(1)- Soma / (2)- Subtração / (3)- Multiplicação / (4)- Divisão\n");
    fflush(stdin);
    scanf ("%d",&menu);
    switch (menu){
        case 1:
            resultado=soma(valor1,valor2);
            printf ("Resultado da operacao eh: %f ", resultado);
            break;
        case 2:
            resultado=subtracao(valor1,valor2);
            printf ("Resultado da operacao eh: %f ", resultado);
            break;
        case 3:
            resultado=divisao(valor1,valor2);
            printf ("Resultado da operacao eh: %f ", resultado);
            break;
        case 4:
            resultado=multiplicacao(valor1,valor2);
            printf ("Resultado da operacao eh: %f ", resultado);
            break;
        default:
            printf ("Error!\n Selecione uma das opções acima.\n");
    }
return 0;
}

float soma (float a, float b){
float result;
result=a+b;
return result;
}
float subtracao (float a, float b){
float result;
result=a-b;
return result;
}
float divisao (float a, float b){
float result;
result=a/b;
return result;
}
float multiplicacao (float a, float b){
float result;
result=a*b;
return result;
}