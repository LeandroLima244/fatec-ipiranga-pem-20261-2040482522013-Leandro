#include "interface.h"
#include <stdio.h>

void exibirMenu(void) {
    printf("\n========================================\n");
    printf("   CUCC - Conversor e Calculadora       \n");
    printf("         Cientifica                     \n");
    printf("========================================\n");
    printf(" 1. Converter Decimal para Binario\n");
    printf(" 2. Calcular Potencia\n");
    printf(" 3. Soma dos Digitos\n");
    printf(" 0. Sair\n");
    printf("========================================\n");
    printf("Escolha uma opcao: ");
}

int lerOpcao(void) {
    int opcao;
    scanf("%d", &opcao);
    return opcao;
}

int lerInteiro(const char *mensagem) {
    int valor;
    printf("%s", mensagem);
    scanf("%d", &valor);
    return valor;
}
