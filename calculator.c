#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    int validOperator = 0;

    while(!validOperator) {
        printf("Enter first number : ");
        scanf("%lf", &num1);
        printf("Enter second number : ");
        scanf("%lf", &num2);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);
        if(operator == '+' || operator == '-' || operator == '*' || operator == '/') {
            validOperator = 1;
        } else {
            printf("Invalid operator. Please try again.\n");
        }

        switch(operator) {
            case '+':
                printf("the result from the operation %.lf %c %lf = %.1f : ", num1, operator, num2, num1 + num2);
                break;
            case '-':
                printf("the result from the operation %.lf %c %.lf = %.1f : ", num1, operator, num2, num1 - num2);
                break;
            case '*':
                printf("the result from the operation %.lf %c %.lf = %.1f : ", num1, operator, num2, num1 * num2);
                break;
            case '/':
                printf("the result from the operation %.lf %c %.lf = %.1f : ", num1, operator, num2, num1 / num2);
                break;
            default:
                printf("Invalid operator. Please try again.\n");
                break;
        }

    }

    return 0;
}