#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

void menu_basico() {
    float a, b, resultado;
    int opcao;

    while (1) {
        printf("\n--- OPERACOES BASICAS ---\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);

        switch (opcao) {
            case 1:
                resultado = somar(a, b);
                break;
            case 2:
                resultado = subtrair(a, b);
                break;
            case 3:
                resultado = multiplicar(a, b);
                break;
            case 4:
                if (b != 0) resultado = dividir(a, b);
                else {
                    printf("Erro: divisão por zero.\n");
                    continue;
                }
                break;
            default:
                printf("Opção inválida.\n");
                continue;
        }
        printf("Resultado: %.2f\n", resultado);
    }
}

void menu_avancado() {
    float a, b, resultado;
    int opcao;

    while (1) {
        printf("\n--- OPERACOES AVANCADAS ---\n");
        printf("1 - Potenciação\n");
        printf("2 - Raiz quadrada\n");
        printf("3 - Fatorial\n");
        printf("4 - Porcentagem\n");
        printf("5 - Módulo\n");
        printf("6 - Máximo\n");
        printf("7 - Mínimo\n");
        printf("0 - Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) break;

        switch (opcao) {
            case 1:
                printf("Base: ");
                scanf("%f", &a);
                printf("Expoente: ");
                scanf("%f", &b);
                resultado = potencia(a, b);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Número: ");
                scanf("%f", &a);
                if (a < 0) printf("Erro: raiz de número negativo.\n");
                else printf("Resultado: %.2f\n", raiz(a));
                break;
            case 3:
                printf("Número inteiro: ");
                scanf("%f", &a);
                if ((int)a == a && a >= 0)
                    printf("Resultado: %llu\n", fatorial((int)a));
                else
                    printf("Erro: fatorial só para inteiros não negativos.\n");
                break;
            case 4:
                printf("Total: ");
                scanf("%f", &a);
                printf("Percentual: ");
                scanf("%f", &b);
                printf("%.2f%% de %.2f = %.2f\n", b, a, porcentagem(a, b));
                break;
            case 5:
                printf("Número: ");
                scanf("%f", &a);
                printf("Resultado: %.2f\n", modulo(a));
                break;
            case 6:
                printf("Primeiro número: ");
                scanf("%f", &a);
                printf("Segundo número: ");
                scanf("%f", &b);
                printf("Maior: %.2f\n", maximo(a, b));
                break;
            case 7:
                printf("Primeiro número: ");
                scanf("%f", &a);
                printf("Segundo número: ");
                scanf("%f", &b);
                printf("Menor: %.2f\n", minimo(a, b));
                break;
            default:
                printf("Opção inválida.\n");
        }
    }
}

int main() {
    int opcao;

    while (1) {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Operações Básicas\n");
        printf("2 - Operações Avançadas\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menu_basico();
                break;
            case 2:
                menu_avancado();
                break;
            case 0:
                printf("Encerrando...\n");
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}