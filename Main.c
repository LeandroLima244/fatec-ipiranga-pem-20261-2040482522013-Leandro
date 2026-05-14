/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:calculadora científica de terminal*
* Data - 14/05/2026                                      * 
* Autor: Leandro Lima Medeiros ; 2040482522013           *
*-------------------------------------------------------*/

#include <stdio.h>
#include "recursao.h"
#include "interface.h"

int main(void) {
    int opcao;
    int numero, base, exp, resultado;

    do {
        exibirMenu();
        opcao = lerOpcao();

        switch (opcao) {
            case 1:
                numero = lerInteiro("Digite um numero decimal (>= 0): ");
                if (numero < 0) {
                    printf("Por favor, insira um numero nao negativo.\n");
                    break;
                }
                printf("Representacao binaria de %d: ", numero);
                if (numero == 0) {
                    printf("0");
                } else {
                    decToBin(numero);
                }
                printf("\n");
                break;

            case 2:
                base = lerInteiro("Digite a base: ");
                exp  = lerInteiro("Digite o expoente (>= 0): ");
                if (exp < 0) {
                    printf("O expoente deve ser maior ou igual a 0.\n");
                    break;
                }
                resultado = potencia(base, exp);
                printf("%d ^ %d = %d\n", base, exp, resultado);
                break;

            case 3:
                numero = lerInteiro("Digite um numero inteiro: ");
                resultado = somaDigitos(numero);
                printf("Soma dos digitos de %d = %d\n", numero, resultado);
                break;

            case 0:
                printf("Encerrando o programa. Ate logo!\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
