#include <math.h>
#include "calculadora.h"

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

float potencia(float base, float expoente) {
    return powf(base, expoente);
}

float raiz(float x) {
    return sqrtf(x);
}

unsigned long long fatorial(int n) {
    if (n < 0) return 0;
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

float porcentagem(float total, float percentual) {
    return (total * percentual) / 100.0f;
}

float modulo(float x) {
    return fabsf(x);
}

float maximo(float a, float b) {
    return (a > b) ? a : b;
}

float minimo(float a, float b) {
    return (a < b) ? a : b;
}