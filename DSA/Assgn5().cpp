#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char infix[MAX];
char postfix[MAX], stk[MAX];
int top = -1;

void PUSH(char c) {
    stk[++top] = c;
}

char POP() {
    return stk[top--];
}

int preced(char ch) {
    switch (ch) {
        case '^':
            return 4;
        case '*':
        case '/':
            return 3;
        case '+':
        case '-':
            return 2;
        case '(':
            return 1;
        default:
            return 0;
    }
}

int isRightAssociative(char ch) {
    return ch == '^';
}

int main() {
    int i = 0, j = 0;
    char ch, x;

    printf("Enter infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0';  // Remove newline

    while ((ch = infix[i++]) != '\0') {
        switch (ch) {
            case '(':
                PUSH(ch);
                break;
            case ')':
                while (top != -1 && (x = POP()) != '(') {
                    postfix[j++] = x;
                }
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (top != -1 && (
                    (isRightAssociative(ch) && preced(stk[top]) > preced(ch)) ||
                    (!isRightAssociative(ch) && preced(stk[top]) >= preced(ch))
                )) {
                    postfix[j++] = POP();
                }
                PUSH(ch);
                break;
            default:
                postfix[j++] = ch;
        }
    }

    while (top != -1) {
        postfix[j++] = POP();
    }

    postfix[j] = '\0';
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}
