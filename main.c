#include <stdio.h>
#include <string.h>
#include "calculadora.h"

#define TAMANHO_MAXIMO 100
#define OPERADORES "+-*/^"

int main() {
    Expressao expr;
    strcpy(expr.posFixa, "9 5 2 8 * 4 + * +");
    expr.Valor = getValor(expr.posFixa);
    strcpy(expr.inFixa, getFormaInFixa(expr.posFixa));

    printf("Expressao Infixa: %s\n", expr.inFixa);
    printf("Valor: %.2f\n", expr.Valor);

    return 0;
}
