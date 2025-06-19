#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int op; char op2;
    do {
        do {
            printf("===============================\n   Calculadora Simples\n===============================\nSelecione uma operacao:\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao:");
            scanf("%d", &op);
            if (op < 1 || op > 5) printf("Op��o invalida. Digite apenas uma das opcoes fornecidas.\n");
        } while (op < 1 || op > 5);
        if (op == 5) {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            return 0;
        }
        float n1, n2;
        printf("Digite o primeiro numero: "); scanf("%f", &n1);
        printf("Digite o segundo numero: "); scanf("%f", &n2);
        if (op == 1) printf("Resultado: %.0f + %.0f = %.0f\n", n1, n2, n1 + n2);
        else if (op == 2) printf("Resultado: %.0f - %.0f = %.0f\n", n1, n2, n1 - n2);
        else if (op == 3) printf("Resultado: %f x %f = %f\n", n1, n2, n1 * n2);
        else {
            if (n2 == 0) printf("Erro: Divisao por zero nao e permitida.\n");
            else printf("Resultado: %f / %f = %f\n", n1, n2, n1 / n2);
        }
        do {
            printf("Deseja realizar outra operacao? (s/n):"); scanf(" %c", &op2);
            if (op2 != 's' && op2 != 'S' && op2 != 'N' && op2 != 'n') printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
        } while (op2 != 's' && op2 != 'S' && op2 != 'N' && op2 != 'n');
        if (op2 == 'n' ||  op2 == 'N') {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            return 0;
        }
        system("cls");
        system("clear");
    } while (op != 5 && (op2 != 'N' && op2 != 'n'));







    system("pause");
    return 0;
}
