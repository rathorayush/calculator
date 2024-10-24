#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    return (float)x / y;
}

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

float inverse(int x) {
    if (x == 0) {
        printf("Inverse undefined for 0.\n");
        return 0;
    }
    return 1.0 / x;
}

int main() {
    int a, b;
    char operation;
    char confirm = 'n';

    do {
        printf("\nChoose an operation (+, -, *, /, ^, #, i):\n");
        printf("+: Addition\n");
        printf("-: Subtraction\n");
        printf("*: Multiplication\n");
        printf("/: Division\n");
        printf("^: Square of a number\n");
        printf("#: Cube of a number\n");
        printf("i: Inverse of a number\n");

        printf("Enter operation: ");
        scanf(" %c", &operation);

        switch (operation) {
            case '+':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d + %d is %d\n", a, b, add(a, b));
                break;
            case '-':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d - %d is %d\n", a, b, subtract(a, b));
                break;
            case '*':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("The result of %d * %d is %d\n", a, b, multiply(a, b));
                break;
            case '/':
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                if (b != 0) {
                    printf("The result of %d / %d is %.2f\n", a, b, divide(a, b));
                } else {
                    printf("Division by zero is not allowed.\n");
                }
                break;
            case '^':
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("The square of %d is %d\n", a, square(a));
                break;
            case '#':
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("The cube of %d is %d\n", a, cube(a));
                break;
            case 'i':
                printf("Enter an integer: ");
                scanf("%d", &a);
                if (a != 0) {
                    printf("The inverse of %d is %.2f\n", a, inverse(a));
                }
                break;
            default:
                printf("Invalid operation.\n");
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &confirm);
    } while (confirm == 'y');

    return 0;
}

