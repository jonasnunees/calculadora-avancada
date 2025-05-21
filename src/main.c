#include <stdio.h>
#include "calculadora.h"

int main() {
    float num1, num2, resultado;
    int operador;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("\nSelecione o operador:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha: ");
    scanf("%d", &operador);

    switch (operador) {
        case 1:
            resultado = somar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrair(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        default:
            printf("Operador inválido.\n");
            break;
    }

    return 0;
}