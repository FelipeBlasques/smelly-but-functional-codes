#include "stack.h"
#include <stdio.h>

int soma(int num1, int num2);

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("A soma dos numeros eh: %d\n", soma(num1, num2));
    return 0;
}
