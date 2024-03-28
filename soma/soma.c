#include "stack.h"

int soma(int num1, int num2) {
    Stack s;
    initialize(&s);
    
    int carry = 0;
    int resultado = 0;

    while (num1 > 0 || num2 > 0 || carry > 0) {
        int digitoNum1 = num1 % 10;
        int digitoNum2 = num2 % 10;
        int soma = digitoNum1 + digitoNum2 + carry;
        push(&s, soma % 10);
        carry = soma / 10;
        num1 /= 10;
        num2 /= 10;
    }

    while (!isEmpty(&s)) {
        resultado = resultado * 10 + pop(&s);
    }

    return resultado;
}