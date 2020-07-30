#include<stdio.h>
#include<stdlib.h>

int main(void) {

    double x;
    double y;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%lf", &y);

    if(op == '+') {
        printf("%f", x + y);
    } else if(op == '/') {
        printf("%f", x / y);
    } else if(op == '*') {
        printf("%f", x * y);
    } else if(op == '-') {
        printf("%f", x - y);
    } else {
        printf("Invalid operator");
    }

    return 0;
}
