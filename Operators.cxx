#include<stdio.h>
int main(){
    int num1, num2,answer;
    char op ;
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("  %c", &op);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    switch (op) {
        case '+':
            answer = num1 + num2;
            printf("Answer: %d + %d = %d\n", num1, num2, answer);
            break;
        case '-':
            answer = num1 - num2;
            printf("answer: %d - %d = %d\n", num1, num2, answer);
            break;
        case '*':
            answer = num1 * num2;
            printf("answer: %d * %d = %d\n", num1, num2, answer);
            break;
        case '/':
                answer = num1 / num2;
                printf("answer: %d / %d = %d\n", num1, num2, answer);
            break;
        case '%':
                answer = num1 % num2;
                printf("answer: %d %% %d = %d\n", num1, num2, answer);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}