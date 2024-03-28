#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Erro: Pilha cheia\n");
        return;
    }
    s->items[++(s->top)] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Erro: Pilha vazia\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}
