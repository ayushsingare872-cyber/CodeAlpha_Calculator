#include <stdio.h>

int main(void) {
    char op, again;
    double a, b;

    do {
        printf("\n=== Simple Calculator ===\n");
        printf("Enter expression (e.g. 5 + 3): ");
        if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
            printf("Invalid input.\n");
            while (getchar() != '\n');   /* clear bad input */
            continue;
        }

        switch (op) {
            case '+':
                printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
                break;
            case '-':
                printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
                break;
            case '*':
                printf("Result: %.2f * %.2f = %.2f\n", a, b, a * b);
                break;
            case '/':
                if (b == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
                break;
            default:
                printf("Error: Invalid operator '%c'. Use + - * /\n", op);
        }

        printf("Calculate again? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    printf("Goodbye!\n");
    return 0;
}
